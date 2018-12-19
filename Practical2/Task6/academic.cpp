// Header Files
#include <iostream>

using namespace std;

int main ()
{
  //Defining Variables
  int student_mark;

  cout << "Enter your mark: ";
  cin >> student_mark;
  const int MIN_SCORE = 0;
  const int MAX_SCORE = 100;


  //If statements.
  if (student_mark >= MIN_SCORE && student_mark <= MAX_SCORE)
    {
        if (student_mark >= 75)
        {
            cout << "You have achieved " << student_mark << " congratulations you pass with a distinction.\n";
        }

        else if (student_mark >= 50)
        {
            cout << "You have acheived " << student_mark << " well done, you pass.\n";
        }

        else if (student_mark >= 40)
        {
            cout << "Having achieved " << student_mark << " you are admitted to re-exam.\n";
        }

        else
        {
             cout << "Having achieved " << student_mark << " you have unfortunately failed.\n";
        }
    }

    else
    {
        cout << "Invalid value entered\n";
    }

  return 0;

}
