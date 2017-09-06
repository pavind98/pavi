Scanner sc = new Scanner(System.in);
while(sc.hasNext())
{
System.out.print("Enter departure city <'Q' or 'q' to exit>: ");
String input = sc.next();

if(!(input.equals('q')) || !(input.equals('Q'))){
//system continues
}
else{
System.exit(0);
}
}
