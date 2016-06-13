/*
	Extern implementation of Nit module file
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "core__file._ffi.h"
#ifdef ANDROID
	#include <android/log.h>
	#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, "Nit", __VA_ARGS__)
#else
	#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)
#endif
#define Array_of_Int_length core__file___Array_of_Int_length
#define Array_of_Int__index core__file___Array_of_Int__index
long core__file___FileReader_native_poll_in___impl( FileReader self, long fd )
{
#line 188 "../../lib/core/file.nit"


		struct pollfd fds = {(int)fd, POLLIN, 0};
		return poll(&fds, 1, 0);
	}
 FILE*  core__file___Int_fd_to_stream___impl( long self, char* mode )
{
#line 293 "../../lib/core/file.nit"


		return fdopen((int)self, mode);
	}
int core__file___NativeString_file_exists___impl( char* self )
{
#line 1301 "../../lib/core/file.nit"


		FILE *hdl = fopen(self,"r");
		if(hdl != NULL){
			fclose(hdl);
		}
		return hdl != NULL;
	}
 struct stat *  core__file___NativeString_file_stat___impl( char* self )
{
#line 1309 "../../lib/core/file.nit"


		struct stat buff;
		if(stat(self, &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	}
 struct stat *  core__file___NativeString_file_lstat___impl( char* self )
{
#line 1319 "../../lib/core/file.nit"


		struct stat* stat_element;
		int res;
		stat_element = malloc(sizeof(struct stat));
		res = lstat(self, stat_element);
		if (res == -1) return NULL;
		return stat_element;
	}
int core__file___NativeString_file_mkdir___impl( char* self )
{
#line 1328 "../../lib/core/file.nit"

 return !mkdir(self, 0777); }
int core__file___NativeString_rmdir___impl( char* self )
{
#line 1330 "../../lib/core/file.nit"

 return !rmdir(self); }
int core__file___NativeString_file_delete___impl( char* self )
{
#line 1332 "../../lib/core/file.nit"


		return remove(self) == 0;
	}
int core__file___NativeString_file_chdir___impl( char* self )
{
#line 1336 "../../lib/core/file.nit"

 return !chdir(self); }
char* core__file___NativeString_file_realpath___impl( char* self )
{
#line 1338 "../../lib/core/file.nit"

 return realpath(self, NULL); }
long core__file___NativeFileStat_mode___impl(  struct stat *  self )
{
#line 1345 "../../lib/core/file.nit"

 return self->st_mode; }
long core__file___NativeFileStat_atime___impl(  struct stat *  self )
{
#line 1348 "../../lib/core/file.nit"

 return self->st_atime; }
long core__file___NativeFileStat_ctime___impl(  struct stat *  self )
{
#line 1351 "../../lib/core/file.nit"

 return self->st_ctime; }
long core__file___NativeFileStat_mtime___impl(  struct stat *  self )
{
#line 1354 "../../lib/core/file.nit"

 return self->st_mtime; }
long core__file___NativeFileStat_size___impl(  struct stat *  self )
{
#line 1357 "../../lib/core/file.nit"

 return self->st_size; }
int core__file___NativeFileStat_is_reg___impl(  struct stat *  self )
{
#line 1360 "../../lib/core/file.nit"

 return S_ISREG(self->st_mode); }
int core__file___NativeFileStat_is_dir___impl(  struct stat *  self )
{
#line 1363 "../../lib/core/file.nit"

 return S_ISDIR(self->st_mode); }
int core__file___NativeFileStat_is_chr___impl(  struct stat *  self )
{
#line 1366 "../../lib/core/file.nit"

 return S_ISCHR(self->st_mode); }
int core__file___NativeFileStat_is_blk___impl(  struct stat *  self )
{
#line 1369 "../../lib/core/file.nit"

 return S_ISBLK(self->st_mode); }
int core__file___NativeFileStat_is_fifo___impl(  struct stat *  self )
{
#line 1372 "../../lib/core/file.nit"

 return S_ISFIFO(self->st_mode); }
int core__file___NativeFileStat_is_lnk___impl(  struct stat *  self )
{
#line 1375 "../../lib/core/file.nit"

 return S_ISLNK(self->st_mode); }
int core__file___NativeFileStat_is_sock___impl(  struct stat *  self )
{
#line 1378 "../../lib/core/file.nit"

 return S_ISSOCK(self->st_mode); }
long core__file___NativeFile_io_read___impl(  FILE*  self, char* buf, long len )
{
#line 1383 "../../lib/core/file.nit"


		return fread(buf, 1, len, self);
	}
long core__file___NativeFile_io_write___impl(  FILE*  self, char* buf, long from, long len )
{
#line 1387 "../../lib/core/file.nit"


		return fwrite(buf+from, 1, len, self);
	}
long core__file___NativeFile_write_byte___impl(  FILE*  self, unsigned char value )
{
#line 1391 "../../lib/core/file.nit"


		unsigned char b = (unsigned char)value;
		return fwrite(&b, 1, 1, self);
	}
long core__file___NativeFile_io_close___impl(  FILE*  self )
{
#line 1396 "../../lib/core/file.nit"

 return fclose(self); }
 struct stat *  core__file___NativeFile_file_stat___impl(  FILE*  self )
{
#line 1398 "../../lib/core/file.nit"


		struct stat buff;
		if(fstat(fileno(self), &buff) != -1) {
			struct stat* stat_element;
			stat_element = malloc(sizeof(struct stat));
			return memcpy(stat_element, &buff, sizeof(struct stat));
		}
		return 0;
	}
int core__file___NativeFile_ferror___impl(  FILE*  self )
{
#line 1408 "../../lib/core/file.nit"

 return ferror(self); }
long core__file___NativeFile_fileno___impl(  FILE*  self )
{
#line 1410 "../../lib/core/file.nit"

 return fileno(self); }
long core__file___NativeFile_flush___impl(  FILE*  self )
{
#line 1413 "../../lib/core/file.nit"

 return fflush(self); }
long core__file___NativeFile_set_buffering_type___impl(  FILE*  self, long buf_length, long mode )
{
#line 1416 "../../lib/core/file.nit"


		return setvbuf(self, NULL, (int)mode, buf_length);
	}
 FILE*  core__file___new_NativeFile_io_open_read___impl( char* path )
{
#line 1420 "../../lib/core/file.nit"

 return fopen(path, "r"); }
 FILE*  core__file___new_NativeFile_io_open_write___impl( char* path )
{
#line 1422 "../../lib/core/file.nit"

 return fopen(path, "w"); }
 FILE*  core__file___new_NativeFile_native_stdin___impl(  )
{
#line 1424 "../../lib/core/file.nit"

 return stdin; }
 FILE*  core__file___new_NativeFile_native_stdout___impl(  )
{
#line 1426 "../../lib/core/file.nit"

 return stdout; }
 FILE*  core__file___new_NativeFile_native_stderr___impl(  )
{
#line 1428 "../../lib/core/file.nit"

 return stderr; }
 DIR*  core__file___new_NativeDir_opendir___impl( char* path )
{
#line 1435 "../../lib/core/file.nit"

 return opendir(path); }
void core__file___NativeDir_closedir___impl(  DIR*  self )
{
#line 1438 "../../lib/core/file.nit"

 closedir(self); }
char* core__file___NativeDir_readdir___impl(  DIR*  self )
{
#line 1441 "../../lib/core/file.nit"


		struct dirent *de;
		de = readdir(self);
		if (!de) return NULL;
		return de->d_name;
	}
long core__file___Sys_buffer_mode_full___impl( Sys self )
{
#line 1461 "../../lib/core/file.nit"

 return _IOFBF; }
long core__file___Sys_buffer_mode_line___impl( Sys self )
{
#line 1464 "../../lib/core/file.nit"

 return _IONBF; }
long core__file___Sys_buffer_mode_none___impl( Sys self )
{
#line 1467 "../../lib/core/file.nit"

 return _IOLBF; }
nullable_Int core__file___Sys_intern_poll___impl( Sys self, Array_of_Int in_fds, Array_of_Int out_fds )
{
#line 1494 "../../lib/core/file.nit"


		int in_len, out_len, total_len;
		struct pollfd *c_fds;
		int i;
		int first_polled_fd = -1;
		int result;

		in_len = (int)Array_of_Int_length( in_fds );
		out_len = (int)Array_of_Int_length( out_fds );
		total_len = in_len + out_len;
		c_fds = malloc( sizeof(struct pollfd) * total_len );

		/* input streams */
		for ( i=0; i<in_len; i ++ ) {
			int fd = (int)Array_of_Int__index( in_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLIN;
		}

		/* output streams */
		for ( i=0; i<out_len; i ++ ) {
			int fd = (int)Array_of_Int__index( out_fds, i );

			c_fds[i].fd = fd;
			c_fds[i].events = POLLOUT;
		}

		/* poll all fds, unlimited timeout */
		result = poll( c_fds, total_len, -1 );

		if ( result > 0 ) {
			/* analyse results */
			for ( i=0; i<total_len; i++ )
				if ( c_fds[i].revents & c_fds[i].events || /* awaited event */
					 c_fds[i].revents & POLLHUP ) /* closed */
				{
					first_polled_fd = c_fds[i].fd;
					break;
				}

			return Int_as_nullable( first_polled_fd );
		}
		else if ( result < 0 )
			fprintf( stderr, "Error in Stream:poll: %s\n", strerror( errno ) );

		return null_Int();
	}
char* core__file___Sys_native_getcwd___impl( Sys self )
{
#line 1582 "../../lib/core/file.nit"

 return getcwd(NULL, 0); }
