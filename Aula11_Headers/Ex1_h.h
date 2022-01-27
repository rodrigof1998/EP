struct Time {int hour; int minute; int second;};

typedef struct Time Time_t ;

struct Student {int N_Mec; char Nome[128];};

typedef struct Student Student_t ;

Time_t ask_Time();
int print(const Time_t *pTime);
Time_t diference_Time(const Time_t *pTime1, const Time_t *pTime2);
Student_t ask_Student();
