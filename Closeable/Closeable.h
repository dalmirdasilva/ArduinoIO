/**
 * Arduino IO
 * 
 * Closeable
 *
 * A Closeable is a source or destination of data that can be closed.
 */

#ifndef __ARDUINO_IO_CLOSEABLE_H__
#define __ARDUINO_IO_CLOSEABLE_H__ 1

class Closeable {
public:

    virtual void close() = 0;
};

#endif /* __ARDUINO_IO_CLOSEABLE_H__ */