package equalizer;

public final class FilterInfo {
    public final static short COUNT_OF_COFFS = 5;
    //Порядок фильтра равен COUNT_OF_COFFS - 1
    public static final double[] COFFS_NUM =  {
            9.964750069948e-05,-0.000398282822749,0.0005972707625114,-0.000398282822749,
            9.964750069948e-05
    };

    public static final double[] COFFS_DEN =  {
            1,   -3.991395786471,      5.9742243566,   -3.974261260511,
            0.9914326905011
    };
}