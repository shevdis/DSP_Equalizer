package effects;

public class Сlipping extends Effect {
    private static final short UPPER_BOUND = 14000; //верхний порог среза
    private static final short LOWER_BOUND = -14000; //нижний порог среза
    private static final double GAIN = 3; //общее усиление сигнала
    public Сlipping() {
    }

    public void setInputSampleStream(short[] inputAudioStream) {
        this.inputAudioStream = inputAudioStream;
    }

    @Override
    public synchronized short[] createEffect() {
        for (int i = 0; i < this.inputAudioStream.length; i++) {
            this.inputAudioStream[i] *= (short) GAIN;
            if (this.inputAudioStream[i] > UPPER_BOUND)
                this.inputAudioStream[i] = UPPER_BOUND;
            else if (this.inputAudioStream[i] < LOWER_BOUND)
                this.inputAudioStream[i] = LOWER_BOUND;
        }
        return this.inputAudioStream;
    }
}