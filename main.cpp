#include "AutoLock.h"

int main(int argc, char* argv[])
{
    thread_mutex_t  mutex;
    AutoLock m_autoLock(&my_mutex);
    std::cout<<"hello world."<<std::endl;
    return 0;
}