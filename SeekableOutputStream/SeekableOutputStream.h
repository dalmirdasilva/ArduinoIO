/**
 * Arduino IO
 * 
 * SeekableOutputStream
 */

#ifndef __ARDUINO_IO_SEEKABLE_OUTPUT_STREAM_H__
#define __ARDUINO_IO_SEEKABLE_OUTPUT_STREAM_H__ 1

#include <Seekable.h>
#include <OutputStream.h>

class SeekableOutputStream : public virtual Seekable, public virtual OutputStream {
public:

};

#endif /* __ARDUINO_IO_SEEKABLE_OUTPUT_STREAM_H__ */
