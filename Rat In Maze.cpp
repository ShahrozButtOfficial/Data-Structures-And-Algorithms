//#include<iostream>
//#include<Windows.h>
//#include<fstream>
//using namespace std;
//
//void starting_game(char**& arr, int row, int col, int case_no, int move, char name[], int& score);
//char** easy(char** arr);
//char** medium(char** arr);
//char** hard(char** arr);
//void print(char** arr, int row);
//void deletion_of_array(char** arr, int row);
//
//int main()
//{
//	cout << "\n  RAT IN MAZE  " << endl;
//	bool flag1ition_1 = true;
//
//	while (flag1ition_1)
//	{
//		char name[10];
//		system("Color 60");
//		int mode;
//		cout << "\nenter 1 for easy game.\nenter 2 for medium game.\nenter 3 for hard game.\nenter 4 to exit.\n";
//		cin >> mode;
//		switch (mode)
//		{
//		case 1:
//		{
//			int score = 0;
//			cout << " ENTER YOUR NAME(9 CHARACTERS MAXIMUM) :";
//			cin >> name;
//			char** array{};
//			int rows = 6, cols = 6, move = 50;
//			array = easy(array);
//			print(array, rows);
//			starting_game(array, rows, cols, mode, move, name, score);
//			deletion_of_array(array, rows);
//			cout << "\n GAME OVER " << endl;
//			ofstream meow("save.txt", ios::app);
//			meow << "name : " << name << " " << score << endl;
//			meow.close();
//			break;
//		}
//		case 2:
//		{
//			cout << " ENTER YOUR NAME(9 CHARACTERS MAXIMUM) :";
//			cin >> name;
//			int score = 0;
//			char** array{};
//			int rows = 6, col = 6, move = 15;
//			array = medium(array);
//			print(array, rows);
//			starting_game(array, rows, col, mode, move, name, score);
//			deletion_of_array(array, rows);
//			cout << "\n  GAME OVER  " << endl;
//			ofstream meow("save.txt", ios::app);
//			meow << "name : " << name << " " << score << endl;
//			meow.close();
//			break;
//		}
//		case 3:
//		{
//			cout << " ENTER YOUR NAME(9 CHARACTERS MAXIMUM) :";
//			cin >> name;
//			int score = 0;
//			char** array{};
//			int rows = 6, col = 6, move = 10;
//			array = hard(array);
//			print(array, rows);
//			starting_game(array, rows, col, mode, move, name, score);
//			deletion_of_array(array, rows);
//			cout << "\n  GAME OVER  " << endl;
//			ofstream meow("save.txt", ios::app);
//			meow << "name : " << name << " " << score << endl;
//			meow.close();
//			break;
//		}
//		case 4:
//		{
//			cout << ".....EXITING THE PROGRAM....." << endl;
//			flag1ition_1 = false;
//			break;
//		}
//		default:
//		{
//			cout << "choose correct option.\n";
//			break;
//		}
//		}
//	}
//	return 0;
//}
//void starting_game(char**& arr, int row, int col, int case_no, int move, char name[], int& score)
//{
//	int p_i = 0, p_j = 0, w_j = 0, w_i = 0, index_r = 0, index_c = 0;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; arr[i][j] != '\0'; j++)
//		{
//			if (arr[i][j] == 'w')
//			{
//				w_j = j;
//				w_i = i;
//			}
//		}
//	}
//	bool flag = true;
//	int lives = 3;
//	while (flag)
//	{
//		if (index_r == w_i && index_c == w_j)
//		{
//			cout << "\t\t YOUR SCORE = " << score << "\n";
//			cout << "-------------------------------------------------------------" << endl;
//			cout << "-- YOU WON --\n";
//			cout << "-------Thank you for playing----- " << endl;
//
//			flag = false;
//		}
//		else
//		{
//			char choice;
//			while (1)
//			{
//				cout << "Instructions:\n\n";
//				cout << "Enter U to move up.\nEnter D to move down.\nEnter L to move left.\nEnter R to move right.\n";
//				cout << "'1' PATH IS FREE TO GO.\n'0' PATH IS BLOCKED BY WALL\n'+' IS A MONSTER IN THE PATH\n\nGET TO THE 'W' TO WIN THE GAME\n\n";
//				cout << "Enter your desired input:\n";
//				cin >> choice;
//				cout << "\n\n";
//				if (choice == 'U' || choice == 'u' || choice == 'D' || choice == 'd' || choice == 'L' || choice == 'l' || choice == 'R' || choice == 'r')
//					break;
//			}
//			for (int i = 0; i < row; i++)
//			{
//				for (int j = 0; arr[i][j] != '\0'; j++)
//				{
//					if (arr[i][j] == 'p')
//					{
//						p_j = j;
//						p_i = i;
//					}
//				}
//			}
//			switch (choice)
//			{
//			case 'l':case'L':
//			{
//				if (p_j == 0)
//				{
//					cout << "-- OUT OF BOUNDS --.\n";
//					move--;
//					break;
//				}
//				else if (arr[p_i][p_j - 1] == '+')
//				{
//					lives--;
//					cout << "\n-- MONSTER ATE YOU --\n";
//					score = score - 5;
//				}
//				else if (arr[p_i][p_j - 1] == '0')
//				{
//					cout << "\n-- YOU HIT A WALL --\n";
//					score = score - 1;
//				}
//				else
//				{
//					arr[p_i][p_j - 1] = arr[p_i][p_j];
//					arr[p_i][p_j] = '1';
//					index_r = p_i;
//					index_c = p_j - 1;
//					move--;
//					score = score + 5;
//				}
//				print(arr, row);
//
//				if (lives == 0)
//				{
//					cout << "-- NO LIVES LEFT --\n";
//					cout << "-- YOU DIED --\n";
//					cout << "-- GAME OVER --\n\n";
//					flag = false;
//				}
//				break;
//			}
//			case 'r':case'R':
//			{
//				if (p_j == 5)
//				{
//					cout << "-- OUT OF BOUNDS --.\n";
//					move--;
//					break;
//				}
//				else if (arr[p_i][p_j + 1] == '+')
//				{
//					lives--;
//					cout << "\n-- MONSTER ATE YOU --\n";
//					score = score - 5;
//				}
//				else if (arr[p_i][p_j + 1] == '0')
//				{
//					cout << "\n-- YOU HIT A WALL --\n";
//					score = score - 1;
//				}
//				else
//				{
//					arr[p_i][p_j + 1] = arr[p_i][p_j];
//					arr[p_i][p_j] = '1';
//					index_r = p_i;
//					index_c = p_j + 1;
//					move--;
//					score = score + 5;
//				}
//				print(arr, row);
//
//				if (lives == 0)
//				{
//					cout << "-- NO LIVES LEFT --\n";
//					cout << "-- YOU DIED --\n";
//					cout << "-- GAME OVER --\n\n";
//					flag = false;
//				}
//				break;
//			}
//			case 'u':case'U':
//			{
//				if (p_i == 0)
//				{
//					cout << "-- OUT OF BOUNDS --.\n";
//					move--;
//					break;
//				}
//				else if (arr[p_i - 1][p_j] == '+')
//				{
//					lives--;
//					cout << "\n-- MONSTER ATE YOU --\n";
//					score = score - 5;
//				}
//				else if (arr[p_i - 1][p_j] == '0')
//				{
//					cout << "\n-- YOU HIT A WALL --\n";
//					score = score - 1;
//				}
//				else
//				{
//					arr[p_i - 1][p_j] = arr[p_i][p_j];
//					arr[p_i][p_j] = '1';
//					move++;
//					index_r = p_i - 1;
//					index_c = p_j;
//					move--;
//					score = score + 5;
//				}
//				print(arr, row);
//
//				if (lives == 0)
//				{
//					cout << "-- NO LIVES LEFT --\n";
//					cout << "-- YOU DIED --\n";
//					cout << "-- GAME OVER --\n\n";
//					flag = false;
//				}
//				break;
//			}
//			case 'd':case'D':
//			{
//				if (p_i == 5)
//				{
//					cout << "-- OUT OF BOUNDS --\n";
//					move--;
//					break;
//				}
//				else if (arr[p_i + 1][p_j] == '+')
//				{
//					lives--;
//					cout << "\n-- MONSTER ATE YOU --\n";
//					score = score - 5;
//				}
//				else if (arr[p_i + 1][p_j] == '0')
//				{
//					cout << "\n-- YOU HIT A WALL --\n";
//					score = score - 1;
//				}
//				else
//				{
//					arr[p_i + 1][p_j] = arr[p_i][p_j];
//					arr[p_i][p_j] = '1';
//					move--;
//					score = score + 5;
//				}
//				index_r = p_i + 1;
//				index_c = p_j;
//				print(arr, row);
//
//				if (lives == 0)
//				{
//					cout << "-- NO LIVES LEFT --\n";
//					cout << "-- YOU DIED --\n";
//					cout << "-- GAME OVER --\n\n";
//					flag = false;
//				}
//				break;
//			}
//			}
//			cout << "# you have " << lives << " lives and " << move << " moves left #";
//			if (move == 0)
//			{
//				cout << "\n-- YOU ARE LOST IN THE MAZE --\n";
//				cout << "-- GAME OVER --\n";
//				flag = false;
//			}
//			bool flag1 = true;
//			while (flag1)
//			{
//				char chr;
//				cout << "\n-- enter 'X' to resume --\n-- enter 'Z' restart --\n";
//				cin >> chr;
//				if (chr == 'Z' || chr == 'z' && case_no == 1)
//				{
//					arr = easy(arr);
//					print(arr, row);
//					flag1 = false;
//				}
//				else if (chr == 'Z' || chr == 'z' && case_no == 2)
//				{
//					arr = medium(arr);
//					print(arr, row);
//					flag1 = false;
//				}
//				else if (chr == 'Z' || chr == 'z' && case_no == 3)
//				{
//					arr = hard(arr);
//					print(arr, row);
//					flag1 = false;
//				}
//				else if (chr == 'x' || chr == 'X')
//				{
//					print(arr, row);
//					flag1 = false;
//				}
//			}
//		}
//	}
//
//
//
//}
//void print(char** arr, int row)
//{
//	system("cls");
//	cout << "--------------------" << endl;
//	for (int i = 0; i < row; i++)
//	{
//		cout << "|";
//		for (int j = 0; j < 6; j++)
//		{
//			cout << " " << arr[i][j] << " ";
//		}
//		cout << "|" << endl;
//	}
//	cout << "--------------------" << endl;
//	cout << "\n";
//}
//char** easy(char** arr)
//{
//	ifstream easy("easy.txt");
//	arr = new char* [6];
//	for (int i = 0; i < 6; i++)
//	{
//		arr[i] = new char[6];
//	}
//
//	while (!easy.eof())
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				easy >> arr[i][j];
//			}
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	return arr;
//}
//char** medium(char** arr)
//{
//	ifstream med("med.txt");
//	arr = new char* [6];
//	for (int i = 0; i < 6; i++)
//	{
//		arr[i] = new char[6];
//	}
//
//	while (!med.eof())
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				med >> arr[i][j];
//			}
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	return arr;
//}
//char** hard(char** arr)
//{
//	ifstream hard("hard.txt");
//	arr = new char* [6];
//	for (int i = 0; i < 6; i++)
//	{
//		arr[i] = new char[6];
//	}
//
//	while (!hard.eof())
//	{
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				hard >> arr[i][j];
//			}
//		}
//
//		for (int i = 0; i < 6; i++)
//		{
//			for (int j = 0; j < 6; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//	return arr;
//}
//void deletion_of_array(char** arr, int row)
//{
//	for (int i = 0; i < row; i++)
//	{
//		delete[]arr[i];
//	}
//	delete[]arr;
//}