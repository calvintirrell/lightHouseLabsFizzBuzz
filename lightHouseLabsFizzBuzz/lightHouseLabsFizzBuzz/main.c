//  main.c
//  lightHouseLabsFizzBuzz
//
//  Created by Calvin Tirrell on 12/14/15.
//  Copyright © 2015 CT. All rights reserved.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int x = 1; x <= 100; x++) {
        if ((x%3 == 0) && (x%5 == 0)) {
            printf("FizzBuzz\n");
        } else if (x%3 == 0) {
            printf("Fizz\n");
        } else if (x%5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n",x);
        }
    }
    return 0;
}