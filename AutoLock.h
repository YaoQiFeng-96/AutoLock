#ifndef __AUTOLOCK_H__
#define __AUTOLOCK_H__

#include <iostream>
#include <pthread.h>

class AutoLock
{
public:
	AutoLock(pthread_mutex_t *pMutex):m_pMutex(pMutex)
	{
		pthread_mutex_lock(m_pMutex);
		std::cout<<"mutex locked."<<std::endl;
	}
	~AutoLock()
	{
		pthread_mutex_unlock(m_pMutex);
		std::cout<<"mutex unlocked."<<std::endl;
	}
private:
	pthread_mutex_t *m_pMutex;
    
};
#endif