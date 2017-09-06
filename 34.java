String s="aa56aa";
Pattern pattern = Pattern.compile("\\d");
Matcher matcher = pattern.matcher(s);

System.out.println(matcher.find());
