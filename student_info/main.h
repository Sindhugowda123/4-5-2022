typedef struct student_data
{
	char name[10];
	char branch[10];
	float cgpa;
}student;

int student_count();
void input_data(student *s1, int count);
void print_data(student *s1, int count);

