#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
using namespace std;
string Name;
char yorn,chooseabcd;
int marks = 0,Wrong_direction = 0;
char replayorexit;
string stri;
void typer(string c)
{
    int a=0;
    int b = c.size();
    while(b>=a)
    {
        cout << c[a];
        int st = rand() % 20 + 20;
        Sleep(st);
        a++;
    }
    cout<<endl;
}
void loadingBar() {
    const int totalWidth = 40; 
    const int delayMillis = 100; 
    const int numIterations = 100; 

    for(int i = 0; i <= numIterations; ++i) {

        int progress = (i * 100) / numIterations;

        int numEquals = (i * totalWidth) / numIterations;

        cout << "\r[";
        for(int j = 0; j < numEquals; ++j) {
            cout << "=";
        }
        for(int j = numEquals; j < totalWidth; ++j) {
            cout << " ";
        }
        cout << "] " << progress << "%";

        Sleep(delayMillis-75);
    }
    Sleep(500);
    cout << endl;
}
class Com_qus
{
    public:
    int Testguidstatwithcout()
    {
        cout << "We will be taking a test as part of the interview process please choose the correct answer for the following questions."<<endl<<"\nYou will be shown 5 words in a specific order for 3 seconds. Remember the order and choose the correct answer.\nA total of 3 questions will be given each question contains a maximum of 10 marks"<<endl<<"\nEnter only a , b , c , d or  A , B , C , D"<<endl;
        return 0;
    }
    int Testguidstat()
    {
        typer("We will be taking a test as part of the interview process please choose the correct answer for the following questions.\nYou will be shown 5 words in a specific order for 3 seconds. Remember the order and choose the correct answer.\nA total of 3 questions will be given each question contains a maximum of 10 marks\nEnter only a , b , c , d or  A , B , C , D");
        return 0;
    }
    int Cross_road_qu(string cross_name)
    {
        typer("You have arrived at "+ cross_name +" Cross Road\nWhich way to go? \na) Go straight\nb) Turn left\nc) Turn right\nd) Take a U-Turn\n");
        return 0;
    }
    int Movie_theatre_qu(string theatre_name)
    {
        typer("You have arrived at "+ theatre_name +" movie theatre\nWhich way to go? \na) Go straight\nb) Turn left\nc) Turn right\nd) Take a U-Turn\n");
        return 0;
    }
    int Telephone_Booth_qu(string booth_name)
    {
        typer("You have arrived at "+ booth_name +" telephone booth\nWhich way to go? \na) Go straight\nb) Turn left\nc) Turn right\nd) Take a U-Turn\n");
        return 0;
    }
    int Market_qu(string market_name)
    {
        typer("You have arrived at "+ market_name +" market\nWhich way to go? \na) Go straight\nb) Turn left\nc) Turn right\nd) Take a U-Turn\n");
        return 0;
    }
    int Music_qu(string studio_name)
    {
        typer("You have arrived at "+ studio_name +" Music Studio\nWhich way to go? \na) Go straight\nb) Turn left\nc) Turn right\nd) Take a U-Turn\n");
        return 0;
    }
    int others_qn(string place_full_name)
    {
        typer("You have arrived at "+ place_full_name +" \nWhich way to go? \na) Go straight\nb) Turn left\nc) Turn right\nd) Take a U-Turn\n");
        return 0;
    }
};
int main()
{
    Start:
    Wrong_direction = 0;
    system("cls");
    cout << "\033[33m\n\n\t\t\t\t\t\t\t\t\tBecome A Navigator\033[0m\n"<<endl<<"\n\033[32m\t\t\t\t\tStart(y/Y)\033[0m\t\t\t\t\t\t\t\t\t\t\033[31mExit(n/N)\033[0m"<<endl<<"\n\nEnter your choice: ";
    yorn = _getch();
    if(yorn == 'y' || yorn == 'Y')
    {
        cout << "\n\033[34mYou pressed \033[0m"<<yorn<< " ";
        Sleep(1000);
        loadingBar();
    }
    else if(yorn == 'n' || yorn == 'N')
    {
        cout << "\n\033[34mYou pressed \033[0m"<< yorn << " " << endl;
        Sleep(1000);
        goto Exit;
    }
    else
    {
        system("cls");
        cout << "\nWrong Input try again...";
        Sleep(1000);
        goto Start;
    }
    system("cls");
    Com_qus ask;
    typer("\nNarrator: You are looking for a job in an travel agency in Block City. And have got an interview in CAT Travels and Co.\nWelcome to CAT Travels and Co.\nPlease Provide your name: ");
    cin >> Name;
    typer("\nPlease be seatted we will take your interview shortly");
    Sleep(3000);
    system("cls");
    typer("\nHello, " + Name );
    testcontinuegoto:
    ask.Testguidstat();
    typer("\nPress \'y/Y\' to continue and \'n/N\' to Quit");
    yorn = _getch();
    if(yorn == 'y' || yorn == 'Y')
    {
        system("cls");
        typer("\nStarting test is 3 secounds");
        Sleep(1000);
        system("cls");
        cout << "\nStarting test is 2 secounds";
        Sleep(1000);
        system("cls");
        cout << "\nStarting test is 1 secounds";
        Sleep(1000);
        system("cls");

    }
    else if(yorn == 'n' || yorn == 'N')
    {
        goto Exit;
    }
    else
    {
        typer("\nWrong Input... Try again...");
        Sleep(1000);
        system("cls");
        goto testcontinuegoto;
    }
    errorstarttestagain:
    typer("\nGet ready...");
    Sleep(3000);
    skip:
    system("cls");
    ask.Testguidstatwithcout();
    typer("\nQuestion 1: Remember the order of the following words: \n\n\033[33mDistance - Reached - Journy - Travel - Packing\033[0m");
    Sleep(3000);
    TestoneWronginput:
    system("cls");
    ask.Testguidstatwithcout();
    cout << "\nA) Distance - Journey - Packing - Travel - Reached"<<endl;
    cout << "B) Packing - Journey - Distance - Travel - Reached"<<endl;
    cout << "C) Distance - Reached - Journey - Travel - Packing"<<endl;
    cout << "D) Distance - Travel - Journey - Packing - Reached"<<endl;
    typer("Enter your answer: ");
    chooseabcd = _getch();
    if (chooseabcd=='a' || chooseabcd=='A')
    {
        marks += 4;
    }
    else if (chooseabcd=='b' || chooseabcd=='B')
    {
        marks +=2;
    }
    else if (chooseabcd=='c' || chooseabcd=='C')
    {
        marks +=10;
    }
    else if (chooseabcd=='d' || chooseabcd=='D')
    {
        marks +=4;
    }
    else
    {
        goto TestoneWronginput;
    }
    system("cls");
    ask.Testguidstatwithcout();
    typer("\nQuestion 2: Remember the order of the following words: \n\n\033[33mMoon - Sky - Stars - Night - Light\033[0m");
    Sleep(3000);
    TesttwoWronginput:
    system("cls");
    ask.Testguidstatwithcout();
    cout << "\nA) Light - Moon - Stars - Night - Sky"<<endl;
    cout << "B) Moon - Sky - Stars - Night - Light"<<endl;
    cout << "C) Sky - Stars - Moon - Night - Light"<<endl;
    cout << "D) Moon - Sky - Light - Night - Stars"<<endl;
    typer("Enter your answer: ");
    chooseabcd = _getch();
    if (chooseabcd=='a' || chooseabcd=='A')
    {
        marks += 2;
    }
    else if (chooseabcd=='b' || chooseabcd=='B')
    {
        marks +=10;
    }
    else if (chooseabcd=='c' || chooseabcd=='C')
    {
        marks +=4;
    }
    else if (chooseabcd=='d' || chooseabcd=='D')
    {
        marks +=6;
    }
    else
    {
        goto TesttwoWronginput;
    }
    system("cls");
    ask.Testguidstatwithcout();
    typer("\nQuestion 3: Remember the order of the following words:\n\n\033[33mBook - Pencil - Eraser - Paper - Pen\033[0m");
    Sleep(3000);
    TestthreeWronginput:
    system("cls");
    ask.Testguidstatwithcout();
    cout << "\nA) Pen - Paper - Eraser - Pencil - Book"<<endl;
    cout << "B) Eraser - Pen - Book - Paper - Pencil"<<endl;
    cout << "C) Pencil - Eraser - Paper - Pen - Book"<<endl;
    cout << "D) Book - Pencil - Eraser - Paper - Pen"<<endl;
    typer("Enter your answer: ");
    chooseabcd = _getch();
    if (chooseabcd=='a' || chooseabcd=='A')
    {
        marks += 2;
    }
    else if (chooseabcd=='b' || chooseabcd=='B')
    {
        marks +=2;
    }
    else if (chooseabcd=='c' || chooseabcd=='C')
    {
        marks +=0;
    }
    else if (chooseabcd=='d' || chooseabcd=='D')
    {
        marks +=10;
    }
    else
    {
        goto TestthreeWronginput;
    }
    system("cls");
    typer("\nTest Ended...");
    Sleep(3000);
    stri = to_string(marks);
    if(marks >= 20)
    {
        typer("\nCongratulations...You have passed the interview with a score of "+ stri +" out of 30\nWelcome to CAT Travels and Co. \nFeel free to start your job from today");
        Sleep(10000);
    }
    else if(marks < 20)
    {
        typer("\nSorry for this news but you failed the test with the score of "+ stri +"out of 30 \nBetter luck next time");
        Sleep(3000);
        system("cls");
        goto End;
    }
    else
    {
        typer("\nSomething is wrong...Counting error accured \nPLEASE try the test again");
        Sleep(3000);
        goto errorstarttestagain;
    }
    tryagainfirstjob:
    system("cls");
    typer("\nNarrator: You start your job now by taking your first assignment\nHello, "+Name+"\nYou will be given a few instruction and be sure to remember it \nYou will require this instruction to reach you destination.\nYou will be takeing few pasengers on this specific rout as they want to explore this places\nRemember you only get 2 chances which means when given 2 wrong directions you will be removed from the job\nPress \'y/Y\' to continue and \'n/N\' to Quit");
    yorn = _getch();
    if(yorn == 'y' || yorn == 'Y')
    {
        typer("\nLet's start you first assinment");
        Sleep(2000);
    }
    else if(yorn == 'n' || yorn == 'N')
    {
        goto Exit;
    }
    else
    {
        typer("\nWrong Input... Try again...");
        Sleep(1000);
        system("cls");
        goto tryagainfirstjob;
    }
    skiptol1:
    system("cls");
    FirstInstruction:
    typer("\nFirst head North from 7th main 7th cross road\nThen turn to the 3rd left\nWhen you arrive at a Music Store named Raga Music studio Turn right\nThen you will arrive at Gold Movie Theatre, turn left there.\nYou will arrive at your destination.\nPress \'y/Y\' to continue and \'n/N\' to Quit");
    yorn = _getch();
    if(yorn == 'y' || yorn == 'Y')
    {
        typer("\nLet's start your at 7th main 7th cross road");
        Sleep(2000);
    }
    else if(yorn == 'n' || yorn == 'N')
    {
        goto Exit;
    }
    else
    {
        typer("\nWrong Input... Try again...");
        Sleep(1000);
        system("cls");
        goto FirstInstruction;
    }
    system("cls");
    Officeloc:
    typer("\nQuestion: Which way to go? ");
    typer("\nA) North");
    typer("B) East");
    typer("C) West");
    typer("D) South");
    typer("Enter your answer: ");
    chooseabcd = _getch();
    cout << chooseabcd << endl;
    if(chooseabcd == 'a' || chooseabcd == 'A')
    {
        typer("Correct Direction");
        Sleep(3000);
        eightmainseventhcross:
        system("cls");
        ask.Cross_road_qu("8th main 7th");
        typer("Enter your answer: ");
        chooseabcd = _getch();
        cout << chooseabcd << endl;
        if (chooseabcd == 'a' || chooseabcd == 'A')
        {
            typer("Correct Direction");
            Sleep(3000);
            ninthmainseventhcross:
            system("cls");
            ask.Cross_road_qu("9th main 7th");
            typer("Enter your answer: ");
            chooseabcd = _getch();
            cout << chooseabcd << endl;
            if (chooseabcd == 'a' || chooseabcd == 'A')
            {
                typer("Correct Direction");
                Sleep(3000);
                tenthmainseventhcross:
                system("cls");
                ask.Cross_road_qu("10th main 7th");
                typer("Enter your answer: ");
                chooseabcd = _getch();
                cout << chooseabcd << endl;
                if (chooseabcd == 'b' || chooseabcd == 'B')
                {
                    typer("Correct Direction");
                    Sleep(3000);
                    tenthmaineightcross:
                    system("cls");
                    ask.Cross_road_qu("10th main 8th");
                    typer("Enter your answer: ");
                    chooseabcd = _getch();
                    cout << chooseabcd << endl;
                    if (chooseabcd == 'a' || chooseabcd == 'A')
                    {
                        typer("Correct Direction");
                        Sleep(3000);
                        gunamusicstudio:
                        system("cls");
                        ask.Music_qu("Guna");
                        typer("Enter your answer: ");
                        chooseabcd = _getch();
                        cout << chooseabcd << endl;
                        if (chooseabcd == 'a' || chooseabcd == 'A')
                        {
                            typer("Correct Direction");
                            Sleep(3000);
                            tenthmainninethcross:
                            system("cls");
                            ask.Cross_road_qu("10th main 9th");
                            typer("Enter your answer: ");
                            chooseabcd = _getch();
                            cout << chooseabcd << endl;
                            if(chooseabcd == 'a' || chooseabcd == 'A')
                            {
                                typer("Correct Direction");
                                Sleep(3000);
                                ragamusicstudio:
                                system("cls");
                                ask.Music_qu("Raga");
                                typer("Enter your answer: ");
                                chooseabcd = _getch();
                                cout << chooseabcd << endl;
                                if(chooseabcd == 'c' || chooseabcd == 'C')
                                {
                                    typer("Correct Direction");
                                    Sleep(3000);
                                    goormovietheatre:
                                    system("cls");
                                    ask.Movie_theatre_qu("Goor");
                                    typer("Enter your answer: ");
                                    chooseabcd = _getch();
                                    cout << chooseabcd << endl;
                                    if(chooseabcd == 'a' || chooseabcd == 'A')
                                    {
                                        typer("Correct Direction");
                                        Sleep(3000);
                                        system("cls");
                                        goldmovietheatre:
                                        ask.Movie_theatre_qu("Gold");
                                        typer("Enter your answer: ");
                                        chooseabcd = _getch();
                                        cout << chooseabcd << endl;
                                        if(chooseabcd == 'b' || chooseabcd == 'B')
                                        {
                                            typer("Correct Direction");
                                            typer("You have reached your destination");
                                            Sleep(3000);
                                            system("cls");
                                        }
                                        else if(chooseabcd == 'a' || chooseabcd == 'A')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                            thirteenthmaintenthcross:
                                            system("cls");
                                            ask.Cross_road_qu("13th Main 10th");
                                            typer("Enter your answer: ");
                                            chooseabcd = _getch();
                                            cout << chooseabcd << endl;
                                            if(chooseabcd == 'a'||chooseabcd == 'A')
                                            {
                                                typer("Wrong Direction");
                                                Sleep(3000);
                                                Wrong_direction++;
                                                system("cls");
                                                if(Wrong_direction>=2)
                                                {
                                                    goto End;
                                                }
                                            }
                                            else if(chooseabcd == 'b'||chooseabcd == 'B')
                                            {
                                                typer("Wrong Direction");
                                                Sleep(3000);
                                                Wrong_direction++;
                                                system("cls");
                                                if(Wrong_direction>=2)
                                                {
                                                    goto End;
                                                }
                                            }
                                            else if(chooseabcd == 'c'||chooseabcd == 'C')
                                            {
                                                typer("Wrong Direction");
                                                Sleep(3000);
                                                Wrong_direction++;
                                                system("cls");
                                                if(Wrong_direction>=2)
                                                {
                                                    goto End;
                                                }
                                            }
                                            else if(chooseabcd == 'd'||chooseabcd == 'D')
                                            {
                                                typer("Correct Direction");
                                                typer("Taking U-Turn");
                                                Sleep(3000);
                                                system("cls");
                                                goto goldmovietheatre;
                                            }
                                            else
                                            {
                                                typer("\nWrong Input... Try again...");
                                                Sleep(1000);
                                                system("cls");
                                                goto thirteenthmaintenthcross;
                                            }
                                        }
                                        else if(chooseabcd == 'c' || chooseabcd == 'C')
                                            {
                                                typer("Wrong Direction");
                                                Sleep(3000);
                                                Wrong_direction++;
                                                if(Wrong_direction>=2)
                                                {
                                                    goto End;
                                                }
                                                twelvethmainninethcross:
                                                system("cls");
                                                ask.Cross_road_qu("12th Main 9th");
                                                typer("Enter your answer: ");
                                                chooseabcd = _getch();
                                                cout << chooseabcd << endl;
                                                if(chooseabcd == 'a'||chooseabcd == 'A')
                                                {
                                                    typer("Wrong Direction");
                                                    Sleep(3000);
                                                    Wrong_direction++;
                                                    system("cls");
                                                    if(Wrong_direction>=2)
                                                    {
                                                        goto End;
                                                    }
                                                }
                                                else if(chooseabcd == 'b'||chooseabcd == 'B')
                                                {
                                                    typer("Wrong Direction");
                                                    Sleep(3000);
                                                    Wrong_direction++;
                                                    system("cls");
                                                    if(Wrong_direction>=2)
                                                    {
                                                        goto End;
                                                    }
                                                }
                                                else if(chooseabcd == 'c'||chooseabcd == 'C')
                                                {
                                                    typer("Wrong Direction");
                                                    Sleep(3000);
                                                    Wrong_direction++;
                                                    system("cls");
                                                    if(Wrong_direction>=2)
                                                    {
                                                        goto End;
                                                    }
                                                }
                                                else if(chooseabcd == 'd'||chooseabcd == 'D')
                                                {
                                                    typer("Correct Direction");
                                                    typer("Taking U-Turn");
                                                    Sleep(3000);
                                                    system("cls");
                                                    goto goldmovietheatre;
                                                }
                                                else
                                                {
                                                    typer("\nWrong Input... Try again...");
                                                    Sleep(1000);
                                                    system("cls");
                                                    goto tenthmainsixthcross;
                                                }
                                            }
                                        else if(chooseabcd == 'd' || chooseabcd == 'D')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                            system("cls");
                                            goto goormovietheatre;         
                                        }
                                        else
                                        {
                                            typer("\nWrong Input... Try again...");
                                            Sleep(1000);
                                            system("cls");
                                            goto goldmovietheatre;
                                        }
                                    }
                                    else if(chooseabcd == 'b' || chooseabcd == 'B')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                        eleventhmaineleventhcross:
                                        system("cls");
                                        ask.Cross_road_qu("11th Main 11th");
                                        typer("Enter your answer: ");
                                        chooseabcd = _getch();
                                        cout << chooseabcd << endl;
                                        if(chooseabcd == 'a'||chooseabcd == 'A')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            system("cls");
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                        }
                                        else if(chooseabcd == 'b'||chooseabcd == 'B')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            system("cls");
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                        }
                                        else if(chooseabcd == 'c'||chooseabcd == 'C')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            system("cls");
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                        }
                                        else if(chooseabcd == 'd' || chooseabcd == 'D')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                            system("cls");
                                            goto goormovietheatre;         
                                        }
                                        else
                                        {
                                            typer("\nWrong Input... Try again...");
                                            Sleep(1000);
                                            system("cls");
                                            goto eleventhmaineleventhcross;
                                        }
                                    }
                                    else if(chooseabcd == 'c' || chooseabcd == 'C')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                        eleventhmainninethcross:
                                        system("cls");
                                        ask.Cross_road_qu("11th Main 9th");
                                        typer("Enter your answer: ");
                                        chooseabcd = _getch();
                                        cout << chooseabcd << endl;
                                        if(chooseabcd == 'a'||chooseabcd == 'A')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            system("cls");
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                        }
                                        else if(chooseabcd == 'b'||chooseabcd == 'B')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            system("cls");
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                        }
                                        else if(chooseabcd == 'c'||chooseabcd == 'C')
                                        {
                                            typer("Wrong Direction");
                                            Sleep(3000);
                                            Wrong_direction++;
                                            system("cls");
                                            if(Wrong_direction>=2)
                                            {
                                                goto End;
                                            }
                                        }
                                        else if(chooseabcd == 'd'||chooseabcd == 'D')
                                        {
                                            typer("Correct Direction");
                                            typer("Taking U-Turn");
                                            Sleep(3000);
                                            system("cls");
                                            goto goormovietheatre;
                                        }
                                        else
                                        {
                                            typer("\nWrong Input... Try again...");
                                            Sleep(1000);
                                            system("cls");
                                            goto eleventhmainninethcross;
                                        }
                                    }
                                    else if(chooseabcd == 'd' || chooseabcd == 'D')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                        system("cls");
                                        goto ragamusicstudio;         
                                    }
                                    else
                                    {
                                        typer("\nWrong Input... Try again...");
                                        Sleep(1000);
                                        system("cls");
                                        goto goormovietheatre;
                                    }  
                                }
                                else if(chooseabcd == 'a' || chooseabcd == 'A')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                    tenthmaineleventhcross:
                                    system("cls");
                                    ask.Cross_road_qu("10th Main 11th");
                                    typer("Enter your answer: ");
                                    chooseabcd = _getch();
                                    cout << chooseabcd << endl;
                                    if(chooseabcd == 'a'||chooseabcd == 'A')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        system("cls");
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                    }
                                    else if(chooseabcd == 'b'||chooseabcd == 'B')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        system("cls");
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                    }
                                    else if(chooseabcd == 'c'||chooseabcd == 'C')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        system("cls");
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                    }
                                    else if(chooseabcd == 'd' || chooseabcd == 'D')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                        system("cls");
                                        goto ragamusicstudio;         
                                    }
                                    else
                                    {
                                        typer("\nWrong Input... Try again...");
                                        Sleep(1000);
                                        system("cls");
                                        goto tenthmaineleventhcross;
                                    }
                                }
                                else if(chooseabcd == 'b' || chooseabcd == 'B')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                    ninthmaintenthcross:
                                    system("cls");
                                    ask.Cross_road_qu("9th Main 10th");
                                    typer("Enter your answer: ");
                                    chooseabcd = _getch();
                                    cout << chooseabcd << endl;
                                    if(chooseabcd == 'a'||chooseabcd == 'A')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        system("cls");
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                    }
                                    else if(chooseabcd == 'b'||chooseabcd == 'B')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        system("cls");
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                    }
                                    else if(chooseabcd == 'c'||chooseabcd == 'C')
                                    {
                                        typer("Wrong Direction");
                                        Sleep(3000);
                                        Wrong_direction++;
                                        system("cls");
                                        if(Wrong_direction>=2)
                                        {
                                            goto End;
                                        }
                                    }
                                    else if(chooseabcd == 'd'||chooseabcd == 'D')
                                    {
                                        typer("Correct Direction");
                                        typer("Taking U-Turn");
                                        Sleep(3000);
                                        system("cls");
                                        goto ragamusicstudio;
                                    }
                                    else
                                    {
                                        typer("\nWrong Input... Try again...");
                                        Sleep(1000);
                                        system("cls");
                                        goto ninthmaintenthcross;
                                    }
                                }
                                else if(chooseabcd == 'd' || chooseabcd == 'D')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                    system("cls");
                                    goto tenthmainninethcross;         
                                }
                                else
                                {
                                    typer("\nWrong Input... Try again...");
                                    Sleep(1000);
                                    system("cls");
                                    goto ragamusicstudio;
                                }  
                            }
                            else if(chooseabcd == 'b' || chooseabcd == 'B')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                                ninethmainninethcross:
                                system("cls");
                                ask.Cross_road_qu("9th Main 9th");
                                typer("Enter your answer: ");
                                chooseabcd = _getch();
                                cout << chooseabcd << endl;
                                if(chooseabcd == 'a'||chooseabcd == 'A')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'b'||chooseabcd == 'B')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'c'||chooseabcd == 'C')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'd' || chooseabcd == 'D')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                    system("cls");
                                    goto gunamusicstudio;         
                                }
                                else
                                {
                                    typer("\nWrong Input... Try again...");
                                    Sleep(1000);
                                    system("cls");
                                    goto ninethmainninethcross;
                                }
                            }
                            else if(chooseabcd == 'a' || chooseabcd == 'A')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                                elevenmainninethcrossfromtentheight:
                                system("cls");
                                ask.Cross_road_qu("11th Main 9th");
                                typer("Enter your answer: ");
                                chooseabcd = _getch();
                                cout << chooseabcd << endl;
                                if(chooseabcd == 'a'||chooseabcd == 'A')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'b'||chooseabcd == 'B')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'c'||chooseabcd == 'C')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'd'||chooseabcd == 'D')
                                {
                                    typer("Correct Direction");
                                    typer("Taking U-Turn");
                                    Sleep(3000);
                                    system("cls");
                                    goto gunamusicstudio;
                                }
                                else
                                {
                                    typer("\nWrong Input... Try again...");
                                    Sleep(1000);
                                    system("cls");
                                    goto elevenmainninethcrossfromtentheight;
                                }
                            }
                            else if(chooseabcd == 'd' || chooseabcd == 'D')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                                system("cls");
                                goto gunamusicstudio;         
                            }
                            else
                            {
                                typer("\nWrong Input... Try again...");
                                Sleep(1000);
                                system("cls");
                                goto tenthmainninethcross;
                            }  
                        }
                        else if(chooseabcd == 'b' || chooseabcd == 'B')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                            ninethmaineightcross:
                            system("cls");
                            ask.Cross_road_qu("9th Main 9th");
                            typer("Enter your answer: ");
                            chooseabcd = _getch();
                            cout << chooseabcd << endl;
                            if(chooseabcd == 'a'||chooseabcd == 'A')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                system("cls");
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                            }
                            else if(chooseabcd == 'b'||chooseabcd == 'B')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                system("cls");
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                            }
                            else if(chooseabcd == 'c'||chooseabcd == 'C')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                system("cls");
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                            }
                            else if(chooseabcd == 'd' || chooseabcd == 'D')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                                system("cls");
                                goto gunamusicstudio;         
                            }
                            else
                            {
                                typer("\nWrong Input... Try again...");
                                Sleep(1000);
                                system("cls");
                                goto ninethmaineightcross;
                            }
                        }
                        else if(chooseabcd == 'c' || chooseabcd == 'C')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                                elevenmainninethcross:
                                system("cls");
                                ask.Cross_road_qu("11th Main 9th");
                                typer("Enter your answer: ");
                                chooseabcd = _getch();
                                cout << chooseabcd << endl;
                                if(chooseabcd == 'a'||chooseabcd == 'A')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'b'||chooseabcd == 'B')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'c'||chooseabcd == 'C')
                                {
                                    typer("Wrong Direction");
                                    Sleep(3000);
                                    Wrong_direction++;
                                    system("cls");
                                    if(Wrong_direction>=2)
                                    {
                                        goto End;
                                    }
                                }
                                else if(chooseabcd == 'd'||chooseabcd == 'D')
                                {
                                    typer("Correct Direction");
                                    typer("Taking U-Turn");
                                    Sleep(3000);
                                    system("cls");
                                    goto gunamusicstudio;
                                }
                                else
                                {
                                    typer("\nWrong Input... Try again...");
                                    Sleep(1000);
                                    system("cls");
                                    goto elevenmainninethcross;
                                }
                            }
                        else if(chooseabcd == 'd' || chooseabcd == 'D')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                            system("cls");
                            goto tenthmaineightcross;         
                        }
                        else
                        {
                            typer("\nWrong Input... Try again...");
                            Sleep(1000);
                            system("cls");
                            goto gunamusicstudio;
                        }  
                    }
                    else if(chooseabcd == 'b' || chooseabcd == 'B')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                        ninthmaineightcrossfromteneight:
                        system("cls");
                        ask.Cross_road_qu("9th Main 8th");
                        typer("Enter your answer: ");
                        chooseabcd = _getch();
                        cout << chooseabcd << endl;
                        if(chooseabcd == 'a'||chooseabcd == 'A')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            system("cls");
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                        }
                        else if(chooseabcd == 'b'||chooseabcd == 'B')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            system("cls");
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                        }
                        else if(chooseabcd == 'c'||chooseabcd == 'C')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            system("cls");
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                        }
                        else if(chooseabcd == 'd'||chooseabcd == 'D')
                        {
                            typer("Correct Direction");
                            typer("Taking U-Turn");
                            Sleep(3000);
                            system("cls");
                            goto tenthmaineightcross;
                        }
                        else
                        {
                            typer("\nWrong Input... Try again...");
                            Sleep(1000);
                            system("cls");
                            goto ninthmaineightcrossfromteneight;
                        }
                    }
                    else if(chooseabcd == 'c' || chooseabcd == 'C')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                            elevenmaineightcross:
                            system("cls");
                            ask.Cross_road_qu("11th Main 8th");
                            typer("Enter your answer: ");
                            chooseabcd = _getch();
                            cout << chooseabcd << endl;
                            if(chooseabcd == 'a'||chooseabcd == 'A')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                system("cls");
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                            }
                            else if(chooseabcd == 'b'||chooseabcd == 'B')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                system("cls");
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                            }
                            else if(chooseabcd == 'c'||chooseabcd == 'C')
                            {
                                typer("Wrong Direction");
                                Sleep(3000);
                                Wrong_direction++;
                                system("cls");
                                if(Wrong_direction>=2)
                                {
                                    goto End;
                                }
                            }
                            else if(chooseabcd == 'd'||chooseabcd == 'D')
                            {
                                typer("Correct Direction");
                                typer("Taking U-Turn");
                                Sleep(3000);
                                system("cls");
                                goto tenthmaineightcross;
                            }
                            else
                            {
                                typer("\nWrong Input... Try again...");
                                Sleep(1000);
                                system("cls");
                                goto elevenmaineightcross;
                            }
                        }
                    else if(chooseabcd == 'd' || chooseabcd == 'D')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                        system("cls");
                        goto tenthmainseventhcross;         
                    }
                    else
                    {
                        typer("\nWrong Input... Try again...");
                        Sleep(1000);
                        system("cls");
                        goto tenthmaineightcross;
                    }  
                }
                else if(chooseabcd == 'a' || chooseabcd == 'A')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                    eleventhmainseventhcross:
                    system("cls");
                    ask.Cross_road_qu("11th Main 7th");
                    typer("Enter your answer: ");
                    chooseabcd = _getch();
                    cout << chooseabcd << endl;
                    if(chooseabcd == 'a'||chooseabcd == 'A')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        system("cls");
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                    }
                    else if(chooseabcd == 'b'||chooseabcd == 'B')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        system("cls");
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                    }
                    else if(chooseabcd == 'c'||chooseabcd == 'C')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        system("cls");
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                    }
                    else if(chooseabcd == 'd'||chooseabcd == 'D')
                    {
                        typer("Correct Direction");
                        typer("Taking U-Turn");
                        Sleep(3000);
                        system("cls");
                        goto tenthmainseventhcross;
                    }
                    else
                    {
                        typer("\nWrong Input... Try again...");
                        Sleep(1000);
                        system("cls");
                        goto eleventhmainseventhcross;
                    }
                }
                else if(chooseabcd == 'c' || chooseabcd == 'C')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                        tenthmainsixthcross:
                        system("cls");
                        ask.Cross_road_qu("10th Main 6th");
                        typer("Enter your answer: ");
                        chooseabcd = _getch();
                        cout << chooseabcd << endl;
                        if(chooseabcd == 'a'||chooseabcd == 'A')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            system("cls");
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                        }
                        else if(chooseabcd == 'b'||chooseabcd == 'B')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            system("cls");
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                        }
                        else if(chooseabcd == 'c'||chooseabcd == 'C')
                        {
                            typer("Wrong Direction");
                            Sleep(3000);
                            Wrong_direction++;
                            system("cls");
                            if(Wrong_direction>=2)
                            {
                                goto End;
                            }
                        }
                        else if(chooseabcd == 'd'||chooseabcd == 'D')
                        {
                            typer("Correct Direction");
                            typer("Taking U-Turn");
                            Sleep(3000);
                            system("cls");
                            goto tenthmainseventhcross;
                        }
                        else
                        {
                            typer("\nWrong Input... Try again...");
                            Sleep(1000);
                            system("cls");
                            goto tenthmainsixthcross;
                        }
                    }
                else if(chooseabcd == 'd' || chooseabcd == 'D')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                    system("cls");
                    goto ninthmainseventhcross;         
                }
                else
                {
                    typer("\nWrong Input... Try again...");
                    Sleep(1000);
                    system("cls");
                    goto tenthmainseventhcross;
                }
            }
            else if(chooseabcd == 'b' || chooseabcd == 'B')
            {
                typer("Wrong Direction");
                Sleep(3000);
                Wrong_direction++;
                if(Wrong_direction>=2)
                {
                    goto End;
                }
                ninthmaineightcross:
                system("cls");
                ask.Cross_road_qu("9th Main 8th");
                typer("Enter your answer: ");
                chooseabcd = _getch();
                cout << chooseabcd << endl;
                if(chooseabcd == 'a'||chooseabcd == 'A')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    system("cls");
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                }
                else if(chooseabcd == 'b'||chooseabcd == 'B')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    system("cls");
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                }
                else if(chooseabcd == 'c'||chooseabcd == 'C')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    system("cls");
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                }
                else if(chooseabcd == 'd'||chooseabcd == 'D')
                {
                    typer("Correct Direction");
                    typer("Taking U-Turn");
                    Sleep(3000);
                    system("cls");
                    goto ninthmainseventhcross;
                }
                else
                {
                    typer("\nWrong Input... Try again...");
                    Sleep(1000);
                    system("cls");
                    goto ninthmaineightcross;
                }
            }
            else if(chooseabcd == 'c' || chooseabcd == 'C')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                    ninthmainsixthcross:
                    system("cls");
                    ask.Cross_road_qu("9th Main 6th");
                    typer("Enter your answer: ");
                    chooseabcd = _getch();
                    cout << chooseabcd << endl;
                    if(chooseabcd == 'a'||chooseabcd == 'A')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        system("cls");
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                    }
                    else if(chooseabcd == 'b'||chooseabcd == 'B')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        system("cls");
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                    }
                    else if(chooseabcd == 'c'||chooseabcd == 'C')
                    {
                        typer("Wrong Direction");
                        Sleep(3000);
                        Wrong_direction++;
                        system("cls");
                        if(Wrong_direction>=2)
                        {
                            goto End;
                        }
                    }
                    else if(chooseabcd == 'd'||chooseabcd == 'D')
                    {
                        typer("Correct Direction");
                        typer("Taking U-Turn");
                        Sleep(3000);
                        system("cls");
                        goto ninthmainseventhcross;
                    }
                    else
                    {
                        typer("\nWrong Input... Try again...");
                        Sleep(1000);
                        system("cls");
                        goto ninthmainsixthcross;
                    }
                }
            else if(chooseabcd == 'd' || chooseabcd == 'D')
            {
                typer("Wrong Direction");
                Sleep(3000);
                Wrong_direction++;
                if(Wrong_direction>=2)
                {
                    goto End;
                }
                system("cls");
                goto eightmainseventhcross;         
            }
            else
            {
                typer("\nWrong Input... Try again...");
                Sleep(1000);
                system("cls");
                goto ninthmainseventhcross;
            }  
        }
        else if(chooseabcd == 'b' || chooseabcd == 'B')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            if(Wrong_direction>=2)
            {
                goto End;
            }
            eightmaineightcross:
            system("cls");
            ask.Cross_road_qu("8th Main 8th");
            typer("Enter your answer: ");
            chooseabcd = _getch();
            cout << chooseabcd << endl;
            if(chooseabcd == 'a'||chooseabcd == 'A')
            {
                typer("Wrong Direction");
                Sleep(3000);
                Wrong_direction++;
                system("cls");
                if(Wrong_direction>=2)
                {
                    goto End;
                }
            }
            else if(chooseabcd == 'b'||chooseabcd == 'B')
            {
                typer("Wrong Direction");
                Sleep(3000);
                Wrong_direction++;
                system("cls");
                if(Wrong_direction>=2)
                {
                    goto End;
                }
            }
            else if(chooseabcd == 'c'||chooseabcd == 'C')
            {
                typer("Wrong Direction");
                Sleep(3000);
                Wrong_direction++;
                system("cls");
                if(Wrong_direction>=2)
                {
                    goto End;
                }
            }
            else if(chooseabcd == 'd'||chooseabcd == 'D')
            {
                typer("Correct Direction");
                typer("Taking U-Turn");
                Sleep(3000);
                system("cls");
                goto eightmainseventhcross;
            }
            else
            {
                typer("\nWrong Input... Try again...");
                Sleep(1000);
                system("cls");
                goto eightmaineightcross;
            }
        }
        else if(chooseabcd == 'c' || chooseabcd == 'C')
            {
                typer("Wrong Direction");
                Wrong_direction++;
                if(Wrong_direction>=2)
                {
                    goto End;
                }
                eightmainsixthcross:
                system("cls");
                ask.Cross_road_qu("8th Main 6th");
                typer("Enter your answer: ");
                chooseabcd = _getch();
                cout << chooseabcd << endl;
                if(chooseabcd == 'a'||chooseabcd == 'A')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    system("cls");
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                }
                else if(chooseabcd == 'b'||chooseabcd == 'B')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    system("cls");
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                }
                else if(chooseabcd == 'c'||chooseabcd == 'C')
                {
                    typer("Wrong Direction");
                    Sleep(3000);
                    Wrong_direction++;
                    system("cls");
                    if(Wrong_direction>=2)
                    {
                        goto End;
                    }
                }
                else if(chooseabcd == 'd'||chooseabcd == 'D')
                {
                    typer("Correct Direction");
                    typer("Taking U-Turn");
                    Sleep(3000);
                    system("cls");
                    goto eightmainseventhcross;
                }
                else
                {
                    typer("\nWrong Input... Try again...");
                    Sleep(1000);
                    system("cls");
                    goto eightmainsixthcross;
                }
            }
        else if(chooseabcd == 'd' || chooseabcd == 'D')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            if(Wrong_direction>=2)
            {
                goto End;
            }
            system("cls");
            goto Officeloc;            
        }
        else
        {
            typer("\nWrong Input... Try again...");
            Sleep(1000);
            system("cls");
            goto eightmainseventhcross;
        }
    }
    else if(chooseabcd == 'b' || chooseabcd == 'B')
    {
        typer("Wrong Direction");
        Sleep(3000);
        Wrong_direction++;
        if(Wrong_direction>=2)
        {
            goto End;
        }
        Eastturngoto:
        Sleep(3000);
        system("cls");
        ask.Cross_road_qu("7th Main 6th");
        typer("Enter your answer");
        chooseabcd = _getch();
        cout << chooseabcd << endl;
        if(chooseabcd == 'a'||chooseabcd == 'A')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'b'||chooseabcd == 'B')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'c'||chooseabcd == 'C')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'd'||chooseabcd == 'D')
        {
            typer("Correct Direction");
            typer("Taking U-Turn your Back at where you strated");
            Sleep(3000);
            system("cls");
            goto Officeloc;
        }
        else
        {
            typer("\nWrong Input... Try again...");
            Sleep(1000);
            system("cls");
            goto Eastturngoto;
        }
    }
    else if(chooseabcd == 'c' || chooseabcd == 'C')
    {
        typer("Wrong Direction");
        Sleep(3000);
        Wrong_direction++;
        if(Wrong_direction>=2)
        {
            goto End;
        }
        Westturngoto:
        Sleep(3000);
        system("cls");
        ask.Cross_road_qu("7th Main 8th");
        typer("Enter your answer");
        chooseabcd = _getch();
        cout << chooseabcd << endl;
        if(chooseabcd == 'a'||chooseabcd == 'A')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'b'||chooseabcd == 'B')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'c'||chooseabcd == 'C')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'd'||chooseabcd == 'D')
        {
            typer("Correct Direction");
            typer("Taking U-Turn your Back at where you strated");
            Sleep(3000);
            system("cls");
            goto Officeloc;
        }
        else
        {
            typer("\nWrong Input... Try again...");
            Sleep(1000);
            system("cls");
            goto Westturngoto;
        }
    }
    else if(chooseabcd == 'd' || chooseabcd == 'D')
    {
        typer("Wrong Direction");
        Sleep(3000);
        Wrong_direction++;
        if(Wrong_direction>=2)
        {
            goto End;
        }
        Southturngoto:
        Sleep(3000);
        system("cls");
        ask.Cross_road_qu("6th Main 7th");
        typer("Enter your answer");
        chooseabcd = _getch();
        cout << chooseabcd << endl;
        if(chooseabcd == 'a'||chooseabcd == 'A')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'b'||chooseabcd == 'B')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'c'||chooseabcd == 'C')
        {
            typer("Wrong Direction");
            Sleep(3000);
            Wrong_direction++;
            system("cls");
            if(Wrong_direction>=2)
            {
                goto End;
            }
        }
        else if(chooseabcd == 'd'||chooseabcd == 'D')
        {
            typer("Correct Direction");
            typer("Taking U-Turn your Back at where you strated");
            Sleep(3000);
            system("cls");
            goto Officeloc;
        }
        else
        {
            typer("\nWrong Input... Try again...");
            Sleep(1000);
            system("cls");
            goto Southturngoto;
        }
    }
    else   
        {
            typer("\nWrong Input... Try again...");
            Sleep(1000);
            system("cls");
            goto Officeloc;
        }
    typer("Congratulations you have passed you first job \n LEVEL PASSED");
    End:
    if(Wrong_direction>=2)
    {
        system("cls");
        typer("You have given 2 wrong directions" );
        typer("You are removed from the job!!" );
        Sleep(3000);
    }
    system("cls");
    typer("GAME OVER\n\nDo you want to Replay the game or EXIT");
    typer("Press \nR for REPLAY\nE for EXIT");
    replayorexit = _getch();
    replayorexitgoto:
    if(replayorexit == 'r'||replayorexit == 'R')
    {
        goto Start;
    }
    else if(replayorexit == 'e'||replayorexit == 'E')
    {
        Exit:
        system("cls");
        typer("\nExiting in 5 secounds");
        Sleep(1000);
        system("cls");
        cout << "\nExiting in 4 secounds";
        Sleep(1000);
        system("cls");
        cout << "\nExiting in 3 secounds";
        Sleep(1000);
        system("cls");
        cout << "\nExiting in 2 secounds";
        Sleep(1000);
        system("cls");
        cout << "\nExiting in 1 secounds";
        Sleep(1000);
        system("cls");
        return 0;
    }
    else
        {
            typer("\nWrong Input... Try again...");
            Sleep(1000);
            system("cls");
            goto replayorexitgoto;
        }
}