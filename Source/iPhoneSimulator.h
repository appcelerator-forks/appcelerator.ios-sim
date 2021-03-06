/**
 * A simple DVTiPhoneSimulatorRemoteClient framework for launching app on iOS Simulator
 *
 * Copyright (c) 2009-2015 by Appcelerator, Inc. All Rights Reserved.
 *
 * Copyright (c) 2012 The Chromium Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 * (link : http://src.chromium.org/chrome/trunk/src/testing/iossim/)
 *
 * Original Author: Landon Fuller <landonf@plausiblelabs.com>
 * Copyright (c) 2008-2011 Plausible Labs Cooperative, Inc.
 * All rights reserved.
 *
 *
 * Headers for the DVTiPhoneSimulatorRemoteClient framework used in this tool are
 * generated by class-dump, via GYP.
 * (class-dump is available at http://www.codethecode.com/projects/class-dump/)
 *
 * See the LICENSE file for the license on the source code in this file.
 */

#import <Foundation/Foundation.h>
#import <DVTiPhoneSimulatorRemoteClient/DVTiPhoneSimulatorRemoteClient.h>
#import "DVTFoundation.h"
#import "IDEiOSSupportCore.h"
#import "CoreSimulator.h"
#import "version.h"

@interface iPhoneSimulator : NSObject<DTiPhoneSimulatorSessionDelegate> {
@private
	DTiPhoneSimulatorSystemRoot *_sdkRoot;
	NSFileHandle *_stdoutFileHandle;
	NSFileHandle *_stderrFileHandle;
	BOOL _exitOnStartup;
	BOOL _retinaDevice;
	BOOL _tallDevice;
	BOOL _sim_64bit;
	BOOL _startOnly;
	BOOL _verbose;
	BOOL _alreadyPrintedData;
	BOOL _launchFlag;
	BOOL _isXcode6;
	BOOL _showInstalledApps;
	BOOL _launchWatchApp;

	NSString *_externalDisplayType;
	NSString *_watchLaunchMode;
	NSString *_bundleID;
	NSString *_appPath;
	NSString *_appBundleID;
	SimDevice *_device;
	NSDictionary *_watchNotificationPayload;
	NSMutableArray *_launchArgs;
	NSMutableDictionary *_environment;
	NSMutableDictionary *_launchOptions;

	BOOL _appInstalled;
}

- (void)runWithArgc:(int)argc argv:(char **)argv;

- (void)createStdioFIFO:(NSFileHandle **)fileHandle ofType:(NSString *)type atPath:(NSString **)path;
- (void)removeStdioFIFO:(NSFileHandle *)fileHandle atPath:(NSString *)path;

@end
