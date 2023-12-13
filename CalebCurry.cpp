/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CalebCurry.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:00:02 by anouri            #+#    #+#             */
/*   Updated: 2023/12/13 16:03:48 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "game.h"
using namespace std; //this is used to avoid redandance of std:: not best practice


/*using could cause some issues in naming if the code is more complex*/
//using std:: cout : it is possible to use this for just cin/cout but is this case,
//we need to prefix every other(line) that nee dto be prefixed 

// int main() /*the dentifier oth this function is its name here :main*/
// {
//     cout << "what is your name?\n";
//     string name;
//     cin >> name;
//     cout << "your name is " << name << "." << endl;
//     return 0;
// }

/*if we want to save data, we need to write / read to /from a file*/

int main() /*the dentifier oth this function is its name here :main*/
{
    // cout << true; //boolean literal
    cout << "Do you want to play a game? (y/n): \n";
    char response = tolower(getchar());
    // cin >> response;
    cout << "you entered: " << (response) << endl;
    if (response == 'y')
    {
        cout << "let's play a game, then...\n" ;
        cout << "have you beat the game? \n0: no.\n1: yes. \n";
        bool beatGame;
        cin >> beatGame;
        bool won;
        if (beatGame)
        {
            cout << "Because you beat game, you can play impossible game\n";
            won = playGame(1);
            return (0);
        }
        else
        {    
            cout << "What difficulty ?\n";
            cout << "0: easy\n";
            cout << "1: medium\n";
            cout << "2: hard\n" ;  
            int difficulty;
            cin >> difficulty;
            switch(difficulty)
            {
                case 0:
                    won = playGame(10);
                    break;
                case 1:
                    won = playGame(5);
                    break;
                case 2:
                    won = playGame(2);
                    break;
                default:
                    cout << "Bro what?\n";
                    break;
            }
        }
        if (won)
        {
            cout << "congrats...\n";
        }
        else
        {
            cout << "you lost...\n";
        }
    }
    else if (response == 'n')
    {
        cout << "Maybe next time\n";
    }
    else
    {
        cout << "hmm... I don't understand.\n";
    }
    return 0;
}
