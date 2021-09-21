class Result {

    public static String dayOfProgrammer(int year) {
    if(year < 1918) {
        return year%4 == 0 ? "12.09."+year : "13.09."+year;
    } else if(year == 1918) {
        return "26.09.1918";
    } else {
        return (year % 4==0 && year % 4 != 0) || year % 400 == 0 ? "12.09." + year : "13.09." + year;
    }

    }

}
