#include <iostream>
#include <string>
using namespace std;
struct studentinf
{
    string name;
    int rollNo;
    char grade;
    int age;
};
// 1
char upperCase(int index, struct studentinf data[])
{
    char temp;
    int sum = 0;
    sum += data[index].grade;
    sum -= 32;
    temp = sum;
    return temp;
}
void addStudent(int size, int stdntNo, int arrayrollNo[], struct studentinf data[])
{
    for (int i = size - 1; i < size; i++)
    {
        cout << "************************************************************************************************" << endl;
        cout << "                                <------  S t u d e n t - " << stdntNo << "  ------>" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, data[i].name);
        cout << "Roll no: ";
        cin >> data[i].rollNo;
        if (data[i].rollNo == 0)
        {
            do
            {
                cout << "Roll-No can't be : 0. Please Enter a Valid Roll-No. " << endl;
                cin >> data[i].rollNo;
            } while (data[i].rollNo == 0);
        }

        arrayrollNo[i] = data[i].rollNo;
        for (int j = 0; j < i; j++)
        {
            if (data[i].rollNo == arrayrollNo[j])
            {
                j = -1;
                cout << "Entered Roll-No Already Exists. Please Enter a Valid Roll-No." << endl;
                cout << "Roll-No: ";
                cin >> data[i].rollNo;
            }
        }
        arrayrollNo[i] = data[i].rollNo;

        cout << "Grade: ";
        cin >> data[i].grade;
        while ((data[i].grade < 'a' || data[i].grade > 'z') && (data[i].grade < 'A' || data[i].grade > 'Z'))
        {
            cout << "Invalid Grade. Please Enter Valid Grade: ";
            cin >> data[i].grade;
        }
        if (data[i].grade >= 'a' && data[i].grade <= 'z')
        {
            data[i].grade = upperCase(i, data);
        }
        cout << "Age: ";
        cin >> data[i].age;
        cout << "************************************************************************************************" << endl;
    }
    cin.ignore();
}
// 2
void delInf(int index, int arrayrollNo[], struct studentinf data[])
{

    arrayrollNo[index] = {0};
    data[index].name.erase();
    data[index].rollNo = {0};
    data[index].grade = '\0';
    data[index].age = {0};
}
// 3
int findIndex(int rollNo, int size, struct studentinf data[], int *ptr)
{

    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (data[i].rollNo == 0)
        {
            continue;
        }
        else if ((data[i].rollNo) == rollNo)
        {
            rollNo = 0;
            *(ptr) = *(ptr) + 1;
            index = i;
        }
    }
    return index;
}
void displayStudent(int index, struct studentinf data[])
{

    cout << "************************************************************************************************" << endl;
    cout << "Required Student is: " << endl;
    cout << "Name: " << data[index].name << endl;
    cout << "Roll-No: " << data[index].rollNo << endl;
    cout << "Grade: " << data[index].grade << endl;
    cout << "Age: " << data[index].age << endl;
    cout << "************************************************************************************************" << endl;
}
char averageGrade(int Cpysize, int size, struct studentinf data[])
{

    char average;
    int sum = 0;

    for (int i = 0; i < Cpysize; i++)
    {
        if (data[i].grade == '\0')
        {
            continue;
        }
        sum += data[i].grade;
    }
    average = sum / size;

    return average;
}
void dispScholarship()
{
    cout << "****************************************************************" << endl;
    cout << "***** * * * * * * * * *  S C H O L A R  S H I P  * * * * * *****" << endl;
    cout << "Grade: A :            <------ (  1 0 0 %  ) ------>            *" << endl;
    cout << "Grade: B :            <------ (  7 5.0 %  ) ------>            *" << endl;
    cout << "Grade: C :            <------ (  5 0.0 %  ) ------>            *" << endl;
    cout << "Grade: D :            <------ (  2 5.0 %  ) ------>            *" << endl;
    cout << "Grade: E :            <------ (  1 2.5 %  ) ------>            *" << endl;
    cout << "****** * * * * * * * * * * * * * * * * * * * * * * * * * *******" << endl;
    cout << "****************************************************************" << endl;
}
void ScholarShip(int index, struct studentinf data[])
{
    char gradeChar;
    gradeChar = data[index].grade;
    // cout<<"Grade is: "<<gradeChar;

    if (gradeChar == 'A')
    {
        cout << "Congratulations. You Got  100 % Scholarship." << endl;
        cout << "You Got Grade: " << gradeChar << endl;
    }
    else if (gradeChar == 'B')
    {
        cout << "Congratulations. You Got  75.0 % Scholarship." << endl;
        cout << "You Got Grade: " << gradeChar << endl;
    }
    else if (gradeChar == 'C')
    {
        cout << "Congratulations. You Got  50.0 % Scholarship." << endl;
        cout << "You Got Grade: " << gradeChar << endl;
    }
    else if (gradeChar == 'D')
    {
        cout << "Congratulations. You Got  25.0 % Scholarship." << endl;
        cout << "You Got Grade: " << gradeChar << endl;
    }
    else if (gradeChar == 'E')
    {
        cout << "Congratulations. You Got  12.5 % Scholarship." << endl;
        cout << "You Got Grade: " << gradeChar << endl;
    }
    else
    {
        cout << "You Got Grade Below our Scholarship Criteria." << endl;
        cout << "You Got Grade: " << gradeChar << endl;
    }
}
void upgradeData(int index, struct studentinf data[]);
void dspdata(int size, struct studentinf data[]);
int main()
{

    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t*******************************   W  E  L  C  O  M  E      T O   *******************************" << endl;
    cout << "\t\t\t\t\t************************  CAPITAL UNIVERSITY OF SCIENCE AND TECHNOLOGY  ************************" << endl;
    cout << "\t\t\t\t\t*******************************     I  S  L  A  M  A  B  A  D    *******************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;

    cout << endl
         << endl;

    cout << "\t\t\t\t\t                  ********************************************************" << endl;
    cout << "\t\t\t\t\t           **********************************************************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t***************************  * *   I  T  P   P  R  O  J  E  C  T  * *  *************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t***************** * *   P  R  E  S  E  N  T  E  D   B  Y  * *  *********************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t***************************** * *   DANIYAL HUSSAIN QURESHI  * *  ******************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t************************************************************************************************" << endl;
    cout << "\t\t\t\t\t***************************** * *  STUDENT MANAGEMENT PORTAL * * *******************************" << endl;
    cout << "\t\t\t\t\t           **********************************************************************" << endl;
    cout << "\t\t\t\t\t                  ********************************************************" << endl;
    cout << "\t\t\t\t\t                         *******************************************" << endl;
    cout << "\t\t\t\t\t                                *****************************" << endl;
    cout << "\t\t\t\t\t                                      ***************** " << endl;
    cout << "\t\t\t\t\t                                           ******** " << endl;
    cout << "\t\t\t\t\t                                               * " << endl;

    cout << endl
         << endl;

    string password = "studentsPassword@123";
    string inpPassword;
    cout << "************************************************************************************************" << endl;
    cout << "**************************************  Password Protected *************************************" << endl;
    cout << "************************************************************************************************" << endl;
    cout << "Please Enter Password: ";
    getline(cin, inpPassword);
    while (inpPassword != password)
    {
        cout << "Incorrect Passowrd. Please Enter Correct Password or Press-0: To Exit: ";
        getline(cin, inpPassword);
        if (inpPassword == "0")
        {
            return 0;
        }
    }
    // Menu
    int swtch;
    // Input
    int size, copysize;

    cout << "************************************************************************************************" << endl;
    cout << "Please Enter Number of Students: ";
    cin >> size;
    copysize = size;
    int arrayrollNo[copysize];
    // Varibale Declaration
    // Structure.
    studentinf data[size];
    // copysize = size;
    for (int i = 0; i < size; i++)
    {
        cout << "************************************************************************************************" << endl;
        cout << "                                <------  S t u d e n t - " << i + 1 << "  ------>" << endl;
        cout << "Name: ";
        cin.ignore();
        getline(cin, data[i].name);
        cout << "Roll no: ";
        cin >> data[i].rollNo;
        arrayrollNo[i] = data[i].rollNo;
        while (data[i].rollNo == 0)
        {
            cout << "Roll-No can't be : 0. Please Enter a Valid Roll-No. " << endl;
            cin >> data[i].rollNo;
        }
        for (int j = 0; j < i; j++)
        {
            if (data[i].rollNo == arrayrollNo[j])
            {
                j = -1;
                cout << "Entered Roll-No Already Exists. Please Enter a Valid Roll-No." << endl;
                cout << "Roll-No: ";
                cin >> data[i].rollNo;
            }
        }
        arrayrollNo[i] = data[i].rollNo;

        cout << "Grade: ";
        cin >> data[i].grade;
        if (data[i].grade >= 'a' && data[i].grade <= 'z')
        {
            data[i].grade = upperCase(i, data);
        }
        cout << "Age: ";
        cin >> data[i].age;
        while(data[i].age <= 0 && data[i].age >=100)
        {
            cout<<"Invalid Age. Please Enter Valid Age: ";
            cin>>data[i].age;
        }
        cout << "************************************************************************************************" << endl;
    }
    cin.ignore();

    do
    {

        // Menu:
        cout << "************************************************************************************************" << endl;
        cout << "M E N U ::                      <------  Total Students : " << size << " ------>                            *" << endl;
        cout << "Press-1: To Add New Student.                                                                   *" << endl;
        cout << "Press-2: To Delete Any Student.                                                                *" << endl;
        cout << "Press-3: To Find Student Information.                                                          *" << endl;
        cout << "Press-4: To Check Average Grades of all students.                                              *" << endl;
        cout << "Press-5: To Check ScholarShip Craiteria.                                                       *" << endl;
        cout << "Press-6: To Check Your ScholarShip.                                                            *" << endl;
        cout << "Press-7: To Display Information of All Students.                                               *" << endl;
        cout << "Press-8: To Upgrade Student Information.                                                       *" << endl;
        cout << "Press-9: To End Programme.                                                                     *" << endl;
        cout << "************************************************************************************************" << endl;

        cout << "Press-";
        cin >> swtch;
        switch (swtch)
        {
        case (1):
        {
            size++;
            copysize++;
            addStudent(copysize, size, arrayrollNo, data);
            break;
        }
        case (2):
        {
            int rollNo, indx, count = 0;
            cout << "Please Enter Roll-No of Student: ";
            cin >> rollNo;
            indx = findIndex(rollNo, copysize, data, &count);

            //  Delete Function
            if (count != 0)
            {
                delInf(indx, arrayrollNo, data);
                size--;
                cout << "We have Sucessfully Delete Entered Student. " << endl;
                indx = 0;
                count = 0;
            }
            else
            {
                cout << "Required Student Does not Exists in our Record." << endl;
            }

            break;
        }
        case (3):
        {
            int rollNo, indx, count = 0;
            cout << "Please Enter Roll Number of Student: ";
            cin >> rollNo;
            indx = findIndex(rollNo, size, data, &count);
            //  Function Display
            if (count != 0)
            {
                displayStudent(indx, data);
                count = 0;
                indx = 0;
            }
            else
            {
                cout << "Required Student Does not Exists in our Record." << endl;
            }
            break;
        }
        case (4):
        {
            cout << "Average Grade of All Students is: ";
            cout << averageGrade(copysize, size, data);
            cout << endl;
            break;
        }
        case (5):
        {
            dispScholarship();
            break;
        }
        case (6):
        {
            int rollNo, indx, count = 0;
            cout << "Please Enter Roll Number of Student: ";
            cin >> rollNo;
            indx = findIndex(rollNo, size, data, &count);
            //  Function Display
            if (count != 0)
            {
                ScholarShip(indx, data);
                count = 0;
                indx = 0;
            }
            else
            {
                cout << "Required Student Does not Exists in our Record." << endl;
            }
            break;
        }
        case (7):
        {
            dspdata(copysize, data);
            break;
        }
        case (8):
        {
            int rollNo, indx, count = 0;
            cout << "Please Enter Roll-No of Student: ";
            cin >> rollNo;
            indx = findIndex(rollNo, copysize, data, &count);
            if (count != 0)
            {
                upgradeData(indx, data);
                count = 0;
                indx = 0;
            }
            else
            {
                cout << "Required Student Does not Exists in our Record." << endl;
            }

            // Upgrade Function Calling

            break;
        }
        case (9):
        {
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            cout << "************************************************************************************************" << endl;
            cout << "**************************  <--------- (  T H E   E N D  ) --------->  *************************" << endl;
            cout << "******************************  <--------- (  B Y E  ) --------->  *****************************" << endl;
            cout << "************************************************************************************************" << endl;
            // dspdata(size, data);
            cout << endl
                 << endl
                 << endl
                 << endl
                 << endl;
            break;
        }

        default:
            break;
        }

    } while (swtch != 9);

    return 0;
}
void upgradeData(int index, struct studentinf data[])
{
    int choice;
    cout << "********************************************************************************" << endl;
    cout << "Press-1: To Upgrade/Change Name.                                               *" << endl;
    cout << "Press-2: To Upgrade/Change Grade.                                              *" << endl;
    cout << "Press-3: To Upgrade/Change Age.                                                *" << endl;
    cout << "********************************************************************************" << endl;
    cin >> choice;
    if (choice >= 1 && choice <= 3)
    {
        switch (choice)
        {
        case (1):
        {
            cout << "Pleae Enter Name: ";
            cin.ignore();
            getline(cin, data[index].name);
            break;
        }
        case (2):
        {
            cout << "Pleae Enter Grade: ";
            cin >> data[index].grade;
            if (data[index].grade >= 'a' && data[index].grade <= 'z')
            {
                data[index].grade = upperCase(index, data);
            }
            break;
        }
        case (3):
        {
            cout << "Pleae Enter Age: ";
            cin >> data[index].age;
            break;
        }
        }
    }
    else
    {
        cout << "Please Enter a Valid Option. Thanks." << endl;
    }
}
void dspdata(int size, struct studentinf data[])
{

    int strlen, no = 0;
    // string str=data[];
    cout << "************************************************************************************************" << endl;
    cout << "*********************** * * * *   A L L   S T U D E N T S   D A T A  * * * * *******************" << endl;
    cout << "************************************************************************************************" << endl;
    for (int i = 0; i < size; i++)
    {
        string str = data[i].name;
        strlen = str.length();
        if (strlen != 0)
        {

            cout << "<--- Student-" << no + 1 << " ---> ";
            cout << " | Name   " << data[i].name;
            cout << " | Roll-No  " << data[i].rollNo;
            cout << " | Grade  " << data[i].grade;
            cout << " | Age   " << data[i].age << endl;
            cout << "************************************************************************************************" << endl;
            no++;
        }
    }
    cout << endl
         << endl;
}
