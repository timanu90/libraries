#include <stdio.h>

#include "ring_buffer.h"

void ring_buffer_init(rbuffer* buf)
{
    buf->head = 0;
    buf->tail = 0;
}

void ring_buffer_put(rbuffer* buf, rbelement* elem)
{
    if(buf != NULL && elem != NULL && ring_buffer_size(buf) < (RING_BUFFER_SIZE - 1))
    {
        buf->buffer[buf->tail] = *elem;
        buf->tail++;

        if(buf->tail >= RING_BUFFER_SIZE)
        {
            buf->tail = 0;
        }
    }
}

rbelement* ring_buffer_get(rbuffer* buf)
{
    rbelement* elem = NULL;

    if(buf != NULL && ring_buffer_size(buf) > 0)
    {
        elem = &(buf->buffer[buf->head]);
        buf->head++;

        if(buf->head >= RING_BUFFER_SIZE)
        {
            buf->head = 0;
        }
    }

    return elem;
}

int ring_buffer_size(rbuffer* buf)
{
    int buf_size = 0;

    if(buf != NULL)
    {
        if(buf->tail > buf->head)
        {
            buf_size = buf->tail - buf->head;
        }
        else if (buf->tail < buf->head)
        {
            buf_size = RING_BUFFER_SIZE - buf->head + buf->tail;
        }
    }

    return buf_size;
}
