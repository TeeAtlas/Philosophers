#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h> // header for threads
// you have to add -pthreads to the gcc command on linux
// what is a thread

void *routine(void *add)
{
	long	*add_num = (long *) (add); 
	printf("Add: %ld\n", *add_num);
	printf("Test from threads\n"); // it prints twice for both threads
	sleep(3);
	printf("Ending thread\n"); // shows they slept and printed again
	return NULL; //because we have to return something here: not sure why since it's void
}

int main(int ac, char **argv)
{
	pthread_t t1, t2; // a place where the API can store information
	long	value1 = 1;
	long	value2 = 100;

	if (pthread_create(&t1, NULL, &routine, (void*) &value1) != 0)// create inits the thread
		return 1;
	if (pthread_create(&t2, NULL, &routine, (void*) &value2) != 0)
		return 2;
	if (pthread_join(t1, NULL) != 0) // this is basically the wait but for threads 
		return 3;
	if (pthread_join(t2, NULL) != 0) //these are in parallel with each other
		return 4;
	return (0);
}

// make error messages as protections