#include <stdio.h>
#include <stdlib.h>

int c01_SumOfDigitsMain(int num) {
	int k=1, sum=0; 
	
    while(num!=0) 
    { 
        k=num%10; 
        sum=sum+k; 
        k=num/10; 
        num=k; 
    } 
    return sum;
}

#ifndef __CXX_TEST_MAIN__

int main(int argc, char** argv){
	int num = 0;
	if (argc > 1) {
		num = *argv[1];
	}
    c01_SumOfDigitsMain(num);
    return 0;
}

#endif
