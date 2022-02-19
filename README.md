- 👋 Hi, I’m @Sandeeprajpu
- 👀 I’m interested in ...
- 🌱 I’m currently learning ...
- 💞️ I’m looking to collaborate on ...
- 📫 How to reach me ...

<!---
Sandeeprajpu/Sandeeprajpu is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->
# include<stdio.h> 
 
int main() 
{
    float marks;
    char grade;
 
    printf("Enter marks: ");
    scanf("%f", &marks);
    
    if(marks >= 85)
    {
        grade = 'A';
    }
    else if(marks >= 70 && marks < 85)
    {
        grade = 'B';
    }
    else if(marks >= 55 && marks < 70)
    {
        grade = 'C';
    }
    else if(marks >= 40 && marks < 55)
    {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }
                    
    printf("Your grade is %c", grade);
    
    return 0;
}
