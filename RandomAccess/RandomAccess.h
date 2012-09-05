/**
 * Araduino IO
 * 
 * RandomAccess
 * 
 * Interface derived from DataInput, DataOutput, Closeable and Seekable.
 */

#ifndef __ARDUINO_IO_RANDOM_ACCESS_H__
#define __ARDUINO_IO_RANDOM_ACCESS_H__ 1

#include <DataOutput.h>
#include <DataInput.h>
#include <Closeable.h>
#include <Seekable.h>

class RandomAccess : public virtual DataOutput, public virtual DataInput, public virtual Closeable, public virtual Seekable {
};

#endif /* __ARDUINO_IO_RANDOM_ACCESS_H__ */
