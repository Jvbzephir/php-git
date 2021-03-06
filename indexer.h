/*
 * PHP Libgit2 Extension
 *
 * https://github.com/libgit2/php-git
 *
 * Copyright 2014 Shuhei Tanuma.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef PHP_GIT2_INDEXER_H
#define PHP_GIT2_INDEXER_H

ZEND_BEGIN_ARG_INFO_EX(arginfo_git_indexer_new, 0, 0, 6)
	ZEND_ARG_INFO(0, out)
	ZEND_ARG_INFO(0, path)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, odb)
	ZEND_ARG_INFO(0, progress_cb)
	ZEND_ARG_INFO(0, progress_cb_payload)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_git_indexer_append, 0, 0, 4)
	ZEND_ARG_INFO(0, idx)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_INFO(0, size)
	ZEND_ARG_INFO(0, stats)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_git_indexer_commit, 0, 0, 2)
	ZEND_ARG_INFO(0, idx)
	ZEND_ARG_INFO(0, stats)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_git_indexer_hash, 0, 0, 1)
	ZEND_ARG_INFO(0, idx)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_git_indexer_free, 0, 0, 1)
	ZEND_ARG_INFO(0, idx)
ZEND_END_ARG_INFO()

/* {{{ proto resource git_indexer_new(string $path, long $mode, resource $odb,  $progress_cb,  $progress_cb_payload)
 */
PHP_FUNCTION(git_indexer_new);

/* {{{ proto long git_indexer_append(resource $idx,  $data, long $size,  $stats)
 */
PHP_FUNCTION(git_indexer_append);

/* {{{ proto long git_indexer_commit(resource $idx,  $stats)
 */
PHP_FUNCTION(git_indexer_commit);

/* {{{ proto resource git_indexer_hash(resource $idx)
 */
PHP_FUNCTION(git_indexer_hash);

/* {{{ proto void git_indexer_free(resource $idx)
 */
PHP_FUNCTION(git_indexer_free);

#endif
