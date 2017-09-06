


up vote
2
down vote
favorite
public static long sumOfPrimes(long max){
    long sum = 0;
    long primes[] = new long[((int)max/2)+1];
    int index = 0;
    for(long counter = 2; counter <= max; counter++){
        if(isPrime(counter, primes)){
            sum += counter;
            primes[index++] = counter;
        }
    }
    return sum;
}

public static boolean isPrime(long num, long[] primes){
    if(num == 2 || num == 3){
        return true;
    }

    //System.out.println(Arrays.toString(primes));
    long primesCount = primes.length;
    for(int i = 0; i < primesCount; i++){
        if(primes[i] !=0 && num % primes[i] == 0){
            return false;
        }
    }

    long range = (long) Math.sqrt((double)num);
    if(primesCount > 0 && primes[primes.length-1] < range)
    {
        for(long counter = 2; counter <= range; counter++){
            if(num % counter == 0){
                return false;
            }
        }
    }
    return true;
}
