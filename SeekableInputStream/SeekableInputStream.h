/**
 * Arduino IO
 * 
 * SeekableInputStream
 */

#ifndef __ARDUINO_IO_SEEKABLE_INPUT_STREAM_H__
#define __ARDUINO_IO_SEEKABLE_INPUT_STREAM_H__ 1

#include <Seekable.h>
#include <InputStream.h>

class SeekableInputStream : public virtual Seekable, public virtual InputStream {
public:

};

#endif /* __ARDUINO_IO_SEEKABLE_INPUT_STREAM_H__ */
