nt specialCharCount = 0;
        for ( int x = 0; x < specialChars.length ; ++x) {
               specialCharCount = password.length() - password.replaceAll("\\specialChars[x]", "").length();
           }
           System.out.print(" and " + specialCharCount + " special characters.\n\n");
