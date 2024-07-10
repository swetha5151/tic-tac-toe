#include<bits/stdc++.h>
using namespace std;
char xo[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};//declaring the value for tic tac toe table

void print()
{
    system("cls");//for printing clearscreen
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<xo[i][j]<<" ";//updated xo table will be printed
        }
        cout<<"\n";
    }
}
void position(int a,char value)//here in (int a) passing the value of position and char for person's game choice(x or o)
{
    static int flag=0;//in static flag=0 is declared
    switch(a)//switch case for finding position and in that placing whether it is x or o
    {
    case 1:
        {
            xo[0][0]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 2:
        {
            xo[0][1]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 3:
        {
            xo[0][2]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 4:
        {
            xo[1][0]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 5:
        {
            xo[1][1]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 6:
        {
            xo[1][2]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 7:
        {
            xo[2][0]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 8:
        {
            xo[2][1]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }
    case 9:
        {
            xo[2][2]=value;//placing whether it is x or o
            print();//calling the print function and print the updated value
            flag++;//flag is increamented
            break;
        }

    }
    //if flag is count 9 means the match is draw
    if(flag==9)
    {
        cout<<"game is draw";
        exit(1);
    }

    //condition for checking row
    for(int k=0;k<3;k++)
    {
         if(xo[k][0]=='x'&&xo[k][1]=='x'&&xo[k][2]=='x')//in a row all the values are x means x win
           {
              cout<<"x win"<<"\n";
              exit(0);//if x won means after that program will be ended
           }
           else if(xo[k][0]=='o'&&xo[k][1]=='o'&&xo[k][2]=='o')//in a row all the values are o means o win
           {
              cout<<"o win"<<"\n";
              exit(0);//if o won means after that program will be ended
           }
        }
 //condition for checking coloumn
        for(int k=0;k<3;k++)
         {
         if(xo[0][k]=='x'&&xo[1][k]=='x'&&xo[2][k]=='x')//in a coloumn all the values are x means x win
           {
              cout<<"x win"<<"\n";
              exit(0);//if x won means after that program will be ended
           }
           else if(xo[0][k]=='o'&&xo[1][k]=='o'&&xo[2][k]=='o')//in a coloumn all the values are o means o win
           {
              cout<<"o win"<<"\n";
              exit(0);//if o won means after that program will be ended
           }
        }
        //3rd condition for checking
        /* x o o
           o x o
           o o x
        */
        if(xo[0][0]=='x'&&xo[1][1]=='x'&&xo[2][2]=='x')
        {
            cout<<"x win"<<"\n";
            exit(0);//if x won means after that program will be ended
        }
        else if(xo[0][0]=='o'&&xo[1][1]=='o'&&xo[2][2]=='o')
        {
            cout<<"o win"<<"\n";
            exit(0);//if o won means after that program will be ended
        }
        //4th condition for checking
        /* o o x
           o x o
           x o o
        */
        if(xo[0][2]=='x'&&xo[1][1]=='x'&&xo[2][0]=='x')
        {
            cout<<"x win"<<"\n";
            exit(0);//if x won means after that program will be ended
        }
        else if(xo[0][2]=='o'&&xo[1][1]=='o'&&xo[2][0]=='o')
        {
            cout<<"o win"<<"\n";
            exit(0);//if o won means after that program will be ended
        }

}
int main()
{
    int pos,count=0;
    char person1,person2;
    cout<<"person1 - enter whether x or o :";//getting whether the person1 want x or o to play game
    cin>>person1;

    if(person1=='x')//if person1 enter x then automatically person2 will be assign as o for playing game
    {
       person2='o';
    }
    else
    {
       person2='x';
    }
    print();//calling the print function/ and the table displayed with actual assigned value which is before starting the game



    while(1)//while loop for asking the position where to place x and o for both the players respectively
    {
        cout<<"player1 position to place";
        cin>>pos;//getting the position from player 1
        position(pos,person1);//calling the function position and passing an argument as position and the char which person1 chosen(x or o)
        //after the above function execution here next line will be executed
        cout<<"player2 position to place";
        cin>>pos;//getting the position from player 2
        position(pos,person2);//passing an argument as position and the char which person2 chosen(x or o)
    }

}
