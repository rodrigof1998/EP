
typedef struct Student Student_t ;
typedef struct Time Time_t ;

struct Time {int hour; int minute; int second;};
struct Student {int N_Mec; char Nome[128];};



Time_t ask_Time();
int print(const Time_t *pTime);

