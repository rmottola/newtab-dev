/* -*- Mode: IDL; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 * 
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 * 
 * The Original Code is the Mozilla browser.
 * 
 * The Initial Developer of the Original Code is Netscape
 * Communications, Inc.  Portions created by Netscape are
 * Copyright (C) 1999, Mozilla.  All Rights Reserved.
 * 
 * Contributor(s):
 *   Travis Bogard <travis@netscape.com>
 */

#ifndef nsCThreadLoop_h__
#define nsCThreadLoop_h__

#include "windows.h"

#include "nsCBaseThreadLoop.h"

class nsCThreadLoop : public nsCBaseThreadLoop 
{
public:
	static NS_METHOD Create(nsISupports* aOuter, const nsIID& aIID, void** ppv);

protected:
	nsCThreadLoop();
	virtual ~nsCThreadLoop();

	// Internal Platform Implementations of nsIEventLoop 
	// (Error checking is ensured above)
	nsresult PlatformExit(PRInt32 exitCode);

protected:
};

#endif /* nsCThreadLoop_h__ */
