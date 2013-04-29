//
//  main.c
//  SpaceCount
//
//  Created by Daniel Buckle on 28/04/2013.
//  Copyright (c) 2013 Daniel Buckle. All rights reserved.
//

#include <stdio.h>

int spaceCount(const char *sentence){
    int numString = 0;
    for (int i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] == 0x20) {
            numString++;
        }
    }
    return numString;
}

int main(int argc, const char * argv[])
{
    const char *sentence = "He was not in the cab at the time.";
    printf("\"%s\" has %d spaces",sentence, spaceCount(sentence));
}

