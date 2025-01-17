#define MAX_TODOS 101
#define ACT 0
#define DONE 1
#define DEL 0
#define NDEL 1

struct tcdata{
    int32 status;
    uint32 startTime;
    uint32 endTime;
    char message[200];
    int deleted;
};

extern struct tcdata tctable[];
extern int32 tcindex;

//alarmprocessID
extern pid32 alarmid;
//semaphore 
extern sid32 audio_system;
//audio variable(for simulation)
extern int32 audio_buffer;
