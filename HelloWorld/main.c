//
//  main.c
//  HelloWorld
//
//  Created by Gunnar Hakonarson on 01/11/2014.
//  Copyright (c) 2014 Gunnar Hakonarson. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

int     main()
{
    int     vFirstArg,
    vSecondArg;
    char    vOperation;
    bool    vFinished;
    
    // Make sure our flag is initialized!
    vFinished = false;
    
    // Now loop until user doesn't want anymore:
    while( vFinished != true )
    {
        printf( "What operation do you want to do?\n" );
        scanf( "%c", &vOperation );
        fpurge( stdin );
        
        if( vOperation == '+' )
        {
            printf( "Enter left argument: " );
            scanf( "%d", &vFirstArg );
            fpurge( stdin );
            
            printf( "\nEnter right argument: " );
            scanf( "%d", &vSecondArg );
            fpurge( stdin );
            
            printf( "\n%d + %d = %d\n",
                   vFirstArg,
                   vSecondArg,
                   vFirstArg + vSecondArg );
        }
        else
            vFinished = true;
    }
    
    printf( "Finished.\n" );
    
    return 0;
}