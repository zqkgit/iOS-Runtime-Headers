/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMHandle, NSData, IMPair, NSError, IMAVChatParticipant, NSDate, NSDictionary, IMAVChatFeature, NSString, NSMutableDictionary, NSMutableArray, NSTimer;



@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSDictionary *_errorDict;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSString *_participantNames;
    NSData *_connectData;
    NSDictionary *_callerProperties;
    NSMutableDictionary *_unknownPartyStates;
    NSInteger _ardRole;
    IMAVChatFeature *_recorder;
    IMAVChatFeature *_auxVideo;
    IMAVChatFeature *_ard;
    NSTimer *_inviteTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_screenSaverBlockingTimer;
    id _conferenceController;
    id _delegate;
    NSInteger _callID;
    NSUInteger _sessionID;
    NSUInteger _addStatus;
    NSError *_error;
    NSInteger _addableParticipants;
    NSUInteger _localState;
    NSUInteger _lastPostedState;
    NSInteger _securityLevel;
    IMPair *_pendingPreemptiveRelayInitate;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _securityExpectedByInitiator;
    BOOL _hasGatheredInfo;
    BOOL _isListening;
    BOOL _isCounterProposalConnect;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isTerminating;
    BOOL _needToSendEndConferenceNotification;
    BOOL _Q8IrisOpen;
    BOOL _usingCoercedIDs;
    BOOL _silentConference;
    BOOL _suppressBeginChat;
    BOOL _isCaller;
    BOOL _isVideo;
    BOOL _dataOut;
    BOOL _dataIn;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _remoteNetworkStall;
    BOOL _participantOrderFinal;
    BOOL _usedRelay;
}

@property(readonly) NSUInteger sessionID;
@property(readonly) NSInteger callID;
@property(readonly) NSString *conferenceID;
@property <IMAVChatDelegate> *delegate;
@property(readonly) NSString *GUID;
@property(readonly) IMHandle *initiatorIMHandle;
@property(readonly) IMHandle *otherIMHandle;
@property(readonly) IMAccount *account;
@property(readonly) IMAVChatParticipant *initiatorParticipant;
@property(readonly) IMAVChatParticipant *localParticipant;
@property(readonly) NSArray *participants;
@property(readonly) NSArray *remoteParticipants;
@property(readonly) NSUInteger state;
@property(readonly) BOOL isActive;
@property(readonly) BOOL isStateFinal;
@property(readonly) NSInteger endedError;
@property(readonly) NSUInteger endedReason;
@property(readonly) NSDate *dateCreated;
@property(readonly) NSDate *dateConnected;
@property(readonly) NSDate *dateEnded;
@property(readonly) BOOL isConferenceSilent;
@property(readonly) BOOL isCaller;
@property(readonly) BOOL isVideo;
@property(readonly) BOOL isOneWay;
@property(readonly) NSInteger securityLevel;
@property(readonly) BOOL canUseRelay;
@property BOOL isMute; /* unknown property attribute: SsetMute: */
@property BOOL isPaused; /* unknown property attribute: SsetPaused: */
@property BOOL isRemoteMute; /* unknown property attribute: SsetRemoteMute: */
@property BOOL isRemotePaused; /* unknown property attribute: SsetRemotePaused: */
@property float audioVolume;
@property(readonly) BOOL isChatMute;
@property(readonly) BOOL isChatPaused;
@property BOOL isSendingAudio;
@property BOOL isSendingVideo;
@property(readonly) BOOL didRemoteMute;
@property(readonly) BOOL didRemotePause;
@property(readonly) BOOL isLocalNetworkStalled;
@property(readonly) BOOL isRemoteNetworkStalled;
@property NSUInteger cameraOrientation;
@property NSUInteger cameraType;
@property double invitationTimeoutTime;
@property double connectionTimeoutTime;
@property(readonly) NSInteger numActiveParticipants;
@property(readonly) NSString *participantNames;
@property(readonly) NSArray *orderedRemotePartyIDs;
@property(readonly) NSDictionary *errorDictionary;
@property(readonly) NSDictionary *vcErrorReport;
@property(readonly) NSInteger addableParticipants;
@property(readonly) NSUInteger addStatus;
@property(readonly) NSString *stringForAddStatus;
@property(readonly) BOOL dataOut;
@property(readonly) BOOL dataIn;
@property(readonly) BOOL isQ8IrisOpen;
@property(readonly) BOOL _allParticipantsUsingICE;
@property(readonly) NSDictionary *callerProperties;
@property(readonly) BOOL isAOLInterop;

+ (id)allowedClassesForArchives;
+ (NSInteger)maxRemoteParticipantsVideo:(BOOL)arg1;
+ (id)chatWithSessionID:(NSUInteger)arg1;
+ (id)incomingInvitations;
+ (id)outgoingInvitations;
+ (id)connectingChats;
+ (id)connectedChats;
+ (id)chatsWithIMAVChatState:(NSUInteger)arg1;
+ (BOOL)_anyOfTheseParticipants:(id)arg1 matchAnyOfTheseIMHandles:(id)arg2;
+ (BOOL)isIMHandleInActiveConference:(id)arg1;
+ (id)avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2 ARDRole:(NSInteger)arg3;
+ (NSInteger)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (void)_doSendUpdate;
+ (void)_sendUpdate;
+ (BOOL)isStateFinal:(NSUInteger)arg1;
+ (BOOL)isStateActive:(NSUInteger)arg1;
+ (double)defaultInvitationTimeoutTime;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (double)defaultConnectionTimeoutTime;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (id)avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)activeChat;
+ (id)nonFinalChat;
+ (id)connectedChat;
+ (id)_avChatArray;
+ (id)bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(NSUInteger)arg3 properties:(id)arg4;
+ (id)avChatWithConferenceID:(id)arg1;
+ (id)chatList;
+ (id)currentAVChatInfo;
+ (void)getVideoStillForIMHandle:(id)arg1 data:(id*)arg2 result:(NSUInteger*)arg3;

- (BOOL)isPaused;
- (id)account;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_noteStatusChangesForParticipant:(id)arg1;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)_removeRemoteParticipant:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(NSUInteger)arg2 inCount:(NSUInteger)arg3;
- (void)_finalizeParticipantOrder:(id)arg1 andNotify:(BOOL)arg2;
- (id)participantsNotInNuggets:(id)arg1;
- (void)_updateParticipantsWithData:(id)arg1;
- (BOOL)_imHandlesRequireCoercedIDs:(id)arg1;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (void)_initParticipantsWithNuggets:(id)arg1;
- (void)_noteInviteDeliveredForParticipant:(id)arg1;
- (BOOL)_participantsCheckOut;
- (id)initPersistentAVChatWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(NSInteger)arg3 sessionID:(NSUInteger)arg4 video:(BOOL)arg5;
- (BOOL)canUseRelay;
- (NSInteger)_initialRelayStatus;
- (void)_determineDataIn;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 ARDRole:(NSInteger)arg3 sessionID:(NSUInteger)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 ARDRole:(NSInteger)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (void)_vccInitDidFinish;
- (void)_setCallerProperties:(id)arg1;
- (id)initiatorParticipant;
- (id)participants;
- (NSInteger)numActiveParticipants;
- (BOOL)_allParticipantsUsingICE;
- (void)_refreshAddableParticipants;
- (NSInteger)addableParticipants;
- (NSUInteger)addStatus;
- (id)stringForAddStatus:(NSUInteger)arg1;
- (id)stringForAddStatus;
- (NSUInteger)addStatusForIMHandle:(id)arg1 asVideo:(BOOL)arg2 ardRole:(NSInteger)arg3;
- (BOOL)canAddIMHandle:(id)arg1;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
- (void)removeParticipantWithID:(id)arg1;
- (id)orderedRemotePartyIDs;
- (void)finalizeOrderWithVideoFrom:(id)arg1;
- (void)setConferenceSilent:(BOOL)arg1;
- (BOOL)isConferenceSilent;
- (BOOL)isCaller;
- (BOOL)isOneWay;
- (BOOL)isAOLInterop;
- (void)setGUID:(id)arg1;
- (id)vcErrorReport;
- (id)GUID;
- (void)sendARDFileTransferAuthorization:(id)arg1 to:(id)arg2;
- (void)_setConferenceController:(id)arg1;
- (NSInteger)_theoreticalSecurityLevel;
- (NSInteger)_currentSecurityLevel;
- (void)_updateSecurity;
- (BOOL)_allParticipantsCanBeSecure;
- (void)_setupIdentity;
- (void)_serviceCapsChanged:(id)arg1;
- (id)_currentAVChatInfo;
- (void)_postStateToDelegateIfNecessary;
- (void)_setCreationDate;
- (id)dateConnected;
- (id)dateCreated;
- (id)dateEnded;
- (void)endChat;
- (void)endChatWithReason:(NSUInteger)arg1;
- (void)endChatWithError:(NSInteger)arg1;
- (void)endChatWithReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)_setStateDisconnected;
- (BOOL)dataOut;
- (BOOL)dataIn;
- (void)_setActiveConference;
- (void)inviteAll;
- (void)_sendVCUpdateTo:(id)arg1 skipConnected:(BOOL)arg2;
- (void)invite:(id)arg1;
- (void)declineInvitation;
- (void)notifySystemVC:(BOOL)arg1;
- (void)_connectTo:(id)arg1 withData:(id)arg2;
- (void)_noteConferenceConnected:(id)arg1;
- (void)startVCOnMainThread:(id)arg1;
- (void)_counterPropose:(id)arg1;
- (void)_relayPropose:(id)arg1;
- (void)_configureVCC;
- (void)_configureVCCRecv;
- (void)connectProc:(id)arg1;
- (NSInteger)endedError;
- (id)errorDictionary;
- (void)_setErrorDictionary:(id)arg1;
- (void)setMute:(BOOL)arg1;
- (BOOL)isMute;
- (void)toggleMute;
- (void)togglePaused;
- (BOOL)isQ8IrisOpen;
- (void)setRemoteMute:(BOOL)arg1;
- (BOOL)isRemoteMute;
- (void)toggleRemoteMute;
- (void)setRemotePaused:(BOOL)arg1;
- (BOOL)isRemotePaused;
- (void)toggleRemotePaused;
- (BOOL)isChatMute;
- (void)toggleChatMute;
- (BOOL)isChatPaused;
- (void)toggleChatPaused;
- (BOOL)didRemoteMute;
- (BOOL)didRemotePause;
- (void)setIsSendingAudio:(BOOL)arg1;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)toggleSendingAudio;
- (void)toggleSendingVideo;
- (BOOL)isLocalNetworkStalled;
- (BOOL)isRemoteNetworkStalled;
- (float)audioVolume;
- (void)setAudioVolume:(float)arg1;
- (void)setCameraOrientation:(NSUInteger)arg1;
- (void)_subscribeToVCNotifications;
- (void)_imHandleStatusChanged:(id)arg1;
- (void)_initiatorInfoChanged:(id)arg1;
- (void)_inviteeInfoChanged:(id)arg1;
- (BOOL)_checkVCResponseDict:(id)arg1;
- (void)_prepareConnectionForParticipant:(id)arg1;
- (void)_mainThreadFinishPrepareConnectionForInvitedParty:(id)arg1;
- (void)_threadedPrepareConnectionForInvitedParty:(id)arg1;
- (void)handleVideoConferenceNotification:(id)arg1;
- (void)invalidateParticipantNames;
- (id)participantNames;
- (void)participant:(id)arg1 changedFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)_unknownParty:(id)arg1 didConnect:(BOOL)arg2;
- (void)_unknownParty:(id)arg1 muteOrPause:(NSUInteger)arg2 didChange:(BOOL)arg3;
- (void)conferencePersonWithIDChangedSendingAudio:(id)arg1;
- (void)conferencePersonWithIDChangedSendingVideo:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 completedWithInfo:(id)arg2;
- (void)conferenceHungUpByPersonWithID:(id)arg1;
- (void)conferencePersonWithID:(id)arg1 didConnect:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didCancel:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForInsufficientBandwidth:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 hasInfoForNoPackets:(id)arg2;
- (void)conferenceHasVideoError;
- (void)conferenceHasTimedOut;
- (BOOL)shouldConferenceAcceptIncomingRequestFromUser:(id)arg1 onLocalSubnetOnly:(BOOL*)arg2;
- (BOOL)conferencePersonWithID:(id)arg1 hasValidRemoteCertificate:(struct __SecCertificate { }*)arg2;
- (void)conferencePersonWithID:(id)arg1 securityDidChange:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 certificateRejected:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)_clearConnectionTimeoutTimer;
- (void)_setConnectionTimeoutTimer;
- (void)_connectionTimeout:(id)arg1;
- (void)_clearInvitationTimeoutTimer;
- (void)_invitationTimeout:(id)arg1;
- (double)invitationTimeoutTime;
- (void)setInvitationTimeoutTime:(double)arg1;
- (double)connectionTimeoutTime;
- (void)setConnectionTimeoutTime:(double)arg1;
- (void)_clearScreenSaverBlockingTimer;
- (void)_setScreenSaverBlockingTimer;
- (void)_blockScreenSaver:(id)arg1;
- (id)_callLoggingOutput;
- (void)_submitCrashTracerLogs;
- (BOOL)closeCamera;
- (void)systemDidFastUserSwitchOut;
- (id)_conferenceController;
- (id)otherIMHandle;
- (id)remoteParticipants;
- (id)participantMatchingIMHandle:(id)arg1;
- (BOOL)openCamera;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (void)_setConferenceID:(id)arg1;
- (void)beginChat;
- (void)acceptInvitation;
- (void)cancelInvitation;
- (void)_VCCounterProposal:(id)arg1;
- (void)_responseToVCInvite:(id)arg1;
- (BOOL)isStateFinal;
- (void)_cancelInvitationWithReason:(NSUInteger)arg1 error:(NSInteger)arg2;
- (void)_participantsChanged:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(NSUInteger)arg2 userInfo:(id)arg3;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)declineInvitationWithResponse:(NSUInteger)arg1;
- (void)_setInvitationTimeoutTimer;
- (id)initiatorIMHandle;
- (void)_handleAVError:(id)arg1;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (BOOL)isSendingAudio;
- (BOOL)isSendingVideo;
- (NSUInteger)endedReason;
- (id)inviteesInfoAsPlist:(BOOL)arg1 account:(id)arg2;
- (void)_endChatWithReason:(NSUInteger)arg1 andError:(NSInteger)arg2;
- (id)callerProperties;
- (id)localParticipant;
- (NSInteger)securityLevel;
- (void)_reportError:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isActive;
- (id)description;
- (NSUInteger)state;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)conferenceID;
- (void)setLocalVideoLayer:(void*)arg1;
- (NSUInteger)cameraType;
- (void)setCameraType:(NSUInteger)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (BOOL)startPreviewWithError:(id*)arg1;
- (BOOL)stopPreview;
- (void)setCallID:(NSInteger)arg1;
- (NSInteger)callID;
- (NSUInteger)sessionID;
- (BOOL)isVideo;
- (id)error;
- (NSUInteger)cameraOrientation;

@end