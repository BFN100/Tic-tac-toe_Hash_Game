/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: Create a tic-tac-toe game as requested by the teacher, the game is in french since my college is in french, but i put the comments in english.
Made in Visual Studio
*/


#include <iostream>     // general for everything to work
#include <string.h>    // because of the character
#include <algorithm>  // to make sure the calculations work
#include <iomanip>  // due to setw handler


int fonctionVictoire(int matchJ1, int matchJ2);

int main()
{

	int cont = 1; // games played counter
	char choix; // player choice
	int matchJ1 = 0, matchJ2 = 0; // victory counters
	char reponse; // answer whether to play again or not
	const int b1 = 1, b2 = 2, b3 = 3; // first line
	const int b4 = 4, b5 = 5, b6 = 6; // second line
	const int b7 = 7, b8 = 8, b9 = 9; //third line
	char a1 = ' ', a2 = ' ', a3 = ' '; //first line
	char a4 = ' ', a5 = ' ', a6 = ' '; // second line
	char a7 = ' ', a8 = ' ', a9 = ' '; // third line
	char j1 = 'O', j2 = 'X'; // we will use the 'O' symbol for player 1 and the 'X' symbol for player 2
	char victoire = ' ';

	do
	{

		// Table without using table creation knowledge
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Bienvenue à TIC-TAC-TOE" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;

		std::cout << "\n";

		std::cout << "|" << a1 << "|" << a2 << "|" << a3 << "|" << std::setw(10) << "|" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
		std::cout << "-------" << std::setw(16) << "-------" << std::endl;
		std::cout << "|" << a4 << "|" << a5 << "|" << a6 << "|" << std::setw(10) << "|" << b4 << "|" << b5 << "|" << b6 << "|" << std::endl;
		std::cout << "-------" << std::setw(16) << "-------" << std::endl;
		std::cout << "|" << a7 << "|" << a8 << "|" << a9 << "|" << std::setw(10) << "|" << b7 << "|" << b8 << "|" << b9 << "|" << std::endl;

		while (cont <= 9) // to choose a maximum of 9 times, i.e. the number of squares in the game
		{

			if (cont % 2 != 0) // to calculate the number of turns and know when each player's turn is
			{
				do
				{
					std::cout << "\n Veuillez vérifier le numéro de l'endroit où vous souhaitez mettre le " << j1 << ":" << " ";
					std::cin >> choix;

					if (choix == '1' && a1 == ' ')
					{
						a1 = j1;
						cont++;
					}
					else if (choix == '2' && a2 == ' ')
					{
						a2 = j1;
						cont++;
					}
					else if (choix == '3' && a3 == ' ')
					{
						a3 = j1;
						cont++;
					}
					else if (choix == '4' && a4 == ' ')
					{
						a4 = j1;
						cont++;
					}
					else if (choix == '5' && a5 == ' ')
					{
						a5 = j1;
						cont++;
					}
					else if (choix == '6' && a6 == ' ')
					{
						a6 = j1;
						cont++;
					}
					else if (choix == '7' && a7 == ' ')
					{
						a7 = j1;
						cont++;
					}
					else if (choix == '8' && a8 == ' ')
					{
						a8 = j1;
						cont++;
					}
					else if (choix == '9' && a9 == ' ')
					{
						a9 = j1;
						cont++;
					}
					else
					{
						std::cout << "----------------------------------------------------------------------------------------" << std::endl;
						std::cout << "Rejouez en cliquant sur un emplacement qui n'est pas encore rempli s'il vous plaît" << std::endl;
						std::cout << "----------------------------------------------------------------------------------------" << std::endl;
					}
				} while (choix < '1' || choix > '9');

				//Player 1 Win Analysis:
				if (j1 == a1 && j1 == a5 && j1 == a9)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a7 && j1 == a5 && j1 == a3)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a1 && j1 == a2 && j1 == a3)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a4 && j1 == a5 && j1 == a6)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a7 && j1 == a8 && j1 == a9)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a1 && j1 == a4 && j1 == a7)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a2 && j1 == a5 && j1 == a8)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j1 == a3 && j1 == a6 && j1 == a9)
				{
					std::cout << "\n Le joueur 1 a gagné ce match." << std::endl;
					matchJ1++;
					victoire = j1;
					fonctionVictoire(matchJ1, matchJ2);
				}

				if(victoire == j1)
				{
					a1 = ' ';
					a2 = ' ';
					a3 = ' ';  
					a4 = ' ';
					a5 = ' ';
					a6 = ' ';
					a7 = ' ';
					a8 = ' '; 
					a9 = ' ';
				}
					std::cout << "\n";

					std::cout << "|" << a1 << "|" << a2 << "|" << a3 << "|" << std::setw(10) << "|" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
					std::cout << "-------" << std::setw(16) << "-------" << std::endl;
					std::cout << "|" << a4 << "|" << a5 << "|" << a6 << "|" << std::setw(10) << "|" << b4 << "|" << b5 << "|" << b6 << "|" << std::endl;
					std::cout << "-------" << std::setw(16) << "-------" << std::endl;
					std::cout << "|" << a7 << "|" << a8 << "|" << a9 << "|" << std::setw(10) << "|" << b7 << "|" << b8 << "|" << b9 << "|" << std::endl;
			}
			else if (cont % 2 == 0 && cont < 10) //to calculate the number of turns and know when each player's turn is
			{
				do
				{
					std::cout << "\n Veuillez vérifier le numéro de l'endroit où vous souhaitez mettre le " << j2 << ":" << " ";
					std::cin >> choix;

					if (choix == '1' && a1 == ' ')
					{
						a1 = j2;
						cont++;
					}
					else if (choix == '2' && a2 == ' ')
					{
						a2 = j2;
						cont++;
					}
					else if (choix == '3' && a3 == ' ')
					{
						a3 = j2;
						cont++;
					}
					else if (choix == '4' && a4 == ' ')
					{
						a4 = j2;
						cont++;
					}
					else if (choix == '5' && a5 == ' ')
					{
						a5 = j2;
						cont++;
					}
					else if (choix == '6' && a6 == ' ')
					{
						a6 = j2;
						cont++;
					}
					else if (choix == '7' && a7 == ' ')
					{
						a7 = j2;
						cont++;
					}
					else if (choix == '8' && a8 == ' ')
					{
						a8 = j2;
						cont++;
					}
					else if (choix == '9' && a9 == ' ')
					{
						a9 = j2;
						cont++;
					}
					else
					{
						std::cout << "----------------------------------------------------------------------------------------" << std::endl;
						std::cout << "Rejouez en cliquant sur un emplacement qui n'est pas encore rempli s'il vous plaît" << std::endl;
						std::cout << "----------------------------------------------------------------------------------------" << std::endl;
					}
				} while (choix < '1' || choix > '9');

				//Analysis of player 2's victory
				if (j2 == a1 && j2 == a5 && j2 == a9)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a7 && j2 == a5 && j2 == a3)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a1 && j2 == a2 && j2 == a3)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a4 && j2 == a5 && j2 == a6)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a7 && j2 == a8 && j2 == a9)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a1 && j2 == a4 && j2 == a7)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a2 && j2 == a5 && j2 == a8)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}
				else if (j2 == a3 && j2 == a6 && j2 == a9)
				{
					std::cout << "\n Le joueur 2 a gagné ce match." << std::endl;
					matchJ2++;
					victoire = j2;
					fonctionVictoire(matchJ1, matchJ2);
				}

				if (victoire == j2)
				{
					a1 = ' ';
					a2 = ' ';
					a3 = ' ';
					a4 = ' ';
					a5 = ' ';
					a6 = ' ';
					a7 = ' ';
					a8 = ' ';
					a9 = ' ';
				}
					std::cout << "\n";

					std::cout << "|" << a1 << "|" << a2 << "|" << a3 << "|" << std::setw(10) << "|" << b1 << "|" << b2 << "|" << b3 << "|" << std::endl;
					std::cout << "-------" << std::setw(16) << "-------" << std::endl;
					std::cout << "|" << a4 << "|" << a5 << "|" << a6 << "|" << std::setw(10) << "|" << b4 << "|" << b5 << "|" << b6 << "|" << std::endl;
					std::cout << "-------" << std::setw(16) << "-------" << std::endl;
					std::cout << "|" << a7 << "|" << a8 << "|" << a9 << "|" << std::setw(10) << "|" << b7 << "|" << b8 << "|" << b9 << "|" << std::endl;

			}

			if (victoire == j1 || victoire == j2)
			{
				// Answer whether to play again or not
				std::cout << "\n Voulez-vous rejouer? (o/n) " << " ";
				std::cin >> reponse;

				if (reponse == 0)
				{
					std::cout << "\n Merci d'avoir joué TIC-TAC-TOE ! " << std::endl;
					return 0;
				}
				else if (reponse == 1)
				{
					j1 = j2;
					j2 = j1;
					return (j1, j2);
				}
			}

		}
		if (cont > 9) // when no one wins
		{
			std::cout << "\n Ce match est nul, personne n'a pas gagné." << std::endl;
		}

		// Answer whether to play again or not
		std::cout << "\n Voulez-vous rejouer? (o/n) " << " ";
		std::cin >> reponse;

		if (reponse == 0)
		{
			std::cout << "\n Merci d'avoir joué TIC-TAC-TOE ! " << std::endl;
			return 0;
		}
		else if (reponse == 1)
		{
			j1 = j2;
			j2 = j1;
			return (j1, j2);
		}	

	} while (reponse == 'o' || reponse == 'O');
}

// I prefer to declare all variables as private because that way I can better see the variables within each function.

int fonctionVictoire(int matchJ1, int matchJ2) // what I receive I put in parentheses, otherwise I leave it blank
{

	// The number of games won for each player
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << std::setw(5) << "\n            Tableau gagnant: " << std::endl;
	std::cout << std::setw(5) << "------------------------------" << std::endl;
	std::cout << std::setw(5) << "|" << "Le joueur 1" << "|" << "Le joueur 2" << "|" << std::endl;
	std::cout << std::setw(5) << "|" << std::setw(6) << matchJ1 << std::setw(6) << "|" << std::setw(6) << matchJ2 << std::setw(6) << "|" << std::endl;
	std::cout << std::setw(5) << "------------------------------" << std::endl;

	return 0;
}


