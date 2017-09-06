 int compared = 0;
    for (int i = 0; i<s1.length() && i<s2.length(); i++){
        int a = s1.charAt(i);
        int b = s2.charAt(i);
        if(a < b){
            compared = -1;
        }
        else if(a > b){
            compared = 1;
        }
    }
    return compared;
