#ifndef __RING_BUFFER_H__
#define __RING_BUFFER_H__

#define RING_BUFFER_SIZE        256


typedef struct ring_buffer_element
{
    void*   elem;
}rbelement;

typedef struct ring_buffer
{
    rbelement   buffer[RING_BUFFER_SIZE];
    int         head;
    int         tail;
}rbuffer;


void        ring_buffer_init   (rbuffer* buf);
int         ring_buffer_size   (rbuffer* buf);
void        ring_buffer_put    (rbuffer* buf, rbelement* elem);
rbelement*  ring_buffer_get    (rbuffer* buf);


#endif
