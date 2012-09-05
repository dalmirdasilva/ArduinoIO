/**
 * Arduino IO
 * 
 * Seekable
 */

#ifndef __ARDUINO_IO_SEEKABLE_H__
#define __ARDUINO_IO_SEEKABLE_H__ 1

class Seekable {
public:

    virtual void seek(unsigned int pos) = 0;
};


#endif /* __ARDUINO_IO_SEEKABLE_H__ */
