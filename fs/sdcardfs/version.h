/*
 * The sdcardfs
 *
 * Copyright (c) 2013 Samsung Electronics Co. Ltd
 *   Authors: Daeho Jeong, Woojoong Lee, Kitae Lee, Yeongjin Gil
 *
 * Revision History
 * 2014.06.24 : Release Version 2.1.0
 *    - Add sdcardfs version
 *    - Add kernel log when put_super
 * 2014.07.21 : Release Version 2.1.1
 *    - Add sdcardfs_copy_inode_attr() to fix permission issue
 *    - Delete mmap_sem lock in sdcardfs_setattr() to avoid deadlock
 * 2014.09.03 : Release Version 2.1.2
 *    - Add PERM_ANDROID_MEDIA to sync with Android L
 */

#define SDCARDFS_VERSION "2.1.2"
