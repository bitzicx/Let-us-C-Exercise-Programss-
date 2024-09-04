// Very often in fairs we come across a puzzle that contains 15
// numbered square pieces mounted on a frame. These pieces
// can be moved horizontally or vertically. A possible
// arrangement of these pieces is shown below:
// 1 4 15 7
// 8 10 2 11
// 14 3 6 13
// 12 9 5
// Figure 8.12
// As you can see there is a blank at bottom right corner.
// Implement the following procedure through a program:
// Draw the boxes as shown above. Display the numbers in the
// above order. Allow the user to hit any of the arrow keys (up,
// down, left, or right).
// If user hits say, right arrow key then the piece with a number
// 5 should move to the right and blank should replace the
// original position of 5. Similarly, if down arrow key is hit, then
// 13 should move down and blank should replace the original
// position of 13. If left arrow key or up arrow key is hit then no
// action should be taken.
// The user would continue hitting the arrow keys till the
// numbers aren’t arranged in ascending order.
// Keep track of the number of moves in which the user manages
// to arrange the numbers in ascending order. The user who
// manages it in minimum number of moves is the one who
// wins.
// How do we tackle the arrow keys? We cannot receive them
// using scanf( ) function. Arrow keys are special keys which
// are identified by their ‘scan codes’. Use the following
// function in your program. It would return the scan code of the
// arrow key being hit. Don’t worry about how this function is
// written. We are going to deal with it later. The scan codes for
// the arrow keys are:
// up arrow key – 72 down arrow key – 80
// left arrow key – 75 right arrow key – 77
// /* Returns scan code of the key that has been hit */
// #include "dos.h"
// getkey( )
// {
// union REGS i, o ;
// while ( !kbhit( ) )
// ;
// i.h.ah = 0 ;
// int86 ( 22, &i, &o ) ;
// return ( o.h.ah ) ;
// }