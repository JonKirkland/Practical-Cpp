//exercise 8-1

//print a checkerboard (8x8 grid) each square should be 5 by 3 char wide
#include <iostream>

int main()
{
    int i;
    int j;
    int k;
    //create logic for constructing one grid structure, split up into line by line, then loop over these instructions 8 times

    //first line (+-----+)
    //2nd line   (|     |)
    //2nd line   (|     |)
    //2nd line   (|     |)
    //first line (+-----+)
    
    for (j = 0; j < 8; j++) //first line out of main loop to avoid doubling up
    {
        std::cout << "+-----";
    }
    for(k=0;k<8;k++)//main loop
    {
        std::cout << "+\n";
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 8; j++) {
                std::cout << "|     ";
            }
            std::cout << "|\n"; //outside 2nd main loop to avoid doubling up: || 
        }
        for (j = 0; j < 8; j++) {
            std::cout << "+-----";
        }
    }
    std::cout << "+\n"; //final corner piece
    

    //return(0);
}
