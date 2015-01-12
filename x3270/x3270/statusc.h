/*
 * Copyright (c) 1995-2009, 2015 Paul Mattes.
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Paul Mattes nor his contributors may be used
 *       to endorse or promote products derived from this software without
 *       specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY PAUL MATTES "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL PAUL MATTES BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *	statusc.h
 *		Global declarations for status.c.
 */

void status_compose(Boolean on, unsigned char c, enum keytype keytype);
void status_ctlr_done(void);
void status_cursor_pos(int ca);
void status_disp(void);
void status_init(void);
void status_insert_mode(Boolean on);
void status_kmap(Boolean on);
void status_kybdlock(void);
void status_lu(const char *);
void status_minus(void);
void status_oerr(int error_type);
void status_register(void);
void status_reinit(unsigned cmask);
void status_reset(void);
void status_reverse_mode(Boolean on);
void status_screentrace(int n);
void status_script(Boolean on);
void status_scrolled(int n);
void status_shift_mode(int state);
void status_syswait(void);
void status_timing(struct timeval *t0, struct timeval *t1);
void status_touch(void);
void status_twait(void);
void status_typeahead(Boolean on);
void status_uncursor_pos(void);
void status_untiming(void);
