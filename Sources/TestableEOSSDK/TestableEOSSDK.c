
#include "include/TestableEOSSDK.h"

EOS_NotificationId (*__on_EOS_Achievements_AddNotifyAchievementsUnlocked)(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedOptions *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Achievements_AddNotifyAchievementsUnlocked(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedOptions *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallback NotificationFn) {
    return __on_EOS_Achievements_AddNotifyAchievementsUnlocked(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Achievements_AddNotifyAchievementsUnlockedV2)(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedV2Options *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallbackV2 NotificationFn) = NULL;
EOS_NotificationId EOS_Achievements_AddNotifyAchievementsUnlockedV2(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedV2Options *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallbackV2 NotificationFn) {
    return __on_EOS_Achievements_AddNotifyAchievementsUnlockedV2(Handle, Options, ClientData, NotificationFn);
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByAchievementIdOptions *Options, EOS_Achievements_Definition **OutDefinition) = NULL;
EOS_EResult EOS_Achievements_CopyAchievementDefinitionByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByAchievementIdOptions *Options, EOS_Achievements_Definition **OutDefinition) {
    return __on_EOS_Achievements_CopyAchievementDefinitionByAchievementId(Handle, Options, OutDefinition);
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByIndexOptions *Options, EOS_Achievements_Definition **OutDefinition) = NULL;
EOS_EResult EOS_Achievements_CopyAchievementDefinitionByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByIndexOptions *Options, EOS_Achievements_Definition **OutDefinition) {
    return __on_EOS_Achievements_CopyAchievementDefinitionByIndex(Handle, Options, OutDefinition);
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) = NULL;
EOS_EResult EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) {
    return __on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(Handle, Options, OutDefinition);
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByIndexOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) = NULL;
EOS_EResult EOS_Achievements_CopyAchievementDefinitionV2ByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByIndexOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) {
    return __on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex(Handle, Options, OutDefinition);
}

EOS_EResult (*__on_EOS_Achievements_CopyPlayerAchievementByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByAchievementIdOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) = NULL;
EOS_EResult EOS_Achievements_CopyPlayerAchievementByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByAchievementIdOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) {
    return __on_EOS_Achievements_CopyPlayerAchievementByAchievementId(Handle, Options, OutAchievement);
}

EOS_EResult (*__on_EOS_Achievements_CopyPlayerAchievementByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByIndexOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) = NULL;
EOS_EResult EOS_Achievements_CopyPlayerAchievementByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByIndexOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) {
    return __on_EOS_Achievements_CopyPlayerAchievementByIndex(Handle, Options, OutAchievement);
}

EOS_EResult (*__on_EOS_Achievements_CopyUnlockedAchievementByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByAchievementIdOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) = NULL;
EOS_EResult EOS_Achievements_CopyUnlockedAchievementByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByAchievementIdOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) {
    return __on_EOS_Achievements_CopyUnlockedAchievementByAchievementId(Handle, Options, OutAchievement);
}

EOS_EResult (*__on_EOS_Achievements_CopyUnlockedAchievementByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByIndexOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) = NULL;
EOS_EResult EOS_Achievements_CopyUnlockedAchievementByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByIndexOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) {
    return __on_EOS_Achievements_CopyUnlockedAchievementByIndex(Handle, Options, OutAchievement);
}

void (*__on_EOS_Achievements_DefinitionV2_Release)(EOS_Achievements_DefinitionV2 *AchievementDefinition) = NULL;
void EOS_Achievements_DefinitionV2_Release(EOS_Achievements_DefinitionV2 *AchievementDefinition) {
    __on_EOS_Achievements_DefinitionV2_Release(AchievementDefinition);
}

void (*__on_EOS_Achievements_Definition_Release)(EOS_Achievements_Definition *AchievementDefinition) = NULL;
void EOS_Achievements_Definition_Release(EOS_Achievements_Definition *AchievementDefinition) {
    __on_EOS_Achievements_Definition_Release(AchievementDefinition);
}

uint32_t (*__on_EOS_Achievements_GetAchievementDefinitionCount)(EOS_HAchievements Handle, const EOS_Achievements_GetAchievementDefinitionCountOptions *Options) = NULL;
uint32_t EOS_Achievements_GetAchievementDefinitionCount(EOS_HAchievements Handle, const EOS_Achievements_GetAchievementDefinitionCountOptions *Options) {
    return __on_EOS_Achievements_GetAchievementDefinitionCount(Handle, Options);
}

uint32_t (*__on_EOS_Achievements_GetPlayerAchievementCount)(EOS_HAchievements Handle, const EOS_Achievements_GetPlayerAchievementCountOptions *Options) = NULL;
uint32_t EOS_Achievements_GetPlayerAchievementCount(EOS_HAchievements Handle, const EOS_Achievements_GetPlayerAchievementCountOptions *Options) {
    return __on_EOS_Achievements_GetPlayerAchievementCount(Handle, Options);
}

uint32_t (*__on_EOS_Achievements_GetUnlockedAchievementCount)(EOS_HAchievements Handle, const EOS_Achievements_GetUnlockedAchievementCountOptions *Options) = NULL;
uint32_t EOS_Achievements_GetUnlockedAchievementCount(EOS_HAchievements Handle, const EOS_Achievements_GetUnlockedAchievementCountOptions *Options) {
    return __on_EOS_Achievements_GetUnlockedAchievementCount(Handle, Options);
}

void (*__on_EOS_Achievements_PlayerAchievement_Release)(EOS_Achievements_PlayerAchievement *Achievement) = NULL;
void EOS_Achievements_PlayerAchievement_Release(EOS_Achievements_PlayerAchievement *Achievement) {
    __on_EOS_Achievements_PlayerAchievement_Release(Achievement);
}

void (*__on_EOS_Achievements_QueryDefinitions)(EOS_HAchievements Handle, const EOS_Achievements_QueryDefinitionsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryDefinitionsCompleteCallback CompletionDelegate) = NULL;
void EOS_Achievements_QueryDefinitions(EOS_HAchievements Handle, const EOS_Achievements_QueryDefinitionsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryDefinitionsCompleteCallback CompletionDelegate) {
    __on_EOS_Achievements_QueryDefinitions(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Achievements_QueryPlayerAchievements)(EOS_HAchievements Handle, const EOS_Achievements_QueryPlayerAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallback CompletionDelegate) = NULL;
void EOS_Achievements_QueryPlayerAchievements(EOS_HAchievements Handle, const EOS_Achievements_QueryPlayerAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallback CompletionDelegate) {
    __on_EOS_Achievements_QueryPlayerAchievements(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Achievements_RemoveNotifyAchievementsUnlocked)(EOS_HAchievements Handle, EOS_NotificationId InId) = NULL;
void EOS_Achievements_RemoveNotifyAchievementsUnlocked(EOS_HAchievements Handle, EOS_NotificationId InId) {
    __on_EOS_Achievements_RemoveNotifyAchievementsUnlocked(Handle, InId);
}

void (*__on_EOS_Achievements_UnlockAchievements)(EOS_HAchievements Handle, const EOS_Achievements_UnlockAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnUnlockAchievementsCompleteCallback CompletionDelegate) = NULL;
void EOS_Achievements_UnlockAchievements(EOS_HAchievements Handle, const EOS_Achievements_UnlockAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnUnlockAchievementsCompleteCallback CompletionDelegate) {
    __on_EOS_Achievements_UnlockAchievements(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Achievements_UnlockedAchievement_Release)(EOS_Achievements_UnlockedAchievement *Achievement) = NULL;
void EOS_Achievements_UnlockedAchievement_Release(EOS_Achievements_UnlockedAchievement *Achievement) {
    __on_EOS_Achievements_UnlockedAchievement_Release(Achievement);
}

EOS_EResult (*__on_EOS_ActiveSession_CopyInfo)(EOS_HActiveSession Handle, const EOS_ActiveSession_CopyInfoOptions *Options, EOS_ActiveSession_Info **OutActiveSessionInfo) = NULL;
EOS_EResult EOS_ActiveSession_CopyInfo(EOS_HActiveSession Handle, const EOS_ActiveSession_CopyInfoOptions *Options, EOS_ActiveSession_Info **OutActiveSessionInfo) {
    return __on_EOS_ActiveSession_CopyInfo(Handle, Options, OutActiveSessionInfo);
}

EOS_ProductUserId (*__on_EOS_ActiveSession_GetRegisteredPlayerByIndex)(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerByIndexOptions *Options) = NULL;
EOS_ProductUserId EOS_ActiveSession_GetRegisteredPlayerByIndex(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerByIndexOptions *Options) {
    return __on_EOS_ActiveSession_GetRegisteredPlayerByIndex(Handle, Options);
}

uint32_t (*__on_EOS_ActiveSession_GetRegisteredPlayerCount)(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerCountOptions *Options) = NULL;
uint32_t EOS_ActiveSession_GetRegisteredPlayerCount(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerCountOptions *Options) {
    return __on_EOS_ActiveSession_GetRegisteredPlayerCount(Handle, Options);
}

void (*__on_EOS_ActiveSession_Info_Release)(EOS_ActiveSession_Info *ActiveSessionInfo) = NULL;
void EOS_ActiveSession_Info_Release(EOS_ActiveSession_Info *ActiveSessionInfo) {
    __on_EOS_ActiveSession_Info_Release(ActiveSessionInfo);
}

void (*__on_EOS_ActiveSession_Release)(EOS_HActiveSession ActiveSessionHandle) = NULL;
void EOS_ActiveSession_Release(EOS_HActiveSession ActiveSessionHandle) {
    __on_EOS_ActiveSession_Release(ActiveSessionHandle);
}

EOS_EResult (*__on_EOS_AntiCheatClient_AddExternalIntegrityCatalog)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddExternalIntegrityCatalogOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_AddExternalIntegrityCatalog(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddExternalIntegrityCatalogOptions *Options) {
    return __on_EOS_AntiCheatClient_AddExternalIntegrityCatalog(Handle, Options);
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyMessageToPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToPeerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToPeerCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatClient_AddNotifyMessageToPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToPeerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToPeerCallback NotificationFn) {
    return __on_EOS_AntiCheatClient_AddNotifyMessageToPeer(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyMessageToServer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToServerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToServerCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatClient_AddNotifyMessageToServer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToServerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToServerCallback NotificationFn) {
    return __on_EOS_AntiCheatClient_AddNotifyMessageToServer(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyPeerActionRequired)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerActionRequiredCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatClient_AddNotifyPeerActionRequired(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerActionRequiredCallback NotificationFn) {
    return __on_EOS_AntiCheatClient_AddNotifyPeerActionRequired(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerAuthStatusChangedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerAuthStatusChangedCallback NotificationFn) {
    return __on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged(Handle, Options, ClientData, NotificationFn);
}

EOS_EResult (*__on_EOS_AntiCheatClient_BeginSession)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_BeginSessionOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_BeginSession(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_BeginSessionOptions *Options) {
    return __on_EOS_AntiCheatClient_BeginSession(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatClient_EndSession)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_EndSessionOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_EndSession(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_EndSessionOptions *Options) {
    return __on_EOS_AntiCheatClient_EndSession(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatClient_GetProtectMessageOutputLength)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) = NULL;
EOS_EResult EOS_AntiCheatClient_GetProtectMessageOutputLength(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) {
    return __on_EOS_AntiCheatClient_GetProtectMessageOutputLength(Handle, Options, OutBufferLengthBytes);
}

EOS_EResult (*__on_EOS_AntiCheatClient_PollStatus)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_PollStatusOptions *Options, EOS_EAntiCheatClientViolationType *ViolationType, char *OutMessage) = NULL;
EOS_EResult EOS_AntiCheatClient_PollStatus(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_PollStatusOptions *Options, EOS_EAntiCheatClientViolationType *ViolationType, char *OutMessage) {
    return __on_EOS_AntiCheatClient_PollStatus(Handle, Options, ViolationType, OutMessage);
}

EOS_EResult (*__on_EOS_AntiCheatClient_ProtectMessage)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;
EOS_EResult EOS_AntiCheatClient_ProtectMessage(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    return __on_EOS_AntiCheatClient_ProtectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
}

EOS_EResult (*__on_EOS_AntiCheatClient_ReceiveMessageFromPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromPeerOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_ReceiveMessageFromPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromPeerOptions *Options) {
    return __on_EOS_AntiCheatClient_ReceiveMessageFromPeer(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatClient_ReceiveMessageFromServer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromServerOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_ReceiveMessageFromServer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromServerOptions *Options) {
    return __on_EOS_AntiCheatClient_ReceiveMessageFromServer(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatClient_RegisterPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_RegisterPeerOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_RegisterPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_RegisterPeerOptions *Options) {
    return __on_EOS_AntiCheatClient_RegisterPeer(Handle, Options);
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatClient_RemoveNotifyMessageToPeer(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer(Handle, NotificationId);
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyMessageToServer)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatClient_RemoveNotifyMessageToServer(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatClient_RemoveNotifyMessageToServer(Handle, NotificationId);
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatClient_RemoveNotifyPeerActionRequired(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired(Handle, NotificationId);
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged(Handle, NotificationId);
}

EOS_EResult (*__on_EOS_AntiCheatClient_UnprotectMessage)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;
EOS_EResult EOS_AntiCheatClient_UnprotectMessage(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    return __on_EOS_AntiCheatClient_UnprotectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
}

EOS_EResult (*__on_EOS_AntiCheatClient_UnregisterPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnregisterPeerOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatClient_UnregisterPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnregisterPeerOptions *Options) {
    return __on_EOS_AntiCheatClient_UnregisterPeer(Handle, Options);
}

EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyClientActionRequired)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientActionRequiredCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatServer_AddNotifyClientActionRequired(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientActionRequiredCallback NotificationFn) {
    return __on_EOS_AntiCheatServer_AddNotifyClientActionRequired(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientAuthStatusChangedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientAuthStatusChangedCallback NotificationFn) {
    return __on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyMessageToClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyMessageToClientOptions *Options, void *ClientData, EOS_AntiCheatServer_OnMessageToClientCallback NotificationFn) = NULL;
EOS_NotificationId EOS_AntiCheatServer_AddNotifyMessageToClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyMessageToClientOptions *Options, void *ClientData, EOS_AntiCheatServer_OnMessageToClientCallback NotificationFn) {
    return __on_EOS_AntiCheatServer_AddNotifyMessageToClient(Handle, Options, ClientData, NotificationFn);
}

EOS_EResult (*__on_EOS_AntiCheatServer_BeginSession)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_BeginSessionOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_BeginSession(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_BeginSessionOptions *Options) {
    return __on_EOS_AntiCheatServer_BeginSession(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_EndSession)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_EndSessionOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_EndSession(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_EndSessionOptions *Options) {
    return __on_EOS_AntiCheatServer_EndSession(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_GetProtectMessageOutputLength)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) = NULL;
EOS_EResult EOS_AntiCheatServer_GetProtectMessageOutputLength(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) {
    return __on_EOS_AntiCheatServer_GetProtectMessageOutputLength(Handle, Options, OutBufferLengthBytes);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogEvent)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogEventOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogEvent(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogEventOptions *Options) {
    return __on_EOS_AntiCheatServer_LogEvent(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogGameRoundEnd)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundEndOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogGameRoundEnd(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundEndOptions *Options) {
    return __on_EOS_AntiCheatServer_LogGameRoundEnd(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogGameRoundStart)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundStartOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogGameRoundStart(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundStartOptions *Options) {
    return __on_EOS_AntiCheatServer_LogGameRoundStart(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerDespawn)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerDespawnOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerDespawn(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerDespawnOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerDespawn(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerRevive)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerReviveOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerRevive(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerReviveOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerRevive(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerSpawn)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerSpawnOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerSpawn(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerSpawnOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerSpawn(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerTakeDamage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTakeDamageOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerTakeDamage(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTakeDamageOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerTakeDamage(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerTick)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTickOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerTick(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTickOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerTick(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerUseAbility)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseAbilityOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerUseAbility(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseAbilityOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerUseAbility(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerUseWeapon)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseWeaponOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_LogPlayerUseWeapon(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseWeaponOptions *Options) {
    return __on_EOS_AntiCheatServer_LogPlayerUseWeapon(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_ProtectMessage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;
EOS_EResult EOS_AntiCheatServer_ProtectMessage(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    return __on_EOS_AntiCheatServer_ProtectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
}

EOS_EResult (*__on_EOS_AntiCheatServer_ReceiveMessageFromClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ReceiveMessageFromClientOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_ReceiveMessageFromClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ReceiveMessageFromClientOptions *Options) {
    return __on_EOS_AntiCheatServer_ReceiveMessageFromClient(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_RegisterClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_RegisterClientOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_RegisterClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_RegisterClientOptions *Options) {
    return __on_EOS_AntiCheatServer_RegisterClient(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_RegisterEvent)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_RegisterEventOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_RegisterEvent(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_RegisterEventOptions *Options) {
    return __on_EOS_AntiCheatServer_RegisterEvent(Handle, Options);
}

void (*__on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatServer_RemoveNotifyClientActionRequired(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired(Handle, NotificationId);
}

void (*__on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged(Handle, NotificationId);
}

void (*__on_EOS_AntiCheatServer_RemoveNotifyMessageToClient)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_AntiCheatServer_RemoveNotifyMessageToClient(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) {
    __on_EOS_AntiCheatServer_RemoveNotifyMessageToClient(Handle, NotificationId);
}

EOS_EResult (*__on_EOS_AntiCheatServer_SetClientDetails)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetClientDetailsOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_SetClientDetails(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetClientDetailsOptions *Options) {
    return __on_EOS_AntiCheatServer_SetClientDetails(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_SetClientNetworkState)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_SetClientNetworkStateOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_SetClientNetworkState(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_SetClientNetworkStateOptions *Options) {
    return __on_EOS_AntiCheatServer_SetClientNetworkState(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_SetGameSessionId)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetGameSessionIdOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_SetGameSessionId(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetGameSessionIdOptions *Options) {
    return __on_EOS_AntiCheatServer_SetGameSessionId(Handle, Options);
}

EOS_EResult (*__on_EOS_AntiCheatServer_UnprotectMessage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;
EOS_EResult EOS_AntiCheatServer_UnprotectMessage(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    return __on_EOS_AntiCheatServer_UnprotectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
}

EOS_EResult (*__on_EOS_AntiCheatServer_UnregisterClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnregisterClientOptions *Options) = NULL;
EOS_EResult EOS_AntiCheatServer_UnregisterClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnregisterClientOptions *Options) {
    return __on_EOS_AntiCheatServer_UnregisterClient(Handle, Options);
}

EOS_NotificationId (*__on_EOS_Auth_AddNotifyLoginStatusChanged)(EOS_HAuth Handle, const EOS_Auth_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Auth_OnLoginStatusChangedCallback Notification) = NULL;
EOS_NotificationId EOS_Auth_AddNotifyLoginStatusChanged(EOS_HAuth Handle, const EOS_Auth_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Auth_OnLoginStatusChangedCallback Notification) {
    return __on_EOS_Auth_AddNotifyLoginStatusChanged(Handle, Options, ClientData, Notification);
}

EOS_EResult (*__on_EOS_Auth_CopyUserAuthToken)(EOS_HAuth Handle, const EOS_Auth_CopyUserAuthTokenOptions *Options, EOS_EpicAccountId LocalUserId, EOS_Auth_Token **OutUserAuthToken) = NULL;
EOS_EResult EOS_Auth_CopyUserAuthToken(EOS_HAuth Handle, const EOS_Auth_CopyUserAuthTokenOptions *Options, EOS_EpicAccountId LocalUserId, EOS_Auth_Token **OutUserAuthToken) {
    return __on_EOS_Auth_CopyUserAuthToken(Handle, Options, LocalUserId, OutUserAuthToken);
}

void (*__on_EOS_Auth_DeletePersistentAuth)(EOS_HAuth Handle, const EOS_Auth_DeletePersistentAuthOptions *Options, void *ClientData, const EOS_Auth_OnDeletePersistentAuthCallback CompletionDelegate) = NULL;
void EOS_Auth_DeletePersistentAuth(EOS_HAuth Handle, const EOS_Auth_DeletePersistentAuthOptions *Options, void *ClientData, const EOS_Auth_OnDeletePersistentAuthCallback CompletionDelegate) {
    __on_EOS_Auth_DeletePersistentAuth(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EpicAccountId (*__on_EOS_Auth_GetLoggedInAccountByIndex)(EOS_HAuth Handle, int32_t Index) = NULL;
EOS_EpicAccountId EOS_Auth_GetLoggedInAccountByIndex(EOS_HAuth Handle, int32_t Index) {
    return __on_EOS_Auth_GetLoggedInAccountByIndex(Handle, Index);
}

int32_t (*__on_EOS_Auth_GetLoggedInAccountsCount)(EOS_HAuth Handle) = NULL;
int32_t EOS_Auth_GetLoggedInAccountsCount(EOS_HAuth Handle) {
    return __on_EOS_Auth_GetLoggedInAccountsCount(Handle);
}

EOS_ELoginStatus (*__on_EOS_Auth_GetLoginStatus)(EOS_HAuth Handle, EOS_EpicAccountId LocalUserId) = NULL;
EOS_ELoginStatus EOS_Auth_GetLoginStatus(EOS_HAuth Handle, EOS_EpicAccountId LocalUserId) {
    return __on_EOS_Auth_GetLoginStatus(Handle, LocalUserId);
}

void (*__on_EOS_Auth_LinkAccount)(EOS_HAuth Handle, const EOS_Auth_LinkAccountOptions *Options, void *ClientData, const EOS_Auth_OnLinkAccountCallback CompletionDelegate) = NULL;
void EOS_Auth_LinkAccount(EOS_HAuth Handle, const EOS_Auth_LinkAccountOptions *Options, void *ClientData, const EOS_Auth_OnLinkAccountCallback CompletionDelegate) {
    __on_EOS_Auth_LinkAccount(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Auth_Login)(EOS_HAuth Handle, const EOS_Auth_LoginOptions *Options, void *ClientData, const EOS_Auth_OnLoginCallback CompletionDelegate) = NULL;
void EOS_Auth_Login(EOS_HAuth Handle, const EOS_Auth_LoginOptions *Options, void *ClientData, const EOS_Auth_OnLoginCallback CompletionDelegate) {
    __on_EOS_Auth_Login(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Auth_Logout)(EOS_HAuth Handle, const EOS_Auth_LogoutOptions *Options, void *ClientData, const EOS_Auth_OnLogoutCallback CompletionDelegate) = NULL;
void EOS_Auth_Logout(EOS_HAuth Handle, const EOS_Auth_LogoutOptions *Options, void *ClientData, const EOS_Auth_OnLogoutCallback CompletionDelegate) {
    __on_EOS_Auth_Logout(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Auth_RemoveNotifyLoginStatusChanged)(EOS_HAuth Handle, EOS_NotificationId InId) = NULL;
void EOS_Auth_RemoveNotifyLoginStatusChanged(EOS_HAuth Handle, EOS_NotificationId InId) {
    __on_EOS_Auth_RemoveNotifyLoginStatusChanged(Handle, InId);
}

void (*__on_EOS_Auth_Token_Release)(EOS_Auth_Token *AuthToken) = NULL;
void EOS_Auth_Token_Release(EOS_Auth_Token *AuthToken) {
    __on_EOS_Auth_Token_Release(AuthToken);
}

void (*__on_EOS_Auth_VerifyUserAuth)(EOS_HAuth Handle, const EOS_Auth_VerifyUserAuthOptions *Options, void *ClientData, const EOS_Auth_OnVerifyUserAuthCallback CompletionDelegate) = NULL;
void EOS_Auth_VerifyUserAuth(EOS_HAuth Handle, const EOS_Auth_VerifyUserAuthOptions *Options, void *ClientData, const EOS_Auth_OnVerifyUserAuthCallback CompletionDelegate) {
    __on_EOS_Auth_VerifyUserAuth(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_ByteArray_ToString)(const uint8_t *ByteArray, const uint32_t Length, char *OutBuffer, uint32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_ByteArray_ToString(const uint8_t *ByteArray, const uint32_t Length, char *OutBuffer, uint32_t *InOutBufferLength) {
    return __on_EOS_ByteArray_ToString(ByteArray, Length, OutBuffer, InOutBufferLength);
}

EOS_NotificationId (*__on_EOS_Connect_AddNotifyAuthExpiration)(EOS_HConnect Handle, const EOS_Connect_AddNotifyAuthExpirationOptions *Options, void *ClientData, const EOS_Connect_OnAuthExpirationCallback Notification) = NULL;
EOS_NotificationId EOS_Connect_AddNotifyAuthExpiration(EOS_HConnect Handle, const EOS_Connect_AddNotifyAuthExpirationOptions *Options, void *ClientData, const EOS_Connect_OnAuthExpirationCallback Notification) {
    return __on_EOS_Connect_AddNotifyAuthExpiration(Handle, Options, ClientData, Notification);
}

EOS_NotificationId (*__on_EOS_Connect_AddNotifyLoginStatusChanged)(EOS_HConnect Handle, const EOS_Connect_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Connect_OnLoginStatusChangedCallback Notification) = NULL;
EOS_NotificationId EOS_Connect_AddNotifyLoginStatusChanged(EOS_HConnect Handle, const EOS_Connect_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Connect_OnLoginStatusChangedCallback Notification) {
    return __on_EOS_Connect_AddNotifyLoginStatusChanged(Handle, Options, ClientData, Notification);
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByAccountId)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;
EOS_EResult EOS_Connect_CopyProductUserExternalAccountByAccountId(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    return __on_EOS_Connect_CopyProductUserExternalAccountByAccountId(Handle, Options, OutExternalAccountInfo);
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByAccountType)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;
EOS_EResult EOS_Connect_CopyProductUserExternalAccountByAccountType(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    return __on_EOS_Connect_CopyProductUserExternalAccountByAccountType(Handle, Options, OutExternalAccountInfo);
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByIndex)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByIndexOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;
EOS_EResult EOS_Connect_CopyProductUserExternalAccountByIndex(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByIndexOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    return __on_EOS_Connect_CopyProductUserExternalAccountByIndex(Handle, Options, OutExternalAccountInfo);
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserInfo)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserInfoOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;
EOS_EResult EOS_Connect_CopyProductUserInfo(EOS_HConnect Handle, const EOS_Connect_CopyProductUserInfoOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    return __on_EOS_Connect_CopyProductUserInfo(Handle, Options, OutExternalAccountInfo);
}

void (*__on_EOS_Connect_CreateDeviceId)(EOS_HConnect Handle, const EOS_Connect_CreateDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnCreateDeviceIdCallback CompletionDelegate) = NULL;
void EOS_Connect_CreateDeviceId(EOS_HConnect Handle, const EOS_Connect_CreateDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnCreateDeviceIdCallback CompletionDelegate) {
    __on_EOS_Connect_CreateDeviceId(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_CreateUser)(EOS_HConnect Handle, const EOS_Connect_CreateUserOptions *Options, void *ClientData, const EOS_Connect_OnCreateUserCallback CompletionDelegate) = NULL;
void EOS_Connect_CreateUser(EOS_HConnect Handle, const EOS_Connect_CreateUserOptions *Options, void *ClientData, const EOS_Connect_OnCreateUserCallback CompletionDelegate) {
    __on_EOS_Connect_CreateUser(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_DeleteDeviceId)(EOS_HConnect Handle, const EOS_Connect_DeleteDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnDeleteDeviceIdCallback CompletionDelegate) = NULL;
void EOS_Connect_DeleteDeviceId(EOS_HConnect Handle, const EOS_Connect_DeleteDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnDeleteDeviceIdCallback CompletionDelegate) {
    __on_EOS_Connect_DeleteDeviceId(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_ExternalAccountInfo_Release)(EOS_Connect_ExternalAccountInfo *ExternalAccountInfo) = NULL;
void EOS_Connect_ExternalAccountInfo_Release(EOS_Connect_ExternalAccountInfo *ExternalAccountInfo) {
    __on_EOS_Connect_ExternalAccountInfo_Release(ExternalAccountInfo);
}

EOS_ProductUserId (*__on_EOS_Connect_GetExternalAccountMapping)(EOS_HConnect Handle, const EOS_Connect_GetExternalAccountMappingsOptions *Options) = NULL;
EOS_ProductUserId EOS_Connect_GetExternalAccountMapping(EOS_HConnect Handle, const EOS_Connect_GetExternalAccountMappingsOptions *Options) {
    return __on_EOS_Connect_GetExternalAccountMapping(Handle, Options);
}

EOS_ProductUserId (*__on_EOS_Connect_GetLoggedInUserByIndex)(EOS_HConnect Handle, int32_t Index) = NULL;
EOS_ProductUserId EOS_Connect_GetLoggedInUserByIndex(EOS_HConnect Handle, int32_t Index) {
    return __on_EOS_Connect_GetLoggedInUserByIndex(Handle, Index);
}

int32_t (*__on_EOS_Connect_GetLoggedInUsersCount)(EOS_HConnect Handle) = NULL;
int32_t EOS_Connect_GetLoggedInUsersCount(EOS_HConnect Handle) {
    return __on_EOS_Connect_GetLoggedInUsersCount(Handle);
}

EOS_ELoginStatus (*__on_EOS_Connect_GetLoginStatus)(EOS_HConnect Handle, EOS_ProductUserId LocalUserId) = NULL;
EOS_ELoginStatus EOS_Connect_GetLoginStatus(EOS_HConnect Handle, EOS_ProductUserId LocalUserId) {
    return __on_EOS_Connect_GetLoginStatus(Handle, LocalUserId);
}

uint32_t (*__on_EOS_Connect_GetProductUserExternalAccountCount)(EOS_HConnect Handle, const EOS_Connect_GetProductUserExternalAccountCountOptions *Options) = NULL;
uint32_t EOS_Connect_GetProductUserExternalAccountCount(EOS_HConnect Handle, const EOS_Connect_GetProductUserExternalAccountCountOptions *Options) {
    return __on_EOS_Connect_GetProductUserExternalAccountCount(Handle, Options);
}

EOS_EResult (*__on_EOS_Connect_GetProductUserIdMapping)(EOS_HConnect Handle, const EOS_Connect_GetProductUserIdMappingOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Connect_GetProductUserIdMapping(EOS_HConnect Handle, const EOS_Connect_GetProductUserIdMappingOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Connect_GetProductUserIdMapping(Handle, Options, OutBuffer, InOutBufferLength);
}

void (*__on_EOS_Connect_LinkAccount)(EOS_HConnect Handle, const EOS_Connect_LinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnLinkAccountCallback CompletionDelegate) = NULL;
void EOS_Connect_LinkAccount(EOS_HConnect Handle, const EOS_Connect_LinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnLinkAccountCallback CompletionDelegate) {
    __on_EOS_Connect_LinkAccount(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_Login)(EOS_HConnect Handle, const EOS_Connect_LoginOptions *Options, void *ClientData, const EOS_Connect_OnLoginCallback CompletionDelegate) = NULL;
void EOS_Connect_Login(EOS_HConnect Handle, const EOS_Connect_LoginOptions *Options, void *ClientData, const EOS_Connect_OnLoginCallback CompletionDelegate) {
    __on_EOS_Connect_Login(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_QueryExternalAccountMappings)(EOS_HConnect Handle, const EOS_Connect_QueryExternalAccountMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryExternalAccountMappingsCallback CompletionDelegate) = NULL;
void EOS_Connect_QueryExternalAccountMappings(EOS_HConnect Handle, const EOS_Connect_QueryExternalAccountMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryExternalAccountMappingsCallback CompletionDelegate) {
    __on_EOS_Connect_QueryExternalAccountMappings(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_QueryProductUserIdMappings)(EOS_HConnect Handle, const EOS_Connect_QueryProductUserIdMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryProductUserIdMappingsCallback CompletionDelegate) = NULL;
void EOS_Connect_QueryProductUserIdMappings(EOS_HConnect Handle, const EOS_Connect_QueryProductUserIdMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryProductUserIdMappingsCallback CompletionDelegate) {
    __on_EOS_Connect_QueryProductUserIdMappings(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_RemoveNotifyAuthExpiration)(EOS_HConnect Handle, EOS_NotificationId InId) = NULL;
void EOS_Connect_RemoveNotifyAuthExpiration(EOS_HConnect Handle, EOS_NotificationId InId) {
    __on_EOS_Connect_RemoveNotifyAuthExpiration(Handle, InId);
}

void (*__on_EOS_Connect_RemoveNotifyLoginStatusChanged)(EOS_HConnect Handle, EOS_NotificationId InId) = NULL;
void EOS_Connect_RemoveNotifyLoginStatusChanged(EOS_HConnect Handle, EOS_NotificationId InId) {
    __on_EOS_Connect_RemoveNotifyLoginStatusChanged(Handle, InId);
}

void (*__on_EOS_Connect_TransferDeviceIdAccount)(EOS_HConnect Handle, const EOS_Connect_TransferDeviceIdAccountOptions *Options, void *ClientData, const EOS_Connect_OnTransferDeviceIdAccountCallback CompletionDelegate) = NULL;
void EOS_Connect_TransferDeviceIdAccount(EOS_HConnect Handle, const EOS_Connect_TransferDeviceIdAccountOptions *Options, void *ClientData, const EOS_Connect_OnTransferDeviceIdAccountCallback CompletionDelegate) {
    __on_EOS_Connect_TransferDeviceIdAccount(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Connect_UnlinkAccount)(EOS_HConnect Handle, const EOS_Connect_UnlinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnUnlinkAccountCallback CompletionDelegate) = NULL;
void EOS_Connect_UnlinkAccount(EOS_HConnect Handle, const EOS_Connect_UnlinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnUnlinkAccountCallback CompletionDelegate) {
    __on_EOS_Connect_UnlinkAccount(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_ContinuanceToken_ToString)(EOS_ContinuanceToken ContinuanceToken, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_ContinuanceToken_ToString(EOS_ContinuanceToken ContinuanceToken, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_ContinuanceToken_ToString(ContinuanceToken, OutBuffer, InOutBufferLength);
}

EOS_Bool (*__on_EOS_EResult_IsOperationComplete)(EOS_EResult Result) = NULL;
EOS_Bool EOS_EResult_IsOperationComplete(EOS_EResult Result) {
    return __on_EOS_EResult_IsOperationComplete(Result);
}

const char *(*__on_EOS_EResult_ToString)(EOS_EResult Result) = NULL;
const char *EOS_EResult_ToString(EOS_EResult Result) {
    return __on_EOS_EResult_ToString(Result);
}

void (*__on_EOS_Ecom_CatalogItem_Release)(EOS_Ecom_CatalogItem *CatalogItem) = NULL;
void EOS_Ecom_CatalogItem_Release(EOS_Ecom_CatalogItem *CatalogItem) {
    __on_EOS_Ecom_CatalogItem_Release(CatalogItem);
}

void (*__on_EOS_Ecom_CatalogOffer_Release)(EOS_Ecom_CatalogOffer *CatalogOffer) = NULL;
void EOS_Ecom_CatalogOffer_Release(EOS_Ecom_CatalogOffer *CatalogOffer) {
    __on_EOS_Ecom_CatalogOffer_Release(CatalogOffer);
}

void (*__on_EOS_Ecom_CatalogRelease_Release)(EOS_Ecom_CatalogRelease *CatalogRelease) = NULL;
void EOS_Ecom_CatalogRelease_Release(EOS_Ecom_CatalogRelease *CatalogRelease) {
    __on_EOS_Ecom_CatalogRelease_Release(CatalogRelease);
}

void (*__on_EOS_Ecom_Checkout)(EOS_HEcom Handle, const EOS_Ecom_CheckoutOptions *Options, void *ClientData, const EOS_Ecom_OnCheckoutCallback CompletionDelegate) = NULL;
void EOS_Ecom_Checkout(EOS_HEcom Handle, const EOS_Ecom_CheckoutOptions *Options, void *ClientData, const EOS_Ecom_OnCheckoutCallback CompletionDelegate) {
    __on_EOS_Ecom_Checkout(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Ecom_CopyEntitlementById)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIdOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;
EOS_EResult EOS_Ecom_CopyEntitlementById(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIdOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    return __on_EOS_Ecom_CopyEntitlementById(Handle, Options, OutEntitlement);
}

EOS_EResult (*__on_EOS_Ecom_CopyEntitlementByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;
EOS_EResult EOS_Ecom_CopyEntitlementByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    return __on_EOS_Ecom_CopyEntitlementByIndex(Handle, Options, OutEntitlement);
}

EOS_EResult (*__on_EOS_Ecom_CopyEntitlementByNameAndIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByNameAndIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;
EOS_EResult EOS_Ecom_CopyEntitlementByNameAndIndex(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByNameAndIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    return __on_EOS_Ecom_CopyEntitlementByNameAndIndex(Handle, Options, OutEntitlement);
}

EOS_EResult (*__on_EOS_Ecom_CopyItemById)(EOS_HEcom Handle, const EOS_Ecom_CopyItemByIdOptions *Options, EOS_Ecom_CatalogItem **OutItem) = NULL;
EOS_EResult EOS_Ecom_CopyItemById(EOS_HEcom Handle, const EOS_Ecom_CopyItemByIdOptions *Options, EOS_Ecom_CatalogItem **OutItem) {
    return __on_EOS_Ecom_CopyItemById(Handle, Options, OutItem);
}

EOS_EResult (*__on_EOS_Ecom_CopyItemImageInfoByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyItemImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) = NULL;
EOS_EResult EOS_Ecom_CopyItemImageInfoByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyItemImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) {
    return __on_EOS_Ecom_CopyItemImageInfoByIndex(Handle, Options, OutImageInfo);
}

EOS_EResult (*__on_EOS_Ecom_CopyItemReleaseByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyItemReleaseByIndexOptions *Options, EOS_Ecom_CatalogRelease **OutRelease) = NULL;
EOS_EResult EOS_Ecom_CopyItemReleaseByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyItemReleaseByIndexOptions *Options, EOS_Ecom_CatalogRelease **OutRelease) {
    return __on_EOS_Ecom_CopyItemReleaseByIndex(Handle, Options, OutRelease);
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferById)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIdOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) = NULL;
EOS_EResult EOS_Ecom_CopyOfferById(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIdOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) {
    return __on_EOS_Ecom_CopyOfferById(Handle, Options, OutOffer);
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIndexOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) = NULL;
EOS_EResult EOS_Ecom_CopyOfferByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIndexOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) {
    return __on_EOS_Ecom_CopyOfferByIndex(Handle, Options, OutOffer);
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferImageInfoByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) = NULL;
EOS_EResult EOS_Ecom_CopyOfferImageInfoByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyOfferImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) {
    return __on_EOS_Ecom_CopyOfferImageInfoByIndex(Handle, Options, OutImageInfo);
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferItemByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferItemByIndexOptions *Options, EOS_Ecom_CatalogItem **OutItem) = NULL;
EOS_EResult EOS_Ecom_CopyOfferItemByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyOfferItemByIndexOptions *Options, EOS_Ecom_CatalogItem **OutItem) {
    return __on_EOS_Ecom_CopyOfferItemByIndex(Handle, Options, OutItem);
}

EOS_EResult (*__on_EOS_Ecom_CopyTransactionById)(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIdOptions *Options, EOS_Ecom_HTransaction *OutTransaction) = NULL;
EOS_EResult EOS_Ecom_CopyTransactionById(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIdOptions *Options, EOS_Ecom_HTransaction *OutTransaction) {
    return __on_EOS_Ecom_CopyTransactionById(Handle, Options, OutTransaction);
}

EOS_EResult (*__on_EOS_Ecom_CopyTransactionByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIndexOptions *Options, EOS_Ecom_HTransaction *OutTransaction) = NULL;
EOS_EResult EOS_Ecom_CopyTransactionByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIndexOptions *Options, EOS_Ecom_HTransaction *OutTransaction) {
    return __on_EOS_Ecom_CopyTransactionByIndex(Handle, Options, OutTransaction);
}

void (*__on_EOS_Ecom_Entitlement_Release)(EOS_Ecom_Entitlement *Entitlement) = NULL;
void EOS_Ecom_Entitlement_Release(EOS_Ecom_Entitlement *Entitlement) {
    __on_EOS_Ecom_Entitlement_Release(Entitlement);
}

uint32_t (*__on_EOS_Ecom_GetEntitlementsByNameCount)(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsByNameCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetEntitlementsByNameCount(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsByNameCountOptions *Options) {
    return __on_EOS_Ecom_GetEntitlementsByNameCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetEntitlementsCount)(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetEntitlementsCount(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsCountOptions *Options) {
    return __on_EOS_Ecom_GetEntitlementsCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetItemImageInfoCount)(EOS_HEcom Handle, const EOS_Ecom_GetItemImageInfoCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetItemImageInfoCount(EOS_HEcom Handle, const EOS_Ecom_GetItemImageInfoCountOptions *Options) {
    return __on_EOS_Ecom_GetItemImageInfoCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetItemReleaseCount)(EOS_HEcom Handle, const EOS_Ecom_GetItemReleaseCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetItemReleaseCount(EOS_HEcom Handle, const EOS_Ecom_GetItemReleaseCountOptions *Options) {
    return __on_EOS_Ecom_GetItemReleaseCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetOfferCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetOfferCount(EOS_HEcom Handle, const EOS_Ecom_GetOfferCountOptions *Options) {
    return __on_EOS_Ecom_GetOfferCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetOfferImageInfoCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferImageInfoCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetOfferImageInfoCount(EOS_HEcom Handle, const EOS_Ecom_GetOfferImageInfoCountOptions *Options) {
    return __on_EOS_Ecom_GetOfferImageInfoCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetOfferItemCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferItemCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetOfferItemCount(EOS_HEcom Handle, const EOS_Ecom_GetOfferItemCountOptions *Options) {
    return __on_EOS_Ecom_GetOfferItemCount(Handle, Options);
}

uint32_t (*__on_EOS_Ecom_GetTransactionCount)(EOS_HEcom Handle, const EOS_Ecom_GetTransactionCountOptions *Options) = NULL;
uint32_t EOS_Ecom_GetTransactionCount(EOS_HEcom Handle, const EOS_Ecom_GetTransactionCountOptions *Options) {
    return __on_EOS_Ecom_GetTransactionCount(Handle, Options);
}

void (*__on_EOS_Ecom_KeyImageInfo_Release)(EOS_Ecom_KeyImageInfo *KeyImageInfo) = NULL;
void EOS_Ecom_KeyImageInfo_Release(EOS_Ecom_KeyImageInfo *KeyImageInfo) {
    __on_EOS_Ecom_KeyImageInfo_Release(KeyImageInfo);
}

void (*__on_EOS_Ecom_QueryEntitlements)(EOS_HEcom Handle, const EOS_Ecom_QueryEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnQueryEntitlementsCallback CompletionDelegate) = NULL;
void EOS_Ecom_QueryEntitlements(EOS_HEcom Handle, const EOS_Ecom_QueryEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnQueryEntitlementsCallback CompletionDelegate) {
    __on_EOS_Ecom_QueryEntitlements(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Ecom_QueryOffers)(EOS_HEcom Handle, const EOS_Ecom_QueryOffersOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOffersCallback CompletionDelegate) = NULL;
void EOS_Ecom_QueryOffers(EOS_HEcom Handle, const EOS_Ecom_QueryOffersOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOffersCallback CompletionDelegate) {
    __on_EOS_Ecom_QueryOffers(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Ecom_QueryOwnership)(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipCallback CompletionDelegate) = NULL;
void EOS_Ecom_QueryOwnership(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipCallback CompletionDelegate) {
    __on_EOS_Ecom_QueryOwnership(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Ecom_QueryOwnershipToken)(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipTokenOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipTokenCallback CompletionDelegate) = NULL;
void EOS_Ecom_QueryOwnershipToken(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipTokenOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipTokenCallback CompletionDelegate) {
    __on_EOS_Ecom_QueryOwnershipToken(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Ecom_RedeemEntitlements)(EOS_HEcom Handle, const EOS_Ecom_RedeemEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnRedeemEntitlementsCallback CompletionDelegate) = NULL;
void EOS_Ecom_RedeemEntitlements(EOS_HEcom Handle, const EOS_Ecom_RedeemEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnRedeemEntitlementsCallback CompletionDelegate) {
    __on_EOS_Ecom_RedeemEntitlements(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Ecom_Transaction_CopyEntitlementByIndex)(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;
EOS_EResult EOS_Ecom_Transaction_CopyEntitlementByIndex(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    return __on_EOS_Ecom_Transaction_CopyEntitlementByIndex(Handle, Options, OutEntitlement);
}

uint32_t (*__on_EOS_Ecom_Transaction_GetEntitlementsCount)(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_GetEntitlementsCountOptions *Options) = NULL;
uint32_t EOS_Ecom_Transaction_GetEntitlementsCount(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_GetEntitlementsCountOptions *Options) {
    return __on_EOS_Ecom_Transaction_GetEntitlementsCount(Handle, Options);
}

EOS_EResult (*__on_EOS_Ecom_Transaction_GetTransactionId)(EOS_Ecom_HTransaction Handle, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Ecom_Transaction_GetTransactionId(EOS_Ecom_HTransaction Handle, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Ecom_Transaction_GetTransactionId(Handle, OutBuffer, InOutBufferLength);
}

void (*__on_EOS_Ecom_Transaction_Release)(EOS_Ecom_HTransaction Transaction) = NULL;
void EOS_Ecom_Transaction_Release(EOS_Ecom_HTransaction Transaction) {
    __on_EOS_Ecom_Transaction_Release(Transaction);
}

EOS_EpicAccountId (*__on_EOS_EpicAccountId_FromString)(const char *AccountIdString) = NULL;
EOS_EpicAccountId EOS_EpicAccountId_FromString(const char *AccountIdString) {
    return __on_EOS_EpicAccountId_FromString(AccountIdString);
}

EOS_Bool (*__on_EOS_EpicAccountId_IsValid)(EOS_EpicAccountId AccountId) = NULL;
EOS_Bool EOS_EpicAccountId_IsValid(EOS_EpicAccountId AccountId) {
    return __on_EOS_EpicAccountId_IsValid(AccountId);
}

EOS_EResult (*__on_EOS_EpicAccountId_ToString)(EOS_EpicAccountId AccountId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_EpicAccountId_ToString(EOS_EpicAccountId AccountId, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_EpicAccountId_ToString(AccountId, OutBuffer, InOutBufferLength);
}

void (*__on_EOS_Friends_AcceptInvite)(EOS_HFriends Handle, const EOS_Friends_AcceptInviteOptions *Options, void *ClientData, const EOS_Friends_OnAcceptInviteCallback CompletionDelegate) = NULL;
void EOS_Friends_AcceptInvite(EOS_HFriends Handle, const EOS_Friends_AcceptInviteOptions *Options, void *ClientData, const EOS_Friends_OnAcceptInviteCallback CompletionDelegate) {
    __on_EOS_Friends_AcceptInvite(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_Friends_AddNotifyFriendsUpdate)(EOS_HFriends Handle, const EOS_Friends_AddNotifyFriendsUpdateOptions *Options, void *ClientData, const EOS_Friends_OnFriendsUpdateCallback FriendsUpdateHandler) = NULL;
EOS_NotificationId EOS_Friends_AddNotifyFriendsUpdate(EOS_HFriends Handle, const EOS_Friends_AddNotifyFriendsUpdateOptions *Options, void *ClientData, const EOS_Friends_OnFriendsUpdateCallback FriendsUpdateHandler) {
    return __on_EOS_Friends_AddNotifyFriendsUpdate(Handle, Options, ClientData, FriendsUpdateHandler);
}

EOS_EpicAccountId (*__on_EOS_Friends_GetFriendAtIndex)(EOS_HFriends Handle, const EOS_Friends_GetFriendAtIndexOptions *Options) = NULL;
EOS_EpicAccountId EOS_Friends_GetFriendAtIndex(EOS_HFriends Handle, const EOS_Friends_GetFriendAtIndexOptions *Options) {
    return __on_EOS_Friends_GetFriendAtIndex(Handle, Options);
}

int32_t (*__on_EOS_Friends_GetFriendsCount)(EOS_HFriends Handle, const EOS_Friends_GetFriendsCountOptions *Options) = NULL;
int32_t EOS_Friends_GetFriendsCount(EOS_HFriends Handle, const EOS_Friends_GetFriendsCountOptions *Options) {
    return __on_EOS_Friends_GetFriendsCount(Handle, Options);
}

EOS_EFriendsStatus (*__on_EOS_Friends_GetStatus)(EOS_HFriends Handle, const EOS_Friends_GetStatusOptions *Options) = NULL;
EOS_EFriendsStatus EOS_Friends_GetStatus(EOS_HFriends Handle, const EOS_Friends_GetStatusOptions *Options) {
    return __on_EOS_Friends_GetStatus(Handle, Options);
}

void (*__on_EOS_Friends_QueryFriends)(EOS_HFriends Handle, const EOS_Friends_QueryFriendsOptions *Options, void *ClientData, const EOS_Friends_OnQueryFriendsCallback CompletionDelegate) = NULL;
void EOS_Friends_QueryFriends(EOS_HFriends Handle, const EOS_Friends_QueryFriendsOptions *Options, void *ClientData, const EOS_Friends_OnQueryFriendsCallback CompletionDelegate) {
    __on_EOS_Friends_QueryFriends(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Friends_RejectInvite)(EOS_HFriends Handle, const EOS_Friends_RejectInviteOptions *Options, void *ClientData, const EOS_Friends_OnRejectInviteCallback CompletionDelegate) = NULL;
void EOS_Friends_RejectInvite(EOS_HFriends Handle, const EOS_Friends_RejectInviteOptions *Options, void *ClientData, const EOS_Friends_OnRejectInviteCallback CompletionDelegate) {
    __on_EOS_Friends_RejectInvite(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Friends_RemoveNotifyFriendsUpdate)(EOS_HFriends Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_Friends_RemoveNotifyFriendsUpdate(EOS_HFriends Handle, EOS_NotificationId NotificationId) {
    __on_EOS_Friends_RemoveNotifyFriendsUpdate(Handle, NotificationId);
}

void (*__on_EOS_Friends_SendInvite)(EOS_HFriends Handle, const EOS_Friends_SendInviteOptions *Options, void *ClientData, const EOS_Friends_OnSendInviteCallback CompletionDelegate) = NULL;
void EOS_Friends_SendInvite(EOS_HFriends Handle, const EOS_Friends_SendInviteOptions *Options, void *ClientData, const EOS_Friends_OnSendInviteCallback CompletionDelegate) {
    __on_EOS_Friends_SendInvite(Handle, Options, ClientData, CompletionDelegate);
}

const char *(*__on_EOS_GetVersion)() = NULL;
const char *EOS_GetVersion() {
    return __on_EOS_GetVersion();
}

EOS_EResult (*__on_EOS_Initialize)(const EOS_InitializeOptions *Options) = NULL;
EOS_EResult EOS_Initialize(const EOS_InitializeOptions *Options) {
    return __on_EOS_Initialize(Options);
}

EOS_NotificationId (*__on_EOS_KWS_AddNotifyPermissionsUpdateReceived)(EOS_HKWS Handle, const EOS_KWS_AddNotifyPermissionsUpdateReceivedOptions *Options, void *ClientData, const EOS_KWS_OnPermissionsUpdateReceivedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_KWS_AddNotifyPermissionsUpdateReceived(EOS_HKWS Handle, const EOS_KWS_AddNotifyPermissionsUpdateReceivedOptions *Options, void *ClientData, const EOS_KWS_OnPermissionsUpdateReceivedCallback NotificationFn) {
    return __on_EOS_KWS_AddNotifyPermissionsUpdateReceived(Handle, Options, ClientData, NotificationFn);
}

EOS_EResult (*__on_EOS_KWS_CopyPermissionByIndex)(EOS_HKWS Handle, const EOS_KWS_CopyPermissionByIndexOptions *Options, EOS_KWS_PermissionStatus **OutPermission) = NULL;
EOS_EResult EOS_KWS_CopyPermissionByIndex(EOS_HKWS Handle, const EOS_KWS_CopyPermissionByIndexOptions *Options, EOS_KWS_PermissionStatus **OutPermission) {
    return __on_EOS_KWS_CopyPermissionByIndex(Handle, Options, OutPermission);
}

void (*__on_EOS_KWS_CreateUser)(EOS_HKWS Handle, const EOS_KWS_CreateUserOptions *Options, void *ClientData, const EOS_KWS_OnCreateUserCallback CompletionDelegate) = NULL;
void EOS_KWS_CreateUser(EOS_HKWS Handle, const EOS_KWS_CreateUserOptions *Options, void *ClientData, const EOS_KWS_OnCreateUserCallback CompletionDelegate) {
    __on_EOS_KWS_CreateUser(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_KWS_GetPermissionByKey)(EOS_HKWS Handle, const EOS_KWS_GetPermissionByKeyOptions *Options, EOS_EKWSPermissionStatus *OutPermission) = NULL;
EOS_EResult EOS_KWS_GetPermissionByKey(EOS_HKWS Handle, const EOS_KWS_GetPermissionByKeyOptions *Options, EOS_EKWSPermissionStatus *OutPermission) {
    return __on_EOS_KWS_GetPermissionByKey(Handle, Options, OutPermission);
}

int32_t (*__on_EOS_KWS_GetPermissionsCount)(EOS_HKWS Handle, const EOS_KWS_GetPermissionsCountOptions *Options) = NULL;
int32_t EOS_KWS_GetPermissionsCount(EOS_HKWS Handle, const EOS_KWS_GetPermissionsCountOptions *Options) {
    return __on_EOS_KWS_GetPermissionsCount(Handle, Options);
}

void (*__on_EOS_KWS_PermissionStatus_Release)(EOS_KWS_PermissionStatus *PermissionStatus) = NULL;
void EOS_KWS_PermissionStatus_Release(EOS_KWS_PermissionStatus *PermissionStatus) {
    __on_EOS_KWS_PermissionStatus_Release(PermissionStatus);
}

void (*__on_EOS_KWS_QueryAgeGate)(EOS_HKWS Handle, const EOS_KWS_QueryAgeGateOptions *Options, void *ClientData, const EOS_KWS_OnQueryAgeGateCallback CompletionDelegate) = NULL;
void EOS_KWS_QueryAgeGate(EOS_HKWS Handle, const EOS_KWS_QueryAgeGateOptions *Options, void *ClientData, const EOS_KWS_OnQueryAgeGateCallback CompletionDelegate) {
    __on_EOS_KWS_QueryAgeGate(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_KWS_QueryPermissions)(EOS_HKWS Handle, const EOS_KWS_QueryPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnQueryPermissionsCallback CompletionDelegate) = NULL;
void EOS_KWS_QueryPermissions(EOS_HKWS Handle, const EOS_KWS_QueryPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnQueryPermissionsCallback CompletionDelegate) {
    __on_EOS_KWS_QueryPermissions(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived)(EOS_HKWS Handle, EOS_NotificationId InId) = NULL;
void EOS_KWS_RemoveNotifyPermissionsUpdateReceived(EOS_HKWS Handle, EOS_NotificationId InId) {
    __on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived(Handle, InId);
}

void (*__on_EOS_KWS_RequestPermissions)(EOS_HKWS Handle, const EOS_KWS_RequestPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnRequestPermissionsCallback CompletionDelegate) = NULL;
void EOS_KWS_RequestPermissions(EOS_HKWS Handle, const EOS_KWS_RequestPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnRequestPermissionsCallback CompletionDelegate) {
    __on_EOS_KWS_RequestPermissions(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_KWS_UpdateParentEmail)(EOS_HKWS Handle, const EOS_KWS_UpdateParentEmailOptions *Options, void *ClientData, const EOS_KWS_OnUpdateParentEmailCallback CompletionDelegate) = NULL;
void EOS_KWS_UpdateParentEmail(EOS_HKWS Handle, const EOS_KWS_UpdateParentEmailOptions *Options, void *ClientData, const EOS_KWS_OnUpdateParentEmailCallback CompletionDelegate) {
    __on_EOS_KWS_UpdateParentEmail(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) = NULL;
EOS_EResult EOS_Leaderboards_CopyLeaderboardDefinitionByIndex(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) {
    return __on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex(Handle, Options, OutLeaderboardDefinition);
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) = NULL;
EOS_EResult EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) {
    return __on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(Handle, Options, OutLeaderboardDefinition);
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardRecordByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) = NULL;
EOS_EResult EOS_Leaderboards_CopyLeaderboardRecordByIndex(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) {
    return __on_EOS_Leaderboards_CopyLeaderboardRecordByIndex(Handle, Options, OutLeaderboardRecord);
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardRecordByUserId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) = NULL;
EOS_EResult EOS_Leaderboards_CopyLeaderboardRecordByUserId(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) {
    return __on_EOS_Leaderboards_CopyLeaderboardRecordByUserId(Handle, Options, OutLeaderboardRecord);
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) = NULL;
EOS_EResult EOS_Leaderboards_CopyLeaderboardUserScoreByIndex(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) {
    return __on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex(Handle, Options, OutLeaderboardUserScore);
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) = NULL;
EOS_EResult EOS_Leaderboards_CopyLeaderboardUserScoreByUserId(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) {
    return __on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId(Handle, Options, OutLeaderboardUserScore);
}

void (*__on_EOS_Leaderboards_Definition_Release)(EOS_Leaderboards_Definition *LeaderboardDefinition) = NULL;
void EOS_Leaderboards_Definition_Release(EOS_Leaderboards_Definition *LeaderboardDefinition) {
    __on_EOS_Leaderboards_Definition_Release(LeaderboardDefinition);
}

uint32_t (*__on_EOS_Leaderboards_GetLeaderboardDefinitionCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardDefinitionCountOptions *Options) = NULL;
uint32_t EOS_Leaderboards_GetLeaderboardDefinitionCount(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardDefinitionCountOptions *Options) {
    return __on_EOS_Leaderboards_GetLeaderboardDefinitionCount(Handle, Options);
}

uint32_t (*__on_EOS_Leaderboards_GetLeaderboardRecordCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardRecordCountOptions *Options) = NULL;
uint32_t EOS_Leaderboards_GetLeaderboardRecordCount(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardRecordCountOptions *Options) {
    return __on_EOS_Leaderboards_GetLeaderboardRecordCount(Handle, Options);
}

uint32_t (*__on_EOS_Leaderboards_GetLeaderboardUserScoreCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardUserScoreCountOptions *Options) = NULL;
uint32_t EOS_Leaderboards_GetLeaderboardUserScoreCount(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardUserScoreCountOptions *Options) {
    return __on_EOS_Leaderboards_GetLeaderboardUserScoreCount(Handle, Options);
}

void (*__on_EOS_Leaderboards_LeaderboardDefinition_Release)(EOS_Leaderboards_Definition *LeaderboardDefinition) = NULL;
void EOS_Leaderboards_LeaderboardDefinition_Release(EOS_Leaderboards_Definition *LeaderboardDefinition) {
    __on_EOS_Leaderboards_LeaderboardDefinition_Release(LeaderboardDefinition);
}

void (*__on_EOS_Leaderboards_LeaderboardRecord_Release)(EOS_Leaderboards_LeaderboardRecord *LeaderboardRecord) = NULL;
void EOS_Leaderboards_LeaderboardRecord_Release(EOS_Leaderboards_LeaderboardRecord *LeaderboardRecord) {
    __on_EOS_Leaderboards_LeaderboardRecord_Release(LeaderboardRecord);
}

void (*__on_EOS_Leaderboards_LeaderboardUserScore_Release)(EOS_Leaderboards_LeaderboardUserScore *LeaderboardUserScore) = NULL;
void EOS_Leaderboards_LeaderboardUserScore_Release(EOS_Leaderboards_LeaderboardUserScore *LeaderboardUserScore) {
    __on_EOS_Leaderboards_LeaderboardUserScore_Release(LeaderboardUserScore);
}

void (*__on_EOS_Leaderboards_QueryLeaderboardDefinitions)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardDefinitionsOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback CompletionDelegate) = NULL;
void EOS_Leaderboards_QueryLeaderboardDefinitions(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardDefinitionsOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback CompletionDelegate) {
    __on_EOS_Leaderboards_QueryLeaderboardDefinitions(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Leaderboards_QueryLeaderboardRanks)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardRanksOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallback CompletionDelegate) = NULL;
void EOS_Leaderboards_QueryLeaderboardRanks(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardRanksOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallback CompletionDelegate) {
    __on_EOS_Leaderboards_QueryLeaderboardRanks(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Leaderboards_QueryLeaderboardUserScores)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardUserScoresOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback CompletionDelegate) = NULL;
void EOS_Leaderboards_QueryLeaderboardUserScores(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardUserScoresOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback CompletionDelegate) {
    __on_EOS_Leaderboards_QueryLeaderboardUserScores(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyAttributeByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;
EOS_EResult EOS_LobbyDetails_CopyAttributeByIndex(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    return __on_EOS_LobbyDetails_CopyAttributeByIndex(Handle, Options, OutAttribute);
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyAttributeByKey)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;
EOS_EResult EOS_LobbyDetails_CopyAttributeByKey(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    return __on_EOS_LobbyDetails_CopyAttributeByKey(Handle, Options, OutAttribute);
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyInfo)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyInfoOptions *Options, EOS_LobbyDetails_Info **OutLobbyDetailsInfo) = NULL;
EOS_EResult EOS_LobbyDetails_CopyInfo(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyInfoOptions *Options, EOS_LobbyDetails_Info **OutLobbyDetailsInfo) {
    return __on_EOS_LobbyDetails_CopyInfo(Handle, Options, OutLobbyDetailsInfo);
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyMemberAttributeByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;
EOS_EResult EOS_LobbyDetails_CopyMemberAttributeByIndex(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    return __on_EOS_LobbyDetails_CopyMemberAttributeByIndex(Handle, Options, OutAttribute);
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyMemberAttributeByKey)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;
EOS_EResult EOS_LobbyDetails_CopyMemberAttributeByKey(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    return __on_EOS_LobbyDetails_CopyMemberAttributeByKey(Handle, Options, OutAttribute);
}

uint32_t (*__on_EOS_LobbyDetails_GetAttributeCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetAttributeCountOptions *Options) = NULL;
uint32_t EOS_LobbyDetails_GetAttributeCount(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetAttributeCountOptions *Options) {
    return __on_EOS_LobbyDetails_GetAttributeCount(Handle, Options);
}

EOS_ProductUserId (*__on_EOS_LobbyDetails_GetLobbyOwner)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetLobbyOwnerOptions *Options) = NULL;
EOS_ProductUserId EOS_LobbyDetails_GetLobbyOwner(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetLobbyOwnerOptions *Options) {
    return __on_EOS_LobbyDetails_GetLobbyOwner(Handle, Options);
}

uint32_t (*__on_EOS_LobbyDetails_GetMemberAttributeCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberAttributeCountOptions *Options) = NULL;
uint32_t EOS_LobbyDetails_GetMemberAttributeCount(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberAttributeCountOptions *Options) {
    return __on_EOS_LobbyDetails_GetMemberAttributeCount(Handle, Options);
}

EOS_ProductUserId (*__on_EOS_LobbyDetails_GetMemberByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberByIndexOptions *Options) = NULL;
EOS_ProductUserId EOS_LobbyDetails_GetMemberByIndex(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberByIndexOptions *Options) {
    return __on_EOS_LobbyDetails_GetMemberByIndex(Handle, Options);
}

uint32_t (*__on_EOS_LobbyDetails_GetMemberCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberCountOptions *Options) = NULL;
uint32_t EOS_LobbyDetails_GetMemberCount(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberCountOptions *Options) {
    return __on_EOS_LobbyDetails_GetMemberCount(Handle, Options);
}

void (*__on_EOS_LobbyDetails_Info_Release)(EOS_LobbyDetails_Info *LobbyDetailsInfo) = NULL;
void EOS_LobbyDetails_Info_Release(EOS_LobbyDetails_Info *LobbyDetailsInfo) {
    __on_EOS_LobbyDetails_Info_Release(LobbyDetailsInfo);
}

void (*__on_EOS_LobbyDetails_Release)(EOS_HLobbyDetails LobbyHandle) = NULL;
void EOS_LobbyDetails_Release(EOS_HLobbyDetails LobbyHandle) {
    __on_EOS_LobbyDetails_Release(LobbyHandle);
}

EOS_EResult (*__on_EOS_LobbyModification_AddAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddAttributeOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_AddAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddAttributeOptions *Options) {
    return __on_EOS_LobbyModification_AddAttribute(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbyModification_AddMemberAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddMemberAttributeOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_AddMemberAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddMemberAttributeOptions *Options) {
    return __on_EOS_LobbyModification_AddMemberAttribute(Handle, Options);
}

void (*__on_EOS_LobbyModification_Release)(EOS_HLobbyModification LobbyModificationHandle) = NULL;
void EOS_LobbyModification_Release(EOS_HLobbyModification LobbyModificationHandle) {
    __on_EOS_LobbyModification_Release(LobbyModificationHandle);
}

EOS_EResult (*__on_EOS_LobbyModification_RemoveAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveAttributeOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_RemoveAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveAttributeOptions *Options) {
    return __on_EOS_LobbyModification_RemoveAttribute(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbyModification_RemoveMemberAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveMemberAttributeOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_RemoveMemberAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveMemberAttributeOptions *Options) {
    return __on_EOS_LobbyModification_RemoveMemberAttribute(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbyModification_SetBucketId)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetBucketIdOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_SetBucketId(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetBucketIdOptions *Options) {
    return __on_EOS_LobbyModification_SetBucketId(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbyModification_SetInvitesAllowed)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetInvitesAllowedOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_SetInvitesAllowed(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetInvitesAllowedOptions *Options) {
    return __on_EOS_LobbyModification_SetInvitesAllowed(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbyModification_SetMaxMembers)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetMaxMembersOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_SetMaxMembers(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetMaxMembersOptions *Options) {
    return __on_EOS_LobbyModification_SetMaxMembers(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbyModification_SetPermissionLevel)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetPermissionLevelOptions *Options) = NULL;
EOS_EResult EOS_LobbyModification_SetPermissionLevel(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetPermissionLevelOptions *Options) {
    return __on_EOS_LobbyModification_SetPermissionLevel(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbySearch_CopySearchResultByIndex)(EOS_HLobbySearch Handle, const EOS_LobbySearch_CopySearchResultByIndexOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;
EOS_EResult EOS_LobbySearch_CopySearchResultByIndex(EOS_HLobbySearch Handle, const EOS_LobbySearch_CopySearchResultByIndexOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    return __on_EOS_LobbySearch_CopySearchResultByIndex(Handle, Options, OutLobbyDetailsHandle);
}

void (*__on_EOS_LobbySearch_Find)(EOS_HLobbySearch Handle, const EOS_LobbySearch_FindOptions *Options, void *ClientData, const EOS_LobbySearch_OnFindCallback CompletionDelegate) = NULL;
void EOS_LobbySearch_Find(EOS_HLobbySearch Handle, const EOS_LobbySearch_FindOptions *Options, void *ClientData, const EOS_LobbySearch_OnFindCallback CompletionDelegate) {
    __on_EOS_LobbySearch_Find(Handle, Options, ClientData, CompletionDelegate);
}

uint32_t (*__on_EOS_LobbySearch_GetSearchResultCount)(EOS_HLobbySearch Handle, const EOS_LobbySearch_GetSearchResultCountOptions *Options) = NULL;
uint32_t EOS_LobbySearch_GetSearchResultCount(EOS_HLobbySearch Handle, const EOS_LobbySearch_GetSearchResultCountOptions *Options) {
    return __on_EOS_LobbySearch_GetSearchResultCount(Handle, Options);
}

void (*__on_EOS_LobbySearch_Release)(EOS_HLobbySearch LobbySearchHandle) = NULL;
void EOS_LobbySearch_Release(EOS_HLobbySearch LobbySearchHandle) {
    __on_EOS_LobbySearch_Release(LobbySearchHandle);
}

EOS_EResult (*__on_EOS_LobbySearch_RemoveParameter)(EOS_HLobbySearch Handle, const EOS_LobbySearch_RemoveParameterOptions *Options) = NULL;
EOS_EResult EOS_LobbySearch_RemoveParameter(EOS_HLobbySearch Handle, const EOS_LobbySearch_RemoveParameterOptions *Options) {
    return __on_EOS_LobbySearch_RemoveParameter(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbySearch_SetLobbyId)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetLobbyIdOptions *Options) = NULL;
EOS_EResult EOS_LobbySearch_SetLobbyId(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetLobbyIdOptions *Options) {
    return __on_EOS_LobbySearch_SetLobbyId(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbySearch_SetMaxResults)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetMaxResultsOptions *Options) = NULL;
EOS_EResult EOS_LobbySearch_SetMaxResults(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetMaxResultsOptions *Options) {
    return __on_EOS_LobbySearch_SetMaxResults(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbySearch_SetParameter)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetParameterOptions *Options) = NULL;
EOS_EResult EOS_LobbySearch_SetParameter(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetParameterOptions *Options) {
    return __on_EOS_LobbySearch_SetParameter(Handle, Options);
}

EOS_EResult (*__on_EOS_LobbySearch_SetTargetUserId)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetTargetUserIdOptions *Options) = NULL;
EOS_EResult EOS_LobbySearch_SetTargetUserId(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetTargetUserIdOptions *Options) {
    return __on_EOS_LobbySearch_SetTargetUserId(Handle, Options);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyJoinLobbyAccepted)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyJoinLobbyAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyAcceptedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyJoinLobbyAccepted(EOS_HLobby Handle, const EOS_Lobby_AddNotifyJoinLobbyAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyAcceptedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyJoinLobbyAccepted(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyInviteAccepted)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteAcceptedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyLobbyInviteAccepted(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteAcceptedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyLobbyInviteAccepted(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyInviteReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteReceivedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyLobbyInviteReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteReceivedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyLobbyInviteReceived(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberStatusReceivedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyLobbyMemberStatusReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberStatusReceivedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberUpdateReceivedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberUpdateReceivedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyUpdateReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyUpdateReceivedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyLobbyUpdateReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyUpdateReceivedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyLobbyUpdateReceived(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyRTCRoomConnectionChangedOptions *Options, void *ClientData, const EOS_Lobby_OnRTCRoomConnectionChangedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Lobby_AddNotifyRTCRoomConnectionChanged(EOS_HLobby Handle, const EOS_Lobby_AddNotifyRTCRoomConnectionChangedOptions *Options, void *ClientData, const EOS_Lobby_OnRTCRoomConnectionChangedCallback NotificationFn) {
    return __on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged(Handle, Options, ClientData, NotificationFn);
}

void (*__on_EOS_Lobby_Attribute_Release)(EOS_Lobby_Attribute *LobbyAttribute) = NULL;
void EOS_Lobby_Attribute_Release(EOS_Lobby_Attribute *LobbyAttribute) {
    __on_EOS_Lobby_Attribute_Release(LobbyAttribute);
}

EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandle)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;
EOS_EResult EOS_Lobby_CopyLobbyDetailsHandle(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    return __on_EOS_Lobby_CopyLobbyDetailsHandle(Handle, Options, OutLobbyDetailsHandle);
}

EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;
EOS_EResult EOS_Lobby_CopyLobbyDetailsHandleByInviteId(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    return __on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId(Handle, Options, OutLobbyDetailsHandle);
}

EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByUiEventIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;
EOS_EResult EOS_Lobby_CopyLobbyDetailsHandleByUiEventId(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByUiEventIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    return __on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId(Handle, Options, OutLobbyDetailsHandle);
}

void (*__on_EOS_Lobby_CreateLobby)(EOS_HLobby Handle, const EOS_Lobby_CreateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnCreateLobbyCallback CompletionDelegate) = NULL;
void EOS_Lobby_CreateLobby(EOS_HLobby Handle, const EOS_Lobby_CreateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnCreateLobbyCallback CompletionDelegate) {
    __on_EOS_Lobby_CreateLobby(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Lobby_CreateLobbySearch)(EOS_HLobby Handle, const EOS_Lobby_CreateLobbySearchOptions *Options, EOS_HLobbySearch *OutLobbySearchHandle) = NULL;
EOS_EResult EOS_Lobby_CreateLobbySearch(EOS_HLobby Handle, const EOS_Lobby_CreateLobbySearchOptions *Options, EOS_HLobbySearch *OutLobbySearchHandle) {
    return __on_EOS_Lobby_CreateLobbySearch(Handle, Options, OutLobbySearchHandle);
}

void (*__on_EOS_Lobby_DestroyLobby)(EOS_HLobby Handle, const EOS_Lobby_DestroyLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnDestroyLobbyCallback CompletionDelegate) = NULL;
void EOS_Lobby_DestroyLobby(EOS_HLobby Handle, const EOS_Lobby_DestroyLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnDestroyLobbyCallback CompletionDelegate) {
    __on_EOS_Lobby_DestroyLobby(Handle, Options, ClientData, CompletionDelegate);
}

uint32_t (*__on_EOS_Lobby_GetInviteCount)(EOS_HLobby Handle, const EOS_Lobby_GetInviteCountOptions *Options) = NULL;
uint32_t EOS_Lobby_GetInviteCount(EOS_HLobby Handle, const EOS_Lobby_GetInviteCountOptions *Options) {
    return __on_EOS_Lobby_GetInviteCount(Handle, Options);
}

EOS_EResult (*__on_EOS_Lobby_GetInviteIdByIndex)(EOS_HLobby Handle, const EOS_Lobby_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Lobby_GetInviteIdByIndex(EOS_HLobby Handle, const EOS_Lobby_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Lobby_GetInviteIdByIndex(Handle, Options, OutBuffer, InOutBufferLength);
}

EOS_EResult (*__on_EOS_Lobby_GetRTCRoomName)(EOS_HLobby Handle, const EOS_Lobby_GetRTCRoomNameOptions *Options, char *OutBuffer, uint32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Lobby_GetRTCRoomName(EOS_HLobby Handle, const EOS_Lobby_GetRTCRoomNameOptions *Options, char *OutBuffer, uint32_t *InOutBufferLength) {
    return __on_EOS_Lobby_GetRTCRoomName(Handle, Options, OutBuffer, InOutBufferLength);
}

EOS_EResult (*__on_EOS_Lobby_IsRTCRoomConnected)(EOS_HLobby Handle, const EOS_Lobby_IsRTCRoomConnectedOptions *Options, EOS_Bool *bOutIsConnected) = NULL;
EOS_EResult EOS_Lobby_IsRTCRoomConnected(EOS_HLobby Handle, const EOS_Lobby_IsRTCRoomConnectedOptions *Options, EOS_Bool *bOutIsConnected) {
    return __on_EOS_Lobby_IsRTCRoomConnected(Handle, Options, bOutIsConnected);
}

void (*__on_EOS_Lobby_JoinLobby)(EOS_HLobby Handle, const EOS_Lobby_JoinLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyCallback CompletionDelegate) = NULL;
void EOS_Lobby_JoinLobby(EOS_HLobby Handle, const EOS_Lobby_JoinLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyCallback CompletionDelegate) {
    __on_EOS_Lobby_JoinLobby(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_KickMember)(EOS_HLobby Handle, const EOS_Lobby_KickMemberOptions *Options, void *ClientData, const EOS_Lobby_OnKickMemberCallback CompletionDelegate) = NULL;
void EOS_Lobby_KickMember(EOS_HLobby Handle, const EOS_Lobby_KickMemberOptions *Options, void *ClientData, const EOS_Lobby_OnKickMemberCallback CompletionDelegate) {
    __on_EOS_Lobby_KickMember(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_LeaveLobby)(EOS_HLobby Handle, const EOS_Lobby_LeaveLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnLeaveLobbyCallback CompletionDelegate) = NULL;
void EOS_Lobby_LeaveLobby(EOS_HLobby Handle, const EOS_Lobby_LeaveLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnLeaveLobbyCallback CompletionDelegate) {
    __on_EOS_Lobby_LeaveLobby(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_PromoteMember)(EOS_HLobby Handle, const EOS_Lobby_PromoteMemberOptions *Options, void *ClientData, const EOS_Lobby_OnPromoteMemberCallback CompletionDelegate) = NULL;
void EOS_Lobby_PromoteMember(EOS_HLobby Handle, const EOS_Lobby_PromoteMemberOptions *Options, void *ClientData, const EOS_Lobby_OnPromoteMemberCallback CompletionDelegate) {
    __on_EOS_Lobby_PromoteMember(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_QueryInvites)(EOS_HLobby Handle, const EOS_Lobby_QueryInvitesOptions *Options, void *ClientData, const EOS_Lobby_OnQueryInvitesCallback CompletionDelegate) = NULL;
void EOS_Lobby_QueryInvites(EOS_HLobby Handle, const EOS_Lobby_QueryInvitesOptions *Options, void *ClientData, const EOS_Lobby_OnQueryInvitesCallback CompletionDelegate) {
    __on_EOS_Lobby_QueryInvites(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_RejectInvite)(EOS_HLobby Handle, const EOS_Lobby_RejectInviteOptions *Options, void *ClientData, const EOS_Lobby_OnRejectInviteCallback CompletionDelegate) = NULL;
void EOS_Lobby_RejectInvite(EOS_HLobby Handle, const EOS_Lobby_RejectInviteOptions *Options, void *ClientData, const EOS_Lobby_OnRejectInviteCallback CompletionDelegate) {
    __on_EOS_Lobby_RejectInvite(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyJoinLobbyAccepted(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted(Handle, InId);
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyLobbyInviteAccepted(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted(Handle, InId);
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyInviteReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyLobbyInviteReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyLobbyInviteReceived(Handle, InId);
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived(Handle, InId);
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived(Handle, InId);
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyLobbyUpdateReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived(Handle, InId);
}

void (*__on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;
void EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged(EOS_HLobby Handle, EOS_NotificationId InId) {
    __on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged(Handle, InId);
}

void (*__on_EOS_Lobby_SendInvite)(EOS_HLobby Handle, const EOS_Lobby_SendInviteOptions *Options, void *ClientData, const EOS_Lobby_OnSendInviteCallback CompletionDelegate) = NULL;
void EOS_Lobby_SendInvite(EOS_HLobby Handle, const EOS_Lobby_SendInviteOptions *Options, void *ClientData, const EOS_Lobby_OnSendInviteCallback CompletionDelegate) {
    __on_EOS_Lobby_SendInvite(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Lobby_UpdateLobby)(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnUpdateLobbyCallback CompletionDelegate) = NULL;
void EOS_Lobby_UpdateLobby(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnUpdateLobbyCallback CompletionDelegate) {
    __on_EOS_Lobby_UpdateLobby(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Lobby_UpdateLobbyModification)(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyModificationOptions *Options, EOS_HLobbyModification *OutLobbyModificationHandle) = NULL;
EOS_EResult EOS_Lobby_UpdateLobbyModification(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyModificationOptions *Options, EOS_HLobbyModification *OutLobbyModificationHandle) {
    return __on_EOS_Lobby_UpdateLobbyModification(Handle, Options, OutLobbyModificationHandle);
}

EOS_EResult (*__on_EOS_Logging_SetCallback)(EOS_LogMessageFunc Callback) = NULL;
EOS_EResult EOS_Logging_SetCallback(EOS_LogMessageFunc Callback) {
    return __on_EOS_Logging_SetCallback(Callback);
}

EOS_EResult (*__on_EOS_Logging_SetLogLevel)(EOS_ELogCategory LogCategory, EOS_ELogLevel LogLevel) = NULL;
EOS_EResult EOS_Logging_SetLogLevel(EOS_ELogCategory LogCategory, EOS_ELogLevel LogLevel) {
    return __on_EOS_Logging_SetLogLevel(LogCategory, LogLevel);
}

EOS_EResult (*__on_EOS_Metrics_BeginPlayerSession)(EOS_HMetrics Handle, const EOS_Metrics_BeginPlayerSessionOptions *Options) = NULL;
EOS_EResult EOS_Metrics_BeginPlayerSession(EOS_HMetrics Handle, const EOS_Metrics_BeginPlayerSessionOptions *Options) {
    return __on_EOS_Metrics_BeginPlayerSession(Handle, Options);
}

EOS_EResult (*__on_EOS_Metrics_EndPlayerSession)(EOS_HMetrics Handle, const EOS_Metrics_EndPlayerSessionOptions *Options) = NULL;
EOS_EResult EOS_Metrics_EndPlayerSession(EOS_HMetrics Handle, const EOS_Metrics_EndPlayerSessionOptions *Options) {
    return __on_EOS_Metrics_EndPlayerSession(Handle, Options);
}

EOS_EResult (*__on_EOS_Mods_CopyModInfo)(EOS_HMods Handle, const EOS_Mods_CopyModInfoOptions *Options, EOS_Mods_ModInfo **OutEnumeratedMods) = NULL;
EOS_EResult EOS_Mods_CopyModInfo(EOS_HMods Handle, const EOS_Mods_CopyModInfoOptions *Options, EOS_Mods_ModInfo **OutEnumeratedMods) {
    return __on_EOS_Mods_CopyModInfo(Handle, Options, OutEnumeratedMods);
}

void (*__on_EOS_Mods_EnumerateMods)(EOS_HMods Handle, const EOS_Mods_EnumerateModsOptions *Options, void *ClientData, const EOS_Mods_OnEnumerateModsCallback CompletionDelegate) = NULL;
void EOS_Mods_EnumerateMods(EOS_HMods Handle, const EOS_Mods_EnumerateModsOptions *Options, void *ClientData, const EOS_Mods_OnEnumerateModsCallback CompletionDelegate) {
    __on_EOS_Mods_EnumerateMods(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Mods_InstallMod)(EOS_HMods Handle, const EOS_Mods_InstallModOptions *Options, void *ClientData, const EOS_Mods_OnInstallModCallback CompletionDelegate) = NULL;
void EOS_Mods_InstallMod(EOS_HMods Handle, const EOS_Mods_InstallModOptions *Options, void *ClientData, const EOS_Mods_OnInstallModCallback CompletionDelegate) {
    __on_EOS_Mods_InstallMod(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Mods_ModInfo_Release)(EOS_Mods_ModInfo *ModInfo) = NULL;
void EOS_Mods_ModInfo_Release(EOS_Mods_ModInfo *ModInfo) {
    __on_EOS_Mods_ModInfo_Release(ModInfo);
}

void (*__on_EOS_Mods_UninstallMod)(EOS_HMods Handle, const EOS_Mods_UninstallModOptions *Options, void *ClientData, const EOS_Mods_OnUninstallModCallback CompletionDelegate) = NULL;
void EOS_Mods_UninstallMod(EOS_HMods Handle, const EOS_Mods_UninstallModOptions *Options, void *ClientData, const EOS_Mods_OnUninstallModCallback CompletionDelegate) {
    __on_EOS_Mods_UninstallMod(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Mods_UpdateMod)(EOS_HMods Handle, const EOS_Mods_UpdateModOptions *Options, void *ClientData, const EOS_Mods_OnUpdateModCallback CompletionDelegate) = NULL;
void EOS_Mods_UpdateMod(EOS_HMods Handle, const EOS_Mods_UpdateModOptions *Options, void *ClientData, const EOS_Mods_OnUpdateModCallback CompletionDelegate) {
    __on_EOS_Mods_UpdateMod(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_P2P_AcceptConnection)(EOS_HP2P Handle, const EOS_P2P_AcceptConnectionOptions *Options) = NULL;
EOS_EResult EOS_P2P_AcceptConnection(EOS_HP2P Handle, const EOS_P2P_AcceptConnectionOptions *Options) {
    return __on_EOS_P2P_AcceptConnection(Handle, Options);
}

EOS_NotificationId (*__on_EOS_P2P_AddNotifyIncomingPacketQueueFull)(EOS_HP2P Handle, const EOS_P2P_AddNotifyIncomingPacketQueueFullOptions *Options, void *ClientData, EOS_P2P_OnIncomingPacketQueueFullCallback IncomingPacketQueueFullHandler) = NULL;
EOS_NotificationId EOS_P2P_AddNotifyIncomingPacketQueueFull(EOS_HP2P Handle, const EOS_P2P_AddNotifyIncomingPacketQueueFullOptions *Options, void *ClientData, EOS_P2P_OnIncomingPacketQueueFullCallback IncomingPacketQueueFullHandler) {
    return __on_EOS_P2P_AddNotifyIncomingPacketQueueFull(Handle, Options, ClientData, IncomingPacketQueueFullHandler);
}

EOS_NotificationId (*__on_EOS_P2P_AddNotifyPeerConnectionClosed)(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionClosedOptions *Options, void *ClientData, EOS_P2P_OnRemoteConnectionClosedCallback ConnectionClosedHandler) = NULL;
EOS_NotificationId EOS_P2P_AddNotifyPeerConnectionClosed(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionClosedOptions *Options, void *ClientData, EOS_P2P_OnRemoteConnectionClosedCallback ConnectionClosedHandler) {
    return __on_EOS_P2P_AddNotifyPeerConnectionClosed(Handle, Options, ClientData, ConnectionClosedHandler);
}

EOS_NotificationId (*__on_EOS_P2P_AddNotifyPeerConnectionRequest)(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionRequestOptions *Options, void *ClientData, EOS_P2P_OnIncomingConnectionRequestCallback ConnectionRequestHandler) = NULL;
EOS_NotificationId EOS_P2P_AddNotifyPeerConnectionRequest(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionRequestOptions *Options, void *ClientData, EOS_P2P_OnIncomingConnectionRequestCallback ConnectionRequestHandler) {
    return __on_EOS_P2P_AddNotifyPeerConnectionRequest(Handle, Options, ClientData, ConnectionRequestHandler);
}

EOS_EResult (*__on_EOS_P2P_CloseConnection)(EOS_HP2P Handle, const EOS_P2P_CloseConnectionOptions *Options) = NULL;
EOS_EResult EOS_P2P_CloseConnection(EOS_HP2P Handle, const EOS_P2P_CloseConnectionOptions *Options) {
    return __on_EOS_P2P_CloseConnection(Handle, Options);
}

EOS_EResult (*__on_EOS_P2P_CloseConnections)(EOS_HP2P Handle, const EOS_P2P_CloseConnectionsOptions *Options) = NULL;
EOS_EResult EOS_P2P_CloseConnections(EOS_HP2P Handle, const EOS_P2P_CloseConnectionsOptions *Options) {
    return __on_EOS_P2P_CloseConnections(Handle, Options);
}

EOS_EResult (*__on_EOS_P2P_GetNATType)(EOS_HP2P Handle, const EOS_P2P_GetNATTypeOptions *Options, EOS_ENATType *OutNATType) = NULL;
EOS_EResult EOS_P2P_GetNATType(EOS_HP2P Handle, const EOS_P2P_GetNATTypeOptions *Options, EOS_ENATType *OutNATType) {
    return __on_EOS_P2P_GetNATType(Handle, Options, OutNATType);
}

EOS_EResult (*__on_EOS_P2P_GetNextReceivedPacketSize)(EOS_HP2P Handle, const EOS_P2P_GetNextReceivedPacketSizeOptions *Options, uint32_t *OutPacketSizeBytes) = NULL;
EOS_EResult EOS_P2P_GetNextReceivedPacketSize(EOS_HP2P Handle, const EOS_P2P_GetNextReceivedPacketSizeOptions *Options, uint32_t *OutPacketSizeBytes) {
    return __on_EOS_P2P_GetNextReceivedPacketSize(Handle, Options, OutPacketSizeBytes);
}

EOS_EResult (*__on_EOS_P2P_GetPacketQueueInfo)(EOS_HP2P Handle, const EOS_P2P_GetPacketQueueInfoOptions *Options, EOS_P2P_PacketQueueInfo *OutPacketQueueInfo) = NULL;
EOS_EResult EOS_P2P_GetPacketQueueInfo(EOS_HP2P Handle, const EOS_P2P_GetPacketQueueInfoOptions *Options, EOS_P2P_PacketQueueInfo *OutPacketQueueInfo) {
    return __on_EOS_P2P_GetPacketQueueInfo(Handle, Options, OutPacketQueueInfo);
}

EOS_EResult (*__on_EOS_P2P_GetPortRange)(EOS_HP2P Handle, const EOS_P2P_GetPortRangeOptions *Options, uint16_t *OutPort, uint16_t *OutNumAdditionalPortsToTry) = NULL;
EOS_EResult EOS_P2P_GetPortRange(EOS_HP2P Handle, const EOS_P2P_GetPortRangeOptions *Options, uint16_t *OutPort, uint16_t *OutNumAdditionalPortsToTry) {
    return __on_EOS_P2P_GetPortRange(Handle, Options, OutPort, OutNumAdditionalPortsToTry);
}

EOS_EResult (*__on_EOS_P2P_GetRelayControl)(EOS_HP2P Handle, const EOS_P2P_GetRelayControlOptions *Options, EOS_ERelayControl *OutRelayControl) = NULL;
EOS_EResult EOS_P2P_GetRelayControl(EOS_HP2P Handle, const EOS_P2P_GetRelayControlOptions *Options, EOS_ERelayControl *OutRelayControl) {
    return __on_EOS_P2P_GetRelayControl(Handle, Options, OutRelayControl);
}

void (*__on_EOS_P2P_QueryNATType)(EOS_HP2P Handle, const EOS_P2P_QueryNATTypeOptions *Options, void *ClientData, const EOS_P2P_OnQueryNATTypeCompleteCallback CompletionDelegate) = NULL;
void EOS_P2P_QueryNATType(EOS_HP2P Handle, const EOS_P2P_QueryNATTypeOptions *Options, void *ClientData, const EOS_P2P_OnQueryNATTypeCompleteCallback CompletionDelegate) {
    __on_EOS_P2P_QueryNATType(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_P2P_ReceivePacket)(EOS_HP2P Handle, const EOS_P2P_ReceivePacketOptions *Options, EOS_ProductUserId *OutPeerId, EOS_P2P_SocketId *OutSocketId, uint8_t *OutChannel, void *OutData, uint32_t *OutBytesWritten) = NULL;
EOS_EResult EOS_P2P_ReceivePacket(EOS_HP2P Handle, const EOS_P2P_ReceivePacketOptions *Options, EOS_ProductUserId *OutPeerId, EOS_P2P_SocketId *OutSocketId, uint8_t *OutChannel, void *OutData, uint32_t *OutBytesWritten) {
    return __on_EOS_P2P_ReceivePacket(Handle, Options, OutPeerId, OutSocketId, OutChannel, OutData, OutBytesWritten);
}

void (*__on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull)(EOS_HP2P Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_P2P_RemoveNotifyIncomingPacketQueueFull(EOS_HP2P Handle, EOS_NotificationId NotificationId) {
    __on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull(Handle, NotificationId);
}

void (*__on_EOS_P2P_RemoveNotifyPeerConnectionClosed)(EOS_HP2P Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_P2P_RemoveNotifyPeerConnectionClosed(EOS_HP2P Handle, EOS_NotificationId NotificationId) {
    __on_EOS_P2P_RemoveNotifyPeerConnectionClosed(Handle, NotificationId);
}

void (*__on_EOS_P2P_RemoveNotifyPeerConnectionRequest)(EOS_HP2P Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_P2P_RemoveNotifyPeerConnectionRequest(EOS_HP2P Handle, EOS_NotificationId NotificationId) {
    __on_EOS_P2P_RemoveNotifyPeerConnectionRequest(Handle, NotificationId);
}

EOS_EResult (*__on_EOS_P2P_SendPacket)(EOS_HP2P Handle, const EOS_P2P_SendPacketOptions *Options) = NULL;
EOS_EResult EOS_P2P_SendPacket(EOS_HP2P Handle, const EOS_P2P_SendPacketOptions *Options) {
    return __on_EOS_P2P_SendPacket(Handle, Options);
}

EOS_EResult (*__on_EOS_P2P_SetPacketQueueSize)(EOS_HP2P Handle, const EOS_P2P_SetPacketQueueSizeOptions *Options) = NULL;
EOS_EResult EOS_P2P_SetPacketQueueSize(EOS_HP2P Handle, const EOS_P2P_SetPacketQueueSizeOptions *Options) {
    return __on_EOS_P2P_SetPacketQueueSize(Handle, Options);
}

EOS_EResult (*__on_EOS_P2P_SetPortRange)(EOS_HP2P Handle, const EOS_P2P_SetPortRangeOptions *Options) = NULL;
EOS_EResult EOS_P2P_SetPortRange(EOS_HP2P Handle, const EOS_P2P_SetPortRangeOptions *Options) {
    return __on_EOS_P2P_SetPortRange(Handle, Options);
}

EOS_EResult (*__on_EOS_P2P_SetRelayControl)(EOS_HP2P Handle, const EOS_P2P_SetRelayControlOptions *Options) = NULL;
EOS_EResult EOS_P2P_SetRelayControl(EOS_HP2P Handle, const EOS_P2P_SetRelayControlOptions *Options) {
    return __on_EOS_P2P_SetRelayControl(Handle, Options);
}

EOS_EResult (*__on_EOS_Platform_CheckForLauncherAndRestart)(EOS_HPlatform Handle) = NULL;
EOS_EResult EOS_Platform_CheckForLauncherAndRestart(EOS_HPlatform Handle) {
    return __on_EOS_Platform_CheckForLauncherAndRestart(Handle);
}

EOS_HPlatform (*__on_EOS_Platform_Create)(const EOS_Platform_Options *Options) = NULL;
EOS_HPlatform EOS_Platform_Create(const EOS_Platform_Options *Options) {
    return __on_EOS_Platform_Create(Options);
}

EOS_HAchievements (*__on_EOS_Platform_GetAchievementsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HAchievements EOS_Platform_GetAchievementsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetAchievementsInterface(Handle);
}

EOS_EResult (*__on_EOS_Platform_GetActiveCountryCode)(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Platform_GetActiveCountryCode(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Platform_GetActiveCountryCode(Handle, LocalUserId, OutBuffer, InOutBufferLength);
}

EOS_EResult (*__on_EOS_Platform_GetActiveLocaleCode)(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Platform_GetActiveLocaleCode(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Platform_GetActiveLocaleCode(Handle, LocalUserId, OutBuffer, InOutBufferLength);
}

EOS_HAntiCheatClient (*__on_EOS_Platform_GetAntiCheatClientInterface)(EOS_HPlatform Handle) = NULL;
EOS_HAntiCheatClient EOS_Platform_GetAntiCheatClientInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetAntiCheatClientInterface(Handle);
}

EOS_HAntiCheatServer (*__on_EOS_Platform_GetAntiCheatServerInterface)(EOS_HPlatform Handle) = NULL;
EOS_HAntiCheatServer EOS_Platform_GetAntiCheatServerInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetAntiCheatServerInterface(Handle);
}

EOS_HAuth (*__on_EOS_Platform_GetAuthInterface)(EOS_HPlatform Handle) = NULL;
EOS_HAuth EOS_Platform_GetAuthInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetAuthInterface(Handle);
}

EOS_HConnect (*__on_EOS_Platform_GetConnectInterface)(EOS_HPlatform Handle) = NULL;
EOS_HConnect EOS_Platform_GetConnectInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetConnectInterface(Handle);
}

EOS_HEcom (*__on_EOS_Platform_GetEcomInterface)(EOS_HPlatform Handle) = NULL;
EOS_HEcom EOS_Platform_GetEcomInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetEcomInterface(Handle);
}

EOS_HFriends (*__on_EOS_Platform_GetFriendsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HFriends EOS_Platform_GetFriendsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetFriendsInterface(Handle);
}

EOS_HKWS (*__on_EOS_Platform_GetKWSInterface)(EOS_HPlatform Handle) = NULL;
EOS_HKWS EOS_Platform_GetKWSInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetKWSInterface(Handle);
}

EOS_HLeaderboards (*__on_EOS_Platform_GetLeaderboardsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HLeaderboards EOS_Platform_GetLeaderboardsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetLeaderboardsInterface(Handle);
}

EOS_HLobby (*__on_EOS_Platform_GetLobbyInterface)(EOS_HPlatform Handle) = NULL;
EOS_HLobby EOS_Platform_GetLobbyInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetLobbyInterface(Handle);
}

EOS_HMetrics (*__on_EOS_Platform_GetMetricsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HMetrics EOS_Platform_GetMetricsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetMetricsInterface(Handle);
}

EOS_HMods (*__on_EOS_Platform_GetModsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HMods EOS_Platform_GetModsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetModsInterface(Handle);
}

EOS_EResult (*__on_EOS_Platform_GetOverrideCountryCode)(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Platform_GetOverrideCountryCode(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Platform_GetOverrideCountryCode(Handle, OutBuffer, InOutBufferLength);
}

EOS_EResult (*__on_EOS_Platform_GetOverrideLocaleCode)(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Platform_GetOverrideLocaleCode(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Platform_GetOverrideLocaleCode(Handle, OutBuffer, InOutBufferLength);
}

EOS_HP2P (*__on_EOS_Platform_GetP2PInterface)(EOS_HPlatform Handle) = NULL;
EOS_HP2P EOS_Platform_GetP2PInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetP2PInterface(Handle);
}

EOS_HPlayerDataStorage (*__on_EOS_Platform_GetPlayerDataStorageInterface)(EOS_HPlatform Handle) = NULL;
EOS_HPlayerDataStorage EOS_Platform_GetPlayerDataStorageInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetPlayerDataStorageInterface(Handle);
}

EOS_HPresence (*__on_EOS_Platform_GetPresenceInterface)(EOS_HPlatform Handle) = NULL;
EOS_HPresence EOS_Platform_GetPresenceInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetPresenceInterface(Handle);
}

EOS_HRTCAdmin (*__on_EOS_Platform_GetRTCAdminInterface)(EOS_HPlatform Handle) = NULL;
EOS_HRTCAdmin EOS_Platform_GetRTCAdminInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetRTCAdminInterface(Handle);
}

EOS_HRTC (*__on_EOS_Platform_GetRTCInterface)(EOS_HPlatform Handle) = NULL;
EOS_HRTC EOS_Platform_GetRTCInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetRTCInterface(Handle);
}

EOS_HReports (*__on_EOS_Platform_GetReportsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HReports EOS_Platform_GetReportsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetReportsInterface(Handle);
}

EOS_HSanctions (*__on_EOS_Platform_GetSanctionsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HSanctions EOS_Platform_GetSanctionsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetSanctionsInterface(Handle);
}

EOS_HSessions (*__on_EOS_Platform_GetSessionsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HSessions EOS_Platform_GetSessionsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetSessionsInterface(Handle);
}

EOS_HStats (*__on_EOS_Platform_GetStatsInterface)(EOS_HPlatform Handle) = NULL;
EOS_HStats EOS_Platform_GetStatsInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetStatsInterface(Handle);
}

EOS_HTitleStorage (*__on_EOS_Platform_GetTitleStorageInterface)(EOS_HPlatform Handle) = NULL;
EOS_HTitleStorage EOS_Platform_GetTitleStorageInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetTitleStorageInterface(Handle);
}

EOS_HUI (*__on_EOS_Platform_GetUIInterface)(EOS_HPlatform Handle) = NULL;
EOS_HUI EOS_Platform_GetUIInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetUIInterface(Handle);
}

EOS_HUserInfo (*__on_EOS_Platform_GetUserInfoInterface)(EOS_HPlatform Handle) = NULL;
EOS_HUserInfo EOS_Platform_GetUserInfoInterface(EOS_HPlatform Handle) {
    return __on_EOS_Platform_GetUserInfoInterface(Handle);
}

void (*__on_EOS_Platform_Release)(EOS_HPlatform Handle) = NULL;
void EOS_Platform_Release(EOS_HPlatform Handle) {
    __on_EOS_Platform_Release(Handle);
}

EOS_EResult (*__on_EOS_Platform_SetOverrideCountryCode)(EOS_HPlatform Handle, const char *NewCountryCode) = NULL;
EOS_EResult EOS_Platform_SetOverrideCountryCode(EOS_HPlatform Handle, const char *NewCountryCode) {
    return __on_EOS_Platform_SetOverrideCountryCode(Handle, NewCountryCode);
}

EOS_EResult (*__on_EOS_Platform_SetOverrideLocaleCode)(EOS_HPlatform Handle, const char *NewLocaleCode) = NULL;
EOS_EResult EOS_Platform_SetOverrideLocaleCode(EOS_HPlatform Handle, const char *NewLocaleCode) {
    return __on_EOS_Platform_SetOverrideLocaleCode(Handle, NewLocaleCode);
}

void (*__on_EOS_Platform_Tick)(EOS_HPlatform Handle) = NULL;
void EOS_Platform_Tick(EOS_HPlatform Handle) {
    __on_EOS_Platform_Tick(Handle);
}

EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest)(EOS_HPlayerDataStorageFileTransferRequest Handle) = NULL;
EOS_EResult EOS_PlayerDataStorageFileTransferRequest_CancelRequest(EOS_HPlayerDataStorageFileTransferRequest Handle) {
    return __on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest(Handle);
}

EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState)(EOS_HPlayerDataStorageFileTransferRequest Handle) = NULL;
EOS_EResult EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState(EOS_HPlayerDataStorageFileTransferRequest Handle) {
    return __on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState(Handle);
}

EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_GetFilename)(EOS_HPlayerDataStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) = NULL;
EOS_EResult EOS_PlayerDataStorageFileTransferRequest_GetFilename(EOS_HPlayerDataStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) {
    return __on_EOS_PlayerDataStorageFileTransferRequest_GetFilename(Handle, FilenameStringBufferSizeBytes, OutStringBuffer, OutStringLength);
}

void (*__on_EOS_PlayerDataStorageFileTransferRequest_Release)(EOS_HPlayerDataStorageFileTransferRequest PlayerDataStorageFileTransferHandle) = NULL;
void EOS_PlayerDataStorageFileTransferRequest_Release(EOS_HPlayerDataStorageFileTransferRequest PlayerDataStorageFileTransferHandle) {
    __on_EOS_PlayerDataStorageFileTransferRequest_Release(PlayerDataStorageFileTransferHandle);
}

EOS_EResult (*__on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataAtIndexOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) = NULL;
EOS_EResult EOS_PlayerDataStorage_CopyFileMetadataAtIndex(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataAtIndexOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) {
    return __on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex(Handle, CopyFileMetadataOptions, OutMetadata);
}

EOS_EResult (*__on_EOS_PlayerDataStorage_CopyFileMetadataByFilename)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataByFilenameOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) = NULL;
EOS_EResult EOS_PlayerDataStorage_CopyFileMetadataByFilename(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataByFilenameOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) {
    return __on_EOS_PlayerDataStorage_CopyFileMetadataByFilename(Handle, CopyFileMetadataOptions, OutMetadata);
}

EOS_EResult (*__on_EOS_PlayerDataStorage_DeleteCache)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_PlayerDataStorage_OnDeleteCacheCompleteCallback CompletionCallback) = NULL;
EOS_EResult EOS_PlayerDataStorage_DeleteCache(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_PlayerDataStorage_OnDeleteCacheCompleteCallback CompletionCallback) {
    return __on_EOS_PlayerDataStorage_DeleteCache(Handle, Options, ClientData, CompletionCallback);
}

void (*__on_EOS_PlayerDataStorage_DeleteFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteFileOptions *DeleteOptions, void *ClientData, const EOS_PlayerDataStorage_OnDeleteFileCompleteCallback CompletionCallback) = NULL;
void EOS_PlayerDataStorage_DeleteFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteFileOptions *DeleteOptions, void *ClientData, const EOS_PlayerDataStorage_OnDeleteFileCompleteCallback CompletionCallback) {
    __on_EOS_PlayerDataStorage_DeleteFile(Handle, DeleteOptions, ClientData, CompletionCallback);
}

void (*__on_EOS_PlayerDataStorage_DuplicateFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DuplicateFileOptions *DuplicateOptions, void *ClientData, const EOS_PlayerDataStorage_OnDuplicateFileCompleteCallback CompletionCallback) = NULL;
void EOS_PlayerDataStorage_DuplicateFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DuplicateFileOptions *DuplicateOptions, void *ClientData, const EOS_PlayerDataStorage_OnDuplicateFileCompleteCallback CompletionCallback) {
    __on_EOS_PlayerDataStorage_DuplicateFile(Handle, DuplicateOptions, ClientData, CompletionCallback);
}

void (*__on_EOS_PlayerDataStorage_FileMetadata_Release)(EOS_PlayerDataStorage_FileMetadata *FileMetadata) = NULL;
void EOS_PlayerDataStorage_FileMetadata_Release(EOS_PlayerDataStorage_FileMetadata *FileMetadata) {
    __on_EOS_PlayerDataStorage_FileMetadata_Release(FileMetadata);
}

EOS_EResult (*__on_EOS_PlayerDataStorage_GetFileMetadataCount)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_GetFileMetadataCountOptions *GetFileMetadataCountOptions, int32_t *OutFileMetadataCount) = NULL;
EOS_EResult EOS_PlayerDataStorage_GetFileMetadataCount(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_GetFileMetadataCountOptions *GetFileMetadataCountOptions, int32_t *OutFileMetadataCount) {
    return __on_EOS_PlayerDataStorage_GetFileMetadataCount(Handle, GetFileMetadataCountOptions, OutFileMetadataCount);
}

void (*__on_EOS_PlayerDataStorage_QueryFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileOptions *QueryFileOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileCompleteCallback CompletionCallback) = NULL;
void EOS_PlayerDataStorage_QueryFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileOptions *QueryFileOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileCompleteCallback CompletionCallback) {
    __on_EOS_PlayerDataStorage_QueryFile(Handle, QueryFileOptions, ClientData, CompletionCallback);
}

void (*__on_EOS_PlayerDataStorage_QueryFileList)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileListOptions *QueryFileListOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileListCompleteCallback CompletionCallback) = NULL;
void EOS_PlayerDataStorage_QueryFileList(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileListOptions *QueryFileListOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileListCompleteCallback CompletionCallback) {
    __on_EOS_PlayerDataStorage_QueryFileList(Handle, QueryFileListOptions, ClientData, CompletionCallback);
}

EOS_HPlayerDataStorageFileTransferRequest (*__on_EOS_PlayerDataStorage_ReadFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_ReadFileOptions *ReadOptions, void *ClientData, const EOS_PlayerDataStorage_OnReadFileCompleteCallback CompletionCallback) = NULL;
EOS_HPlayerDataStorageFileTransferRequest EOS_PlayerDataStorage_ReadFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_ReadFileOptions *ReadOptions, void *ClientData, const EOS_PlayerDataStorage_OnReadFileCompleteCallback CompletionCallback) {
    return __on_EOS_PlayerDataStorage_ReadFile(Handle, ReadOptions, ClientData, CompletionCallback);
}

EOS_HPlayerDataStorageFileTransferRequest (*__on_EOS_PlayerDataStorage_WriteFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_WriteFileOptions *WriteOptions, void *ClientData, const EOS_PlayerDataStorage_OnWriteFileCompleteCallback CompletionCallback) = NULL;
EOS_HPlayerDataStorageFileTransferRequest EOS_PlayerDataStorage_WriteFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_WriteFileOptions *WriteOptions, void *ClientData, const EOS_PlayerDataStorage_OnWriteFileCompleteCallback CompletionCallback) {
    return __on_EOS_PlayerDataStorage_WriteFile(Handle, WriteOptions, ClientData, CompletionCallback);
}

EOS_EResult (*__on_EOS_PresenceModification_DeleteData)(EOS_HPresenceModification Handle, const EOS_PresenceModification_DeleteDataOptions *Options) = NULL;
EOS_EResult EOS_PresenceModification_DeleteData(EOS_HPresenceModification Handle, const EOS_PresenceModification_DeleteDataOptions *Options) {
    return __on_EOS_PresenceModification_DeleteData(Handle, Options);
}

void (*__on_EOS_PresenceModification_Release)(EOS_HPresenceModification PresenceModificationHandle) = NULL;
void EOS_PresenceModification_Release(EOS_HPresenceModification PresenceModificationHandle) {
    __on_EOS_PresenceModification_Release(PresenceModificationHandle);
}

EOS_EResult (*__on_EOS_PresenceModification_SetData)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetDataOptions *Options) = NULL;
EOS_EResult EOS_PresenceModification_SetData(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetDataOptions *Options) {
    return __on_EOS_PresenceModification_SetData(Handle, Options);
}

EOS_EResult (*__on_EOS_PresenceModification_SetJoinInfo)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetJoinInfoOptions *Options) = NULL;
EOS_EResult EOS_PresenceModification_SetJoinInfo(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetJoinInfoOptions *Options) {
    return __on_EOS_PresenceModification_SetJoinInfo(Handle, Options);
}

EOS_EResult (*__on_EOS_PresenceModification_SetRawRichText)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetRawRichTextOptions *Options) = NULL;
EOS_EResult EOS_PresenceModification_SetRawRichText(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetRawRichTextOptions *Options) {
    return __on_EOS_PresenceModification_SetRawRichText(Handle, Options);
}

EOS_EResult (*__on_EOS_PresenceModification_SetStatus)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetStatusOptions *Options) = NULL;
EOS_EResult EOS_PresenceModification_SetStatus(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetStatusOptions *Options) {
    return __on_EOS_PresenceModification_SetStatus(Handle, Options);
}

EOS_NotificationId (*__on_EOS_Presence_AddNotifyJoinGameAccepted)(EOS_HPresence Handle, const EOS_Presence_AddNotifyJoinGameAcceptedOptions *Options, void *ClientData, const EOS_Presence_OnJoinGameAcceptedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Presence_AddNotifyJoinGameAccepted(EOS_HPresence Handle, const EOS_Presence_AddNotifyJoinGameAcceptedOptions *Options, void *ClientData, const EOS_Presence_OnJoinGameAcceptedCallback NotificationFn) {
    return __on_EOS_Presence_AddNotifyJoinGameAccepted(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Presence_AddNotifyOnPresenceChanged)(EOS_HPresence Handle, const EOS_Presence_AddNotifyOnPresenceChangedOptions *Options, void *ClientData, const EOS_Presence_OnPresenceChangedCallback NotificationHandler) = NULL;
EOS_NotificationId EOS_Presence_AddNotifyOnPresenceChanged(EOS_HPresence Handle, const EOS_Presence_AddNotifyOnPresenceChangedOptions *Options, void *ClientData, const EOS_Presence_OnPresenceChangedCallback NotificationHandler) {
    return __on_EOS_Presence_AddNotifyOnPresenceChanged(Handle, Options, ClientData, NotificationHandler);
}

EOS_EResult (*__on_EOS_Presence_CopyPresence)(EOS_HPresence Handle, const EOS_Presence_CopyPresenceOptions *Options, EOS_Presence_Info **OutPresence) = NULL;
EOS_EResult EOS_Presence_CopyPresence(EOS_HPresence Handle, const EOS_Presence_CopyPresenceOptions *Options, EOS_Presence_Info **OutPresence) {
    return __on_EOS_Presence_CopyPresence(Handle, Options, OutPresence);
}

EOS_EResult (*__on_EOS_Presence_CreatePresenceModification)(EOS_HPresence Handle, const EOS_Presence_CreatePresenceModificationOptions *Options, EOS_HPresenceModification *OutPresenceModificationHandle) = NULL;
EOS_EResult EOS_Presence_CreatePresenceModification(EOS_HPresence Handle, const EOS_Presence_CreatePresenceModificationOptions *Options, EOS_HPresenceModification *OutPresenceModificationHandle) {
    return __on_EOS_Presence_CreatePresenceModification(Handle, Options, OutPresenceModificationHandle);
}

EOS_EResult (*__on_EOS_Presence_GetJoinInfo)(EOS_HPresence Handle, const EOS_Presence_GetJoinInfoOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Presence_GetJoinInfo(EOS_HPresence Handle, const EOS_Presence_GetJoinInfoOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Presence_GetJoinInfo(Handle, Options, OutBuffer, InOutBufferLength);
}

EOS_Bool (*__on_EOS_Presence_HasPresence)(EOS_HPresence Handle, const EOS_Presence_HasPresenceOptions *Options) = NULL;
EOS_Bool EOS_Presence_HasPresence(EOS_HPresence Handle, const EOS_Presence_HasPresenceOptions *Options) {
    return __on_EOS_Presence_HasPresence(Handle, Options);
}

void (*__on_EOS_Presence_Info_Release)(EOS_Presence_Info *PresenceInfo) = NULL;
void EOS_Presence_Info_Release(EOS_Presence_Info *PresenceInfo) {
    __on_EOS_Presence_Info_Release(PresenceInfo);
}

void (*__on_EOS_Presence_QueryPresence)(EOS_HPresence Handle, const EOS_Presence_QueryPresenceOptions *Options, void *ClientData, const EOS_Presence_OnQueryPresenceCompleteCallback CompletionDelegate) = NULL;
void EOS_Presence_QueryPresence(EOS_HPresence Handle, const EOS_Presence_QueryPresenceOptions *Options, void *ClientData, const EOS_Presence_OnQueryPresenceCompleteCallback CompletionDelegate) {
    __on_EOS_Presence_QueryPresence(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Presence_RemoveNotifyJoinGameAccepted)(EOS_HPresence Handle, EOS_NotificationId InId) = NULL;
void EOS_Presence_RemoveNotifyJoinGameAccepted(EOS_HPresence Handle, EOS_NotificationId InId) {
    __on_EOS_Presence_RemoveNotifyJoinGameAccepted(Handle, InId);
}

void (*__on_EOS_Presence_RemoveNotifyOnPresenceChanged)(EOS_HPresence Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_Presence_RemoveNotifyOnPresenceChanged(EOS_HPresence Handle, EOS_NotificationId NotificationId) {
    __on_EOS_Presence_RemoveNotifyOnPresenceChanged(Handle, NotificationId);
}

void (*__on_EOS_Presence_SetPresence)(EOS_HPresence Handle, const EOS_Presence_SetPresenceOptions *Options, void *ClientData, const EOS_Presence_SetPresenceCompleteCallback CompletionDelegate) = NULL;
void EOS_Presence_SetPresence(EOS_HPresence Handle, const EOS_Presence_SetPresenceOptions *Options, void *ClientData, const EOS_Presence_SetPresenceCompleteCallback CompletionDelegate) {
    __on_EOS_Presence_SetPresence(Handle, Options, ClientData, CompletionDelegate);
}

EOS_ProductUserId (*__on_EOS_ProductUserId_FromString)(const char *ProductUserIdString) = NULL;
EOS_ProductUserId EOS_ProductUserId_FromString(const char *ProductUserIdString) {
    return __on_EOS_ProductUserId_FromString(ProductUserIdString);
}

EOS_Bool (*__on_EOS_ProductUserId_IsValid)(EOS_ProductUserId AccountId) = NULL;
EOS_Bool EOS_ProductUserId_IsValid(EOS_ProductUserId AccountId) {
    return __on_EOS_ProductUserId_IsValid(AccountId);
}

EOS_EResult (*__on_EOS_ProductUserId_ToString)(EOS_ProductUserId AccountId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_ProductUserId_ToString(EOS_ProductUserId AccountId, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_ProductUserId_ToString(AccountId, OutBuffer, InOutBufferLength);
}

EOS_EResult (*__on_EOS_RTCAdmin_CopyUserTokenByIndex)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByIndexOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) = NULL;
EOS_EResult EOS_RTCAdmin_CopyUserTokenByIndex(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByIndexOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) {
    return __on_EOS_RTCAdmin_CopyUserTokenByIndex(Handle, Options, OutUserToken);
}

EOS_EResult (*__on_EOS_RTCAdmin_CopyUserTokenByUserId)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByUserIdOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) = NULL;
EOS_EResult EOS_RTCAdmin_CopyUserTokenByUserId(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByUserIdOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) {
    return __on_EOS_RTCAdmin_CopyUserTokenByUserId(Handle, Options, OutUserToken);
}

void (*__on_EOS_RTCAdmin_Kick)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_KickOptions *Options, void *ClientData, const EOS_RTCAdmin_OnKickCompleteCallback CompletionDelegate) = NULL;
void EOS_RTCAdmin_Kick(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_KickOptions *Options, void *ClientData, const EOS_RTCAdmin_OnKickCompleteCallback CompletionDelegate) {
    __on_EOS_RTCAdmin_Kick(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTCAdmin_QueryJoinRoomToken)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_QueryJoinRoomTokenOptions *Options, void *ClientData, const EOS_RTCAdmin_OnQueryJoinRoomTokenCompleteCallback CompletionDelegate) = NULL;
void EOS_RTCAdmin_QueryJoinRoomToken(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_QueryJoinRoomTokenOptions *Options, void *ClientData, const EOS_RTCAdmin_OnQueryJoinRoomTokenCompleteCallback CompletionDelegate) {
    __on_EOS_RTCAdmin_QueryJoinRoomToken(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTCAdmin_SetParticipantHardMute)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_SetParticipantHardMuteOptions *Options, void *ClientData, const EOS_RTCAdmin_OnSetParticipantHardMuteCompleteCallback CompletionDelegate) = NULL;
void EOS_RTCAdmin_SetParticipantHardMute(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_SetParticipantHardMuteOptions *Options, void *ClientData, const EOS_RTCAdmin_OnSetParticipantHardMuteCompleteCallback CompletionDelegate) {
    __on_EOS_RTCAdmin_SetParticipantHardMute(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTCAdmin_UserToken_Release)(EOS_RTCAdmin_UserToken *UserToken) = NULL;
void EOS_RTCAdmin_UserToken_Release(EOS_RTCAdmin_UserToken *UserToken) {
    __on_EOS_RTCAdmin_UserToken_Release(UserToken);
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioBeforeRender)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeRenderOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeRenderCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTCAudio_AddNotifyAudioBeforeRender(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeRenderOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeRenderCallback CompletionDelegate) {
    return __on_EOS_RTCAudio_AddNotifyAudioBeforeRender(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioBeforeSend)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeSendOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeSendCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTCAudio_AddNotifyAudioBeforeSend(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeSendOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeSendCallback CompletionDelegate) {
    return __on_EOS_RTCAudio_AddNotifyAudioBeforeSend(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioDevicesChanged)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioDevicesChangedOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioDevicesChangedCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTCAudio_AddNotifyAudioDevicesChanged(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioDevicesChangedOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioDevicesChangedCallback CompletionDelegate) {
    return __on_EOS_RTCAudio_AddNotifyAudioDevicesChanged(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioInputState)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioInputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioInputStateCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTCAudio_AddNotifyAudioInputState(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioInputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioInputStateCallback CompletionDelegate) {
    return __on_EOS_RTCAudio_AddNotifyAudioInputState(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioOutputState)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioOutputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioOutputStateCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTCAudio_AddNotifyAudioOutputState(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioOutputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioOutputStateCallback CompletionDelegate) {
    return __on_EOS_RTCAudio_AddNotifyAudioOutputState(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyParticipantUpdated)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyParticipantUpdatedOptions *Options, void *ClientData, const EOS_RTCAudio_OnParticipantUpdatedCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTCAudio_AddNotifyParticipantUpdated(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyParticipantUpdatedOptions *Options, void *ClientData, const EOS_RTCAudio_OnParticipantUpdatedCallback CompletionDelegate) {
    return __on_EOS_RTCAudio_AddNotifyParticipantUpdated(Handle, Options, ClientData, CompletionDelegate);
}

const EOS_RTCAudio_AudioInputDeviceInfo *(*__on_EOS_RTCAudio_GetAudioInputDeviceByIndex)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDeviceByIndexOptions *Options) = NULL;
const EOS_RTCAudio_AudioInputDeviceInfo *EOS_RTCAudio_GetAudioInputDeviceByIndex(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDeviceByIndexOptions *Options) {
    return __on_EOS_RTCAudio_GetAudioInputDeviceByIndex(Handle, Options);
}

uint32_t (*__on_EOS_RTCAudio_GetAudioInputDevicesCount)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDevicesCountOptions *Options) = NULL;
uint32_t EOS_RTCAudio_GetAudioInputDevicesCount(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDevicesCountOptions *Options) {
    return __on_EOS_RTCAudio_GetAudioInputDevicesCount(Handle, Options);
}

const EOS_RTCAudio_AudioOutputDeviceInfo *(*__on_EOS_RTCAudio_GetAudioOutputDeviceByIndex)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDeviceByIndexOptions *Options) = NULL;
const EOS_RTCAudio_AudioOutputDeviceInfo *EOS_RTCAudio_GetAudioOutputDeviceByIndex(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDeviceByIndexOptions *Options) {
    return __on_EOS_RTCAudio_GetAudioOutputDeviceByIndex(Handle, Options);
}

uint32_t (*__on_EOS_RTCAudio_GetAudioOutputDevicesCount)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDevicesCountOptions *Options) = NULL;
uint32_t EOS_RTCAudio_GetAudioOutputDevicesCount(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDevicesCountOptions *Options) {
    return __on_EOS_RTCAudio_GetAudioOutputDevicesCount(Handle, Options);
}

EOS_EResult (*__on_EOS_RTCAudio_RegisterPlatformAudioUser)(EOS_HRTCAudio Handle, const EOS_RTCAudio_RegisterPlatformAudioUserOptions *Options) = NULL;
EOS_EResult EOS_RTCAudio_RegisterPlatformAudioUser(EOS_HRTCAudio Handle, const EOS_RTCAudio_RegisterPlatformAudioUserOptions *Options) {
    return __on_EOS_RTCAudio_RegisterPlatformAudioUser(Handle, Options);
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTCAudio_RemoveNotifyAudioBeforeRender(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender(Handle, NotificationId);
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTCAudio_RemoveNotifyAudioBeforeSend(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend(Handle, NotificationId);
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTCAudio_RemoveNotifyAudioDevicesChanged(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged(Handle, NotificationId);
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioInputState)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTCAudio_RemoveNotifyAudioInputState(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTCAudio_RemoveNotifyAudioInputState(Handle, NotificationId);
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioOutputState)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTCAudio_RemoveNotifyAudioOutputState(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTCAudio_RemoveNotifyAudioOutputState(Handle, NotificationId);
}

void (*__on_EOS_RTCAudio_RemoveNotifyParticipantUpdated)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTCAudio_RemoveNotifyParticipantUpdated(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTCAudio_RemoveNotifyParticipantUpdated(Handle, NotificationId);
}

EOS_EResult (*__on_EOS_RTCAudio_SendAudio)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SendAudioOptions *Options) = NULL;
EOS_EResult EOS_RTCAudio_SendAudio(EOS_HRTCAudio Handle, const EOS_RTCAudio_SendAudioOptions *Options) {
    return __on_EOS_RTCAudio_SendAudio(Handle, Options);
}

EOS_EResult (*__on_EOS_RTCAudio_SetAudioInputSettings)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioInputSettingsOptions *Options) = NULL;
EOS_EResult EOS_RTCAudio_SetAudioInputSettings(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioInputSettingsOptions *Options) {
    return __on_EOS_RTCAudio_SetAudioInputSettings(Handle, Options);
}

EOS_EResult (*__on_EOS_RTCAudio_SetAudioOutputSettings)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioOutputSettingsOptions *Options) = NULL;
EOS_EResult EOS_RTCAudio_SetAudioOutputSettings(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioOutputSettingsOptions *Options) {
    return __on_EOS_RTCAudio_SetAudioOutputSettings(Handle, Options);
}

EOS_EResult (*__on_EOS_RTCAudio_UnregisterPlatformAudioUser)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UnregisterPlatformAudioUserOptions *Options) = NULL;
EOS_EResult EOS_RTCAudio_UnregisterPlatformAudioUser(EOS_HRTCAudio Handle, const EOS_RTCAudio_UnregisterPlatformAudioUserOptions *Options) {
    return __on_EOS_RTCAudio_UnregisterPlatformAudioUser(Handle, Options);
}

void (*__on_EOS_RTCAudio_UpdateReceiving)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateReceivingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateReceivingCallback CompletionDelegate) = NULL;
void EOS_RTCAudio_UpdateReceiving(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateReceivingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateReceivingCallback CompletionDelegate) {
    __on_EOS_RTCAudio_UpdateReceiving(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTCAudio_UpdateSending)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateSendingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateSendingCallback CompletionDelegate) = NULL;
void EOS_RTCAudio_UpdateSending(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateSendingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateSendingCallback CompletionDelegate) {
    __on_EOS_RTCAudio_UpdateSending(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTC_AddNotifyDisconnected)(EOS_HRTC Handle, EOS_RTC_AddNotifyDisconnectedOptions *Options, void *ClientData, const EOS_RTC_OnDisconnectedCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTC_AddNotifyDisconnected(EOS_HRTC Handle, EOS_RTC_AddNotifyDisconnectedOptions *Options, void *ClientData, const EOS_RTC_OnDisconnectedCallback CompletionDelegate) {
    return __on_EOS_RTC_AddNotifyDisconnected(Handle, Options, ClientData, CompletionDelegate);
}

EOS_NotificationId (*__on_EOS_RTC_AddNotifyParticipantStatusChanged)(EOS_HRTC Handle, EOS_RTC_AddNotifyParticipantStatusChangedOptions *Options, void *ClientData, const EOS_RTC_OnParticipantStatusChangedCallback CompletionDelegate) = NULL;
EOS_NotificationId EOS_RTC_AddNotifyParticipantStatusChanged(EOS_HRTC Handle, EOS_RTC_AddNotifyParticipantStatusChangedOptions *Options, void *ClientData, const EOS_RTC_OnParticipantStatusChangedCallback CompletionDelegate) {
    return __on_EOS_RTC_AddNotifyParticipantStatusChanged(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTC_BlockParticipant)(EOS_HRTC Handle, EOS_RTC_BlockParticipantOptions *Options, void *ClientData, const EOS_RTC_OnBlockParticipantCallback CompletionDelegate) = NULL;
void EOS_RTC_BlockParticipant(EOS_HRTC Handle, EOS_RTC_BlockParticipantOptions *Options, void *ClientData, const EOS_RTC_OnBlockParticipantCallback CompletionDelegate) {
    __on_EOS_RTC_BlockParticipant(Handle, Options, ClientData, CompletionDelegate);
}

EOS_HRTCAudio (*__on_EOS_RTC_GetAudioInterface)(EOS_HRTC Handle) = NULL;
EOS_HRTCAudio EOS_RTC_GetAudioInterface(EOS_HRTC Handle) {
    return __on_EOS_RTC_GetAudioInterface(Handle);
}

void (*__on_EOS_RTC_JoinRoom)(EOS_HRTC Handle, const EOS_RTC_JoinRoomOptions *Options, void *ClientData, const EOS_RTC_OnJoinRoomCallback CompletionDelegate) = NULL;
void EOS_RTC_JoinRoom(EOS_HRTC Handle, const EOS_RTC_JoinRoomOptions *Options, void *ClientData, const EOS_RTC_OnJoinRoomCallback CompletionDelegate) {
    __on_EOS_RTC_JoinRoom(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTC_LeaveRoom)(EOS_HRTC Handle, const EOS_RTC_LeaveRoomOptions *Options, void *ClientData, const EOS_RTC_OnLeaveRoomCallback CompletionDelegate) = NULL;
void EOS_RTC_LeaveRoom(EOS_HRTC Handle, const EOS_RTC_LeaveRoomOptions *Options, void *ClientData, const EOS_RTC_OnLeaveRoomCallback CompletionDelegate) {
    __on_EOS_RTC_LeaveRoom(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_RTC_RemoveNotifyDisconnected)(EOS_HRTC Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTC_RemoveNotifyDisconnected(EOS_HRTC Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTC_RemoveNotifyDisconnected(Handle, NotificationId);
}

void (*__on_EOS_RTC_RemoveNotifyParticipantStatusChanged)(EOS_HRTC Handle, EOS_NotificationId NotificationId) = NULL;
void EOS_RTC_RemoveNotifyParticipantStatusChanged(EOS_HRTC Handle, EOS_NotificationId NotificationId) {
    __on_EOS_RTC_RemoveNotifyParticipantStatusChanged(Handle, NotificationId);
}

void (*__on_EOS_Reports_SendPlayerBehaviorReport)(EOS_HReports Handle, const EOS_Reports_SendPlayerBehaviorReportOptions *Options, void *ClientData, const EOS_Reports_OnSendPlayerBehaviorReportCompleteCallback CompletionDelegate) = NULL;
void EOS_Reports_SendPlayerBehaviorReport(EOS_HReports Handle, const EOS_Reports_SendPlayerBehaviorReportOptions *Options, void *ClientData, const EOS_Reports_OnSendPlayerBehaviorReportCompleteCallback CompletionDelegate) {
    __on_EOS_Reports_SendPlayerBehaviorReport(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Sanctions_CopyPlayerSanctionByIndex)(EOS_HSanctions Handle, const EOS_Sanctions_CopyPlayerSanctionByIndexOptions *Options, EOS_Sanctions_PlayerSanction **OutSanction) = NULL;
EOS_EResult EOS_Sanctions_CopyPlayerSanctionByIndex(EOS_HSanctions Handle, const EOS_Sanctions_CopyPlayerSanctionByIndexOptions *Options, EOS_Sanctions_PlayerSanction **OutSanction) {
    return __on_EOS_Sanctions_CopyPlayerSanctionByIndex(Handle, Options, OutSanction);
}

uint32_t (*__on_EOS_Sanctions_GetPlayerSanctionCount)(EOS_HSanctions Handle, const EOS_Sanctions_GetPlayerSanctionCountOptions *Options) = NULL;
uint32_t EOS_Sanctions_GetPlayerSanctionCount(EOS_HSanctions Handle, const EOS_Sanctions_GetPlayerSanctionCountOptions *Options) {
    return __on_EOS_Sanctions_GetPlayerSanctionCount(Handle, Options);
}

void (*__on_EOS_Sanctions_PlayerSanction_Release)(EOS_Sanctions_PlayerSanction *Sanction) = NULL;
void EOS_Sanctions_PlayerSanction_Release(EOS_Sanctions_PlayerSanction *Sanction) {
    __on_EOS_Sanctions_PlayerSanction_Release(Sanction);
}

void (*__on_EOS_Sanctions_QueryActivePlayerSanctions)(EOS_HSanctions Handle, const EOS_Sanctions_QueryActivePlayerSanctionsOptions *Options, void *ClientData, const EOS_Sanctions_OnQueryActivePlayerSanctionsCallback CompletionDelegate) = NULL;
void EOS_Sanctions_QueryActivePlayerSanctions(EOS_HSanctions Handle, const EOS_Sanctions_QueryActivePlayerSanctionsOptions *Options, void *ClientData, const EOS_Sanctions_OnQueryActivePlayerSanctionsCallback CompletionDelegate) {
    __on_EOS_Sanctions_QueryActivePlayerSanctions(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_SessionDetails_Attribute_Release)(EOS_SessionDetails_Attribute *SessionAttribute) = NULL;
void EOS_SessionDetails_Attribute_Release(EOS_SessionDetails_Attribute *SessionAttribute) {
    __on_EOS_SessionDetails_Attribute_Release(SessionAttribute);
}

EOS_EResult (*__on_EOS_SessionDetails_CopyInfo)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopyInfoOptions *Options, EOS_SessionDetails_Info **OutSessionInfo) = NULL;
EOS_EResult EOS_SessionDetails_CopyInfo(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopyInfoOptions *Options, EOS_SessionDetails_Info **OutSessionInfo) {
    return __on_EOS_SessionDetails_CopyInfo(Handle, Options, OutSessionInfo);
}

EOS_EResult (*__on_EOS_SessionDetails_CopySessionAttributeByIndex)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByIndexOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) = NULL;
EOS_EResult EOS_SessionDetails_CopySessionAttributeByIndex(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByIndexOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) {
    return __on_EOS_SessionDetails_CopySessionAttributeByIndex(Handle, Options, OutSessionAttribute);
}

EOS_EResult (*__on_EOS_SessionDetails_CopySessionAttributeByKey)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByKeyOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) = NULL;
EOS_EResult EOS_SessionDetails_CopySessionAttributeByKey(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByKeyOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) {
    return __on_EOS_SessionDetails_CopySessionAttributeByKey(Handle, Options, OutSessionAttribute);
}

uint32_t (*__on_EOS_SessionDetails_GetSessionAttributeCount)(EOS_HSessionDetails Handle, const EOS_SessionDetails_GetSessionAttributeCountOptions *Options) = NULL;
uint32_t EOS_SessionDetails_GetSessionAttributeCount(EOS_HSessionDetails Handle, const EOS_SessionDetails_GetSessionAttributeCountOptions *Options) {
    return __on_EOS_SessionDetails_GetSessionAttributeCount(Handle, Options);
}

void (*__on_EOS_SessionDetails_Info_Release)(EOS_SessionDetails_Info *SessionInfo) = NULL;
void EOS_SessionDetails_Info_Release(EOS_SessionDetails_Info *SessionInfo) {
    __on_EOS_SessionDetails_Info_Release(SessionInfo);
}

void (*__on_EOS_SessionDetails_Release)(EOS_HSessionDetails SessionHandle) = NULL;
void EOS_SessionDetails_Release(EOS_HSessionDetails SessionHandle) {
    __on_EOS_SessionDetails_Release(SessionHandle);
}

EOS_EResult (*__on_EOS_SessionModification_AddAttribute)(EOS_HSessionModification Handle, const EOS_SessionModification_AddAttributeOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_AddAttribute(EOS_HSessionModification Handle, const EOS_SessionModification_AddAttributeOptions *Options) {
    return __on_EOS_SessionModification_AddAttribute(Handle, Options);
}

void (*__on_EOS_SessionModification_Release)(EOS_HSessionModification SessionModificationHandle) = NULL;
void EOS_SessionModification_Release(EOS_HSessionModification SessionModificationHandle) {
    __on_EOS_SessionModification_Release(SessionModificationHandle);
}

EOS_EResult (*__on_EOS_SessionModification_RemoveAttribute)(EOS_HSessionModification Handle, const EOS_SessionModification_RemoveAttributeOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_RemoveAttribute(EOS_HSessionModification Handle, const EOS_SessionModification_RemoveAttributeOptions *Options) {
    return __on_EOS_SessionModification_RemoveAttribute(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionModification_SetBucketId)(EOS_HSessionModification Handle, const EOS_SessionModification_SetBucketIdOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_SetBucketId(EOS_HSessionModification Handle, const EOS_SessionModification_SetBucketIdOptions *Options) {
    return __on_EOS_SessionModification_SetBucketId(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionModification_SetHostAddress)(EOS_HSessionModification Handle, const EOS_SessionModification_SetHostAddressOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_SetHostAddress(EOS_HSessionModification Handle, const EOS_SessionModification_SetHostAddressOptions *Options) {
    return __on_EOS_SessionModification_SetHostAddress(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionModification_SetInvitesAllowed)(EOS_HSessionModification Handle, const EOS_SessionModification_SetInvitesAllowedOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_SetInvitesAllowed(EOS_HSessionModification Handle, const EOS_SessionModification_SetInvitesAllowedOptions *Options) {
    return __on_EOS_SessionModification_SetInvitesAllowed(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionModification_SetJoinInProgressAllowed)(EOS_HSessionModification Handle, const EOS_SessionModification_SetJoinInProgressAllowedOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_SetJoinInProgressAllowed(EOS_HSessionModification Handle, const EOS_SessionModification_SetJoinInProgressAllowedOptions *Options) {
    return __on_EOS_SessionModification_SetJoinInProgressAllowed(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionModification_SetMaxPlayers)(EOS_HSessionModification Handle, const EOS_SessionModification_SetMaxPlayersOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_SetMaxPlayers(EOS_HSessionModification Handle, const EOS_SessionModification_SetMaxPlayersOptions *Options) {
    return __on_EOS_SessionModification_SetMaxPlayers(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionModification_SetPermissionLevel)(EOS_HSessionModification Handle, const EOS_SessionModification_SetPermissionLevelOptions *Options) = NULL;
EOS_EResult EOS_SessionModification_SetPermissionLevel(EOS_HSessionModification Handle, const EOS_SessionModification_SetPermissionLevelOptions *Options) {
    return __on_EOS_SessionModification_SetPermissionLevel(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionSearch_CopySearchResultByIndex)(EOS_HSessionSearch Handle, const EOS_SessionSearch_CopySearchResultByIndexOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;
EOS_EResult EOS_SessionSearch_CopySearchResultByIndex(EOS_HSessionSearch Handle, const EOS_SessionSearch_CopySearchResultByIndexOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    return __on_EOS_SessionSearch_CopySearchResultByIndex(Handle, Options, OutSessionHandle);
}

void (*__on_EOS_SessionSearch_Find)(EOS_HSessionSearch Handle, const EOS_SessionSearch_FindOptions *Options, void *ClientData, const EOS_SessionSearch_OnFindCallback CompletionDelegate) = NULL;
void EOS_SessionSearch_Find(EOS_HSessionSearch Handle, const EOS_SessionSearch_FindOptions *Options, void *ClientData, const EOS_SessionSearch_OnFindCallback CompletionDelegate) {
    __on_EOS_SessionSearch_Find(Handle, Options, ClientData, CompletionDelegate);
}

uint32_t (*__on_EOS_SessionSearch_GetSearchResultCount)(EOS_HSessionSearch Handle, const EOS_SessionSearch_GetSearchResultCountOptions *Options) = NULL;
uint32_t EOS_SessionSearch_GetSearchResultCount(EOS_HSessionSearch Handle, const EOS_SessionSearch_GetSearchResultCountOptions *Options) {
    return __on_EOS_SessionSearch_GetSearchResultCount(Handle, Options);
}

void (*__on_EOS_SessionSearch_Release)(EOS_HSessionSearch SessionSearchHandle) = NULL;
void EOS_SessionSearch_Release(EOS_HSessionSearch SessionSearchHandle) {
    __on_EOS_SessionSearch_Release(SessionSearchHandle);
}

EOS_EResult (*__on_EOS_SessionSearch_RemoveParameter)(EOS_HSessionSearch Handle, const EOS_SessionSearch_RemoveParameterOptions *Options) = NULL;
EOS_EResult EOS_SessionSearch_RemoveParameter(EOS_HSessionSearch Handle, const EOS_SessionSearch_RemoveParameterOptions *Options) {
    return __on_EOS_SessionSearch_RemoveParameter(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionSearch_SetMaxResults)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetMaxResultsOptions *Options) = NULL;
EOS_EResult EOS_SessionSearch_SetMaxResults(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetMaxResultsOptions *Options) {
    return __on_EOS_SessionSearch_SetMaxResults(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionSearch_SetParameter)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetParameterOptions *Options) = NULL;
EOS_EResult EOS_SessionSearch_SetParameter(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetParameterOptions *Options) {
    return __on_EOS_SessionSearch_SetParameter(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionSearch_SetSessionId)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetSessionIdOptions *Options) = NULL;
EOS_EResult EOS_SessionSearch_SetSessionId(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetSessionIdOptions *Options) {
    return __on_EOS_SessionSearch_SetSessionId(Handle, Options);
}

EOS_EResult (*__on_EOS_SessionSearch_SetTargetUserId)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetTargetUserIdOptions *Options) = NULL;
EOS_EResult EOS_SessionSearch_SetTargetUserId(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetTargetUserIdOptions *Options) {
    return __on_EOS_SessionSearch_SetTargetUserId(Handle, Options);
}

EOS_NotificationId (*__on_EOS_Sessions_AddNotifyJoinSessionAccepted)(EOS_HSessions Handle, const EOS_Sessions_AddNotifyJoinSessionAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionAcceptedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Sessions_AddNotifyJoinSessionAccepted(EOS_HSessions Handle, const EOS_Sessions_AddNotifyJoinSessionAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionAcceptedCallback NotificationFn) {
    return __on_EOS_Sessions_AddNotifyJoinSessionAccepted(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Sessions_AddNotifySessionInviteAccepted)(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteAcceptedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Sessions_AddNotifySessionInviteAccepted(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteAcceptedCallback NotificationFn) {
    return __on_EOS_Sessions_AddNotifySessionInviteAccepted(Handle, Options, ClientData, NotificationFn);
}

EOS_NotificationId (*__on_EOS_Sessions_AddNotifySessionInviteReceived)(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteReceivedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteReceivedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_Sessions_AddNotifySessionInviteReceived(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteReceivedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteReceivedCallback NotificationFn) {
    return __on_EOS_Sessions_AddNotifySessionInviteReceived(Handle, Options, ClientData, NotificationFn);
}

EOS_EResult (*__on_EOS_Sessions_CopyActiveSessionHandle)(EOS_HSessions Handle, const EOS_Sessions_CopyActiveSessionHandleOptions *Options, EOS_HActiveSession *OutSessionHandle) = NULL;
EOS_EResult EOS_Sessions_CopyActiveSessionHandle(EOS_HSessions Handle, const EOS_Sessions_CopyActiveSessionHandleOptions *Options, EOS_HActiveSession *OutSessionHandle) {
    return __on_EOS_Sessions_CopyActiveSessionHandle(Handle, Options, OutSessionHandle);
}

EOS_EResult (*__on_EOS_Sessions_CopySessionHandleByInviteId)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByInviteIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;
EOS_EResult EOS_Sessions_CopySessionHandleByInviteId(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByInviteIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    return __on_EOS_Sessions_CopySessionHandleByInviteId(Handle, Options, OutSessionHandle);
}

EOS_EResult (*__on_EOS_Sessions_CopySessionHandleByUiEventId)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByUiEventIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;
EOS_EResult EOS_Sessions_CopySessionHandleByUiEventId(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByUiEventIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    return __on_EOS_Sessions_CopySessionHandleByUiEventId(Handle, Options, OutSessionHandle);
}

EOS_EResult (*__on_EOS_Sessions_CopySessionHandleForPresence)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleForPresenceOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;
EOS_EResult EOS_Sessions_CopySessionHandleForPresence(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleForPresenceOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    return __on_EOS_Sessions_CopySessionHandleForPresence(Handle, Options, OutSessionHandle);
}

EOS_EResult (*__on_EOS_Sessions_CreateSessionModification)(EOS_HSessions Handle, const EOS_Sessions_CreateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) = NULL;
EOS_EResult EOS_Sessions_CreateSessionModification(EOS_HSessions Handle, const EOS_Sessions_CreateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) {
    return __on_EOS_Sessions_CreateSessionModification(Handle, Options, OutSessionModificationHandle);
}

EOS_EResult (*__on_EOS_Sessions_CreateSessionSearch)(EOS_HSessions Handle, const EOS_Sessions_CreateSessionSearchOptions *Options, EOS_HSessionSearch *OutSessionSearchHandle) = NULL;
EOS_EResult EOS_Sessions_CreateSessionSearch(EOS_HSessions Handle, const EOS_Sessions_CreateSessionSearchOptions *Options, EOS_HSessionSearch *OutSessionSearchHandle) {
    return __on_EOS_Sessions_CreateSessionSearch(Handle, Options, OutSessionSearchHandle);
}

void (*__on_EOS_Sessions_DestroySession)(EOS_HSessions Handle, const EOS_Sessions_DestroySessionOptions *Options, void *ClientData, const EOS_Sessions_OnDestroySessionCallback CompletionDelegate) = NULL;
void EOS_Sessions_DestroySession(EOS_HSessions Handle, const EOS_Sessions_DestroySessionOptions *Options, void *ClientData, const EOS_Sessions_OnDestroySessionCallback CompletionDelegate) {
    __on_EOS_Sessions_DestroySession(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Sessions_DumpSessionState)(EOS_HSessions Handle, const EOS_Sessions_DumpSessionStateOptions *Options) = NULL;
EOS_EResult EOS_Sessions_DumpSessionState(EOS_HSessions Handle, const EOS_Sessions_DumpSessionStateOptions *Options) {
    return __on_EOS_Sessions_DumpSessionState(Handle, Options);
}

void (*__on_EOS_Sessions_EndSession)(EOS_HSessions Handle, const EOS_Sessions_EndSessionOptions *Options, void *ClientData, const EOS_Sessions_OnEndSessionCallback CompletionDelegate) = NULL;
void EOS_Sessions_EndSession(EOS_HSessions Handle, const EOS_Sessions_EndSessionOptions *Options, void *ClientData, const EOS_Sessions_OnEndSessionCallback CompletionDelegate) {
    __on_EOS_Sessions_EndSession(Handle, Options, ClientData, CompletionDelegate);
}

uint32_t (*__on_EOS_Sessions_GetInviteCount)(EOS_HSessions Handle, const EOS_Sessions_GetInviteCountOptions *Options) = NULL;
uint32_t EOS_Sessions_GetInviteCount(EOS_HSessions Handle, const EOS_Sessions_GetInviteCountOptions *Options) {
    return __on_EOS_Sessions_GetInviteCount(Handle, Options);
}

EOS_EResult (*__on_EOS_Sessions_GetInviteIdByIndex)(EOS_HSessions Handle, const EOS_Sessions_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;
EOS_EResult EOS_Sessions_GetInviteIdByIndex(EOS_HSessions Handle, const EOS_Sessions_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    return __on_EOS_Sessions_GetInviteIdByIndex(Handle, Options, OutBuffer, InOutBufferLength);
}

EOS_EResult (*__on_EOS_Sessions_IsUserInSession)(EOS_HSessions Handle, const EOS_Sessions_IsUserInSessionOptions *Options) = NULL;
EOS_EResult EOS_Sessions_IsUserInSession(EOS_HSessions Handle, const EOS_Sessions_IsUserInSessionOptions *Options) {
    return __on_EOS_Sessions_IsUserInSession(Handle, Options);
}

void (*__on_EOS_Sessions_JoinSession)(EOS_HSessions Handle, const EOS_Sessions_JoinSessionOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionCallback CompletionDelegate) = NULL;
void EOS_Sessions_JoinSession(EOS_HSessions Handle, const EOS_Sessions_JoinSessionOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionCallback CompletionDelegate) {
    __on_EOS_Sessions_JoinSession(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_QueryInvites)(EOS_HSessions Handle, const EOS_Sessions_QueryInvitesOptions *Options, void *ClientData, const EOS_Sessions_OnQueryInvitesCallback CompletionDelegate) = NULL;
void EOS_Sessions_QueryInvites(EOS_HSessions Handle, const EOS_Sessions_QueryInvitesOptions *Options, void *ClientData, const EOS_Sessions_OnQueryInvitesCallback CompletionDelegate) {
    __on_EOS_Sessions_QueryInvites(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_RegisterPlayers)(EOS_HSessions Handle, const EOS_Sessions_RegisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnRegisterPlayersCallback CompletionDelegate) = NULL;
void EOS_Sessions_RegisterPlayers(EOS_HSessions Handle, const EOS_Sessions_RegisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnRegisterPlayersCallback CompletionDelegate) {
    __on_EOS_Sessions_RegisterPlayers(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_RejectInvite)(EOS_HSessions Handle, const EOS_Sessions_RejectInviteOptions *Options, void *ClientData, const EOS_Sessions_OnRejectInviteCallback CompletionDelegate) = NULL;
void EOS_Sessions_RejectInvite(EOS_HSessions Handle, const EOS_Sessions_RejectInviteOptions *Options, void *ClientData, const EOS_Sessions_OnRejectInviteCallback CompletionDelegate) {
    __on_EOS_Sessions_RejectInvite(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_RemoveNotifyJoinSessionAccepted)(EOS_HSessions Handle, EOS_NotificationId InId) = NULL;
void EOS_Sessions_RemoveNotifyJoinSessionAccepted(EOS_HSessions Handle, EOS_NotificationId InId) {
    __on_EOS_Sessions_RemoveNotifyJoinSessionAccepted(Handle, InId);
}

void (*__on_EOS_Sessions_RemoveNotifySessionInviteAccepted)(EOS_HSessions Handle, EOS_NotificationId InId) = NULL;
void EOS_Sessions_RemoveNotifySessionInviteAccepted(EOS_HSessions Handle, EOS_NotificationId InId) {
    __on_EOS_Sessions_RemoveNotifySessionInviteAccepted(Handle, InId);
}

void (*__on_EOS_Sessions_RemoveNotifySessionInviteReceived)(EOS_HSessions Handle, EOS_NotificationId InId) = NULL;
void EOS_Sessions_RemoveNotifySessionInviteReceived(EOS_HSessions Handle, EOS_NotificationId InId) {
    __on_EOS_Sessions_RemoveNotifySessionInviteReceived(Handle, InId);
}

void (*__on_EOS_Sessions_SendInvite)(EOS_HSessions Handle, const EOS_Sessions_SendInviteOptions *Options, void *ClientData, const EOS_Sessions_OnSendInviteCallback CompletionDelegate) = NULL;
void EOS_Sessions_SendInvite(EOS_HSessions Handle, const EOS_Sessions_SendInviteOptions *Options, void *ClientData, const EOS_Sessions_OnSendInviteCallback CompletionDelegate) {
    __on_EOS_Sessions_SendInvite(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_StartSession)(EOS_HSessions Handle, const EOS_Sessions_StartSessionOptions *Options, void *ClientData, const EOS_Sessions_OnStartSessionCallback CompletionDelegate) = NULL;
void EOS_Sessions_StartSession(EOS_HSessions Handle, const EOS_Sessions_StartSessionOptions *Options, void *ClientData, const EOS_Sessions_OnStartSessionCallback CompletionDelegate) {
    __on_EOS_Sessions_StartSession(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_UnregisterPlayers)(EOS_HSessions Handle, const EOS_Sessions_UnregisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnUnregisterPlayersCallback CompletionDelegate) = NULL;
void EOS_Sessions_UnregisterPlayers(EOS_HSessions Handle, const EOS_Sessions_UnregisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnUnregisterPlayersCallback CompletionDelegate) {
    __on_EOS_Sessions_UnregisterPlayers(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Sessions_UpdateSession)(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionOptions *Options, void *ClientData, const EOS_Sessions_OnUpdateSessionCallback CompletionDelegate) = NULL;
void EOS_Sessions_UpdateSession(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionOptions *Options, void *ClientData, const EOS_Sessions_OnUpdateSessionCallback CompletionDelegate) {
    __on_EOS_Sessions_UpdateSession(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_Sessions_UpdateSessionModification)(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) = NULL;
EOS_EResult EOS_Sessions_UpdateSessionModification(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) {
    return __on_EOS_Sessions_UpdateSessionModification(Handle, Options, OutSessionModificationHandle);
}

EOS_EResult (*__on_EOS_Shutdown)() = NULL;
EOS_EResult EOS_Shutdown() {
    return __on_EOS_Shutdown();
}

EOS_EResult (*__on_EOS_Stats_CopyStatByIndex)(EOS_HStats Handle, const EOS_Stats_CopyStatByIndexOptions *Options, EOS_Stats_Stat **OutStat) = NULL;
EOS_EResult EOS_Stats_CopyStatByIndex(EOS_HStats Handle, const EOS_Stats_CopyStatByIndexOptions *Options, EOS_Stats_Stat **OutStat) {
    return __on_EOS_Stats_CopyStatByIndex(Handle, Options, OutStat);
}

EOS_EResult (*__on_EOS_Stats_CopyStatByName)(EOS_HStats Handle, const EOS_Stats_CopyStatByNameOptions *Options, EOS_Stats_Stat **OutStat) = NULL;
EOS_EResult EOS_Stats_CopyStatByName(EOS_HStats Handle, const EOS_Stats_CopyStatByNameOptions *Options, EOS_Stats_Stat **OutStat) {
    return __on_EOS_Stats_CopyStatByName(Handle, Options, OutStat);
}

uint32_t (*__on_EOS_Stats_GetStatsCount)(EOS_HStats Handle, const EOS_Stats_GetStatCountOptions *Options) = NULL;
uint32_t EOS_Stats_GetStatsCount(EOS_HStats Handle, const EOS_Stats_GetStatCountOptions *Options) {
    return __on_EOS_Stats_GetStatsCount(Handle, Options);
}

void (*__on_EOS_Stats_IngestStat)(EOS_HStats Handle, const EOS_Stats_IngestStatOptions *Options, void *ClientData, const EOS_Stats_OnIngestStatCompleteCallback CompletionDelegate) = NULL;
void EOS_Stats_IngestStat(EOS_HStats Handle, const EOS_Stats_IngestStatOptions *Options, void *ClientData, const EOS_Stats_OnIngestStatCompleteCallback CompletionDelegate) {
    __on_EOS_Stats_IngestStat(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Stats_QueryStats)(EOS_HStats Handle, const EOS_Stats_QueryStatsOptions *Options, void *ClientData, const EOS_Stats_OnQueryStatsCompleteCallback CompletionDelegate) = NULL;
void EOS_Stats_QueryStats(EOS_HStats Handle, const EOS_Stats_QueryStatsOptions *Options, void *ClientData, const EOS_Stats_OnQueryStatsCompleteCallback CompletionDelegate) {
    __on_EOS_Stats_QueryStats(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_Stats_Stat_Release)(EOS_Stats_Stat *Stat) = NULL;
void EOS_Stats_Stat_Release(EOS_Stats_Stat *Stat) {
    __on_EOS_Stats_Stat_Release(Stat);
}

EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_CancelRequest)(EOS_HTitleStorageFileTransferRequest Handle) = NULL;
EOS_EResult EOS_TitleStorageFileTransferRequest_CancelRequest(EOS_HTitleStorageFileTransferRequest Handle) {
    return __on_EOS_TitleStorageFileTransferRequest_CancelRequest(Handle);
}

EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_GetFileRequestState)(EOS_HTitleStorageFileTransferRequest Handle) = NULL;
EOS_EResult EOS_TitleStorageFileTransferRequest_GetFileRequestState(EOS_HTitleStorageFileTransferRequest Handle) {
    return __on_EOS_TitleStorageFileTransferRequest_GetFileRequestState(Handle);
}

EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_GetFilename)(EOS_HTitleStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) = NULL;
EOS_EResult EOS_TitleStorageFileTransferRequest_GetFilename(EOS_HTitleStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) {
    return __on_EOS_TitleStorageFileTransferRequest_GetFilename(Handle, FilenameStringBufferSizeBytes, OutStringBuffer, OutStringLength);
}

void (*__on_EOS_TitleStorageFileTransferRequest_Release)(EOS_HTitleStorageFileTransferRequest TitleStorageFileTransferHandle) = NULL;
void EOS_TitleStorageFileTransferRequest_Release(EOS_HTitleStorageFileTransferRequest TitleStorageFileTransferHandle) {
    __on_EOS_TitleStorageFileTransferRequest_Release(TitleStorageFileTransferHandle);
}

EOS_EResult (*__on_EOS_TitleStorage_CopyFileMetadataAtIndex)(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataAtIndexOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) = NULL;
EOS_EResult EOS_TitleStorage_CopyFileMetadataAtIndex(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataAtIndexOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) {
    return __on_EOS_TitleStorage_CopyFileMetadataAtIndex(Handle, Options, OutMetadata);
}

EOS_EResult (*__on_EOS_TitleStorage_CopyFileMetadataByFilename)(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataByFilenameOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) = NULL;
EOS_EResult EOS_TitleStorage_CopyFileMetadataByFilename(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataByFilenameOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) {
    return __on_EOS_TitleStorage_CopyFileMetadataByFilename(Handle, Options, OutMetadata);
}

EOS_EResult (*__on_EOS_TitleStorage_DeleteCache)(EOS_HTitleStorage Handle, const EOS_TitleStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_TitleStorage_OnDeleteCacheCompleteCallback CompletionCallback) = NULL;
EOS_EResult EOS_TitleStorage_DeleteCache(EOS_HTitleStorage Handle, const EOS_TitleStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_TitleStorage_OnDeleteCacheCompleteCallback CompletionCallback) {
    return __on_EOS_TitleStorage_DeleteCache(Handle, Options, ClientData, CompletionCallback);
}

void (*__on_EOS_TitleStorage_FileMetadata_Release)(EOS_TitleStorage_FileMetadata *FileMetadata) = NULL;
void EOS_TitleStorage_FileMetadata_Release(EOS_TitleStorage_FileMetadata *FileMetadata) {
    __on_EOS_TitleStorage_FileMetadata_Release(FileMetadata);
}

uint32_t (*__on_EOS_TitleStorage_GetFileMetadataCount)(EOS_HTitleStorage Handle, const EOS_TitleStorage_GetFileMetadataCountOptions *Options) = NULL;
uint32_t EOS_TitleStorage_GetFileMetadataCount(EOS_HTitleStorage Handle, const EOS_TitleStorage_GetFileMetadataCountOptions *Options) {
    return __on_EOS_TitleStorage_GetFileMetadataCount(Handle, Options);
}

void (*__on_EOS_TitleStorage_QueryFile)(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileCompleteCallback CompletionCallback) = NULL;
void EOS_TitleStorage_QueryFile(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileCompleteCallback CompletionCallback) {
    __on_EOS_TitleStorage_QueryFile(Handle, Options, ClientData, CompletionCallback);
}

void (*__on_EOS_TitleStorage_QueryFileList)(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileListOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileListCompleteCallback CompletionCallback) = NULL;
void EOS_TitleStorage_QueryFileList(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileListOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileListCompleteCallback CompletionCallback) {
    __on_EOS_TitleStorage_QueryFileList(Handle, Options, ClientData, CompletionCallback);
}

EOS_HTitleStorageFileTransferRequest (*__on_EOS_TitleStorage_ReadFile)(EOS_HTitleStorage Handle, const EOS_TitleStorage_ReadFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnReadFileCompleteCallback CompletionCallback) = NULL;
EOS_HTitleStorageFileTransferRequest EOS_TitleStorage_ReadFile(EOS_HTitleStorage Handle, const EOS_TitleStorage_ReadFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnReadFileCompleteCallback CompletionCallback) {
    return __on_EOS_TitleStorage_ReadFile(Handle, Options, ClientData, CompletionCallback);
}

EOS_EResult (*__on_EOS_UI_AcknowledgeEventId)(EOS_HUI Handle, const EOS_UI_AcknowledgeEventIdOptions *Options) = NULL;
EOS_EResult EOS_UI_AcknowledgeEventId(EOS_HUI Handle, const EOS_UI_AcknowledgeEventIdOptions *Options) {
    return __on_EOS_UI_AcknowledgeEventId(Handle, Options);
}

EOS_NotificationId (*__on_EOS_UI_AddNotifyDisplaySettingsUpdated)(EOS_HUI Handle, const EOS_UI_AddNotifyDisplaySettingsUpdatedOptions *Options, void *ClientData, const EOS_UI_OnDisplaySettingsUpdatedCallback NotificationFn) = NULL;
EOS_NotificationId EOS_UI_AddNotifyDisplaySettingsUpdated(EOS_HUI Handle, const EOS_UI_AddNotifyDisplaySettingsUpdatedOptions *Options, void *ClientData, const EOS_UI_OnDisplaySettingsUpdatedCallback NotificationFn) {
    return __on_EOS_UI_AddNotifyDisplaySettingsUpdated(Handle, Options, ClientData, NotificationFn);
}

EOS_Bool (*__on_EOS_UI_GetFriendsVisible)(EOS_HUI Handle, const EOS_UI_GetFriendsVisibleOptions *Options) = NULL;
EOS_Bool EOS_UI_GetFriendsVisible(EOS_HUI Handle, const EOS_UI_GetFriendsVisibleOptions *Options) {
    return __on_EOS_UI_GetFriendsVisible(Handle, Options);
}

EOS_UI_ENotificationLocation (*__on_EOS_UI_GetNotificationLocationPreference)(EOS_HUI Handle) = NULL;
EOS_UI_ENotificationLocation EOS_UI_GetNotificationLocationPreference(EOS_HUI Handle) {
    return __on_EOS_UI_GetNotificationLocationPreference(Handle);
}

EOS_UI_EKeyCombination (*__on_EOS_UI_GetToggleFriendsKey)(EOS_HUI Handle, const EOS_UI_GetToggleFriendsKeyOptions *Options) = NULL;
EOS_UI_EKeyCombination EOS_UI_GetToggleFriendsKey(EOS_HUI Handle, const EOS_UI_GetToggleFriendsKeyOptions *Options) {
    return __on_EOS_UI_GetToggleFriendsKey(Handle, Options);
}

void (*__on_EOS_UI_HideFriends)(EOS_HUI Handle, const EOS_UI_HideFriendsOptions *Options, void *ClientData, const EOS_UI_OnHideFriendsCallback CompletionDelegate) = NULL;
void EOS_UI_HideFriends(EOS_HUI Handle, const EOS_UI_HideFriendsOptions *Options, void *ClientData, const EOS_UI_OnHideFriendsCallback CompletionDelegate) {
    __on_EOS_UI_HideFriends(Handle, Options, ClientData, CompletionDelegate);
}

EOS_Bool (*__on_EOS_UI_IsValidKeyCombination)(EOS_HUI Handle, EOS_UI_EKeyCombination KeyCombination) = NULL;
EOS_Bool EOS_UI_IsValidKeyCombination(EOS_HUI Handle, EOS_UI_EKeyCombination KeyCombination) {
    return __on_EOS_UI_IsValidKeyCombination(Handle, KeyCombination);
}

void (*__on_EOS_UI_RemoveNotifyDisplaySettingsUpdated)(EOS_HUI Handle, EOS_NotificationId Id) = NULL;
void EOS_UI_RemoveNotifyDisplaySettingsUpdated(EOS_HUI Handle, EOS_NotificationId Id) {
    __on_EOS_UI_RemoveNotifyDisplaySettingsUpdated(Handle, Id);
}

EOS_EResult (*__on_EOS_UI_SetDisplayPreference)(EOS_HUI Handle, const EOS_UI_SetDisplayPreferenceOptions *Options) = NULL;
EOS_EResult EOS_UI_SetDisplayPreference(EOS_HUI Handle, const EOS_UI_SetDisplayPreferenceOptions *Options) {
    return __on_EOS_UI_SetDisplayPreference(Handle, Options);
}

EOS_EResult (*__on_EOS_UI_SetToggleFriendsKey)(EOS_HUI Handle, const EOS_UI_SetToggleFriendsKeyOptions *Options) = NULL;
EOS_EResult EOS_UI_SetToggleFriendsKey(EOS_HUI Handle, const EOS_UI_SetToggleFriendsKeyOptions *Options) {
    return __on_EOS_UI_SetToggleFriendsKey(Handle, Options);
}

void (*__on_EOS_UI_ShowFriends)(EOS_HUI Handle, const EOS_UI_ShowFriendsOptions *Options, void *ClientData, const EOS_UI_OnShowFriendsCallback CompletionDelegate) = NULL;
void EOS_UI_ShowFriends(EOS_HUI Handle, const EOS_UI_ShowFriendsOptions *Options, void *ClientData, const EOS_UI_OnShowFriendsCallback CompletionDelegate) {
    __on_EOS_UI_ShowFriends(Handle, Options, ClientData, CompletionDelegate);
}

EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByAccountId)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) = NULL;
EOS_EResult EOS_UserInfo_CopyExternalUserInfoByAccountId(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) {
    return __on_EOS_UserInfo_CopyExternalUserInfoByAccountId(Handle, Options, OutExternalUserInfo);
}

EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByAccountType)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) = NULL;
EOS_EResult EOS_UserInfo_CopyExternalUserInfoByAccountType(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) {
    return __on_EOS_UserInfo_CopyExternalUserInfoByAccountType(Handle, Options, OutExternalUserInfo);
}

EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByIndex)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByIndexOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) = NULL;
EOS_EResult EOS_UserInfo_CopyExternalUserInfoByIndex(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByIndexOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) {
    return __on_EOS_UserInfo_CopyExternalUserInfoByIndex(Handle, Options, OutExternalUserInfo);
}

EOS_EResult (*__on_EOS_UserInfo_CopyUserInfo)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyUserInfoOptions *Options, EOS_UserInfo **OutUserInfo) = NULL;
EOS_EResult EOS_UserInfo_CopyUserInfo(EOS_HUserInfo Handle, const EOS_UserInfo_CopyUserInfoOptions *Options, EOS_UserInfo **OutUserInfo) {
    return __on_EOS_UserInfo_CopyUserInfo(Handle, Options, OutUserInfo);
}

void (*__on_EOS_UserInfo_ExternalUserInfo_Release)(EOS_UserInfo_ExternalUserInfo *ExternalUserInfo) = NULL;
void EOS_UserInfo_ExternalUserInfo_Release(EOS_UserInfo_ExternalUserInfo *ExternalUserInfo) {
    __on_EOS_UserInfo_ExternalUserInfo_Release(ExternalUserInfo);
}

uint32_t (*__on_EOS_UserInfo_GetExternalUserInfoCount)(EOS_HUserInfo Handle, const EOS_UserInfo_GetExternalUserInfoCountOptions *Options) = NULL;
uint32_t EOS_UserInfo_GetExternalUserInfoCount(EOS_HUserInfo Handle, const EOS_UserInfo_GetExternalUserInfoCountOptions *Options) {
    return __on_EOS_UserInfo_GetExternalUserInfoCount(Handle, Options);
}

void (*__on_EOS_UserInfo_QueryUserInfo)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoCallback CompletionDelegate) = NULL;
void EOS_UserInfo_QueryUserInfo(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoCallback CompletionDelegate) {
    __on_EOS_UserInfo_QueryUserInfo(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_UserInfo_QueryUserInfoByDisplayName)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByDisplayNameOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback CompletionDelegate) = NULL;
void EOS_UserInfo_QueryUserInfoByDisplayName(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByDisplayNameOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback CompletionDelegate) {
    __on_EOS_UserInfo_QueryUserInfoByDisplayName(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_UserInfo_QueryUserInfoByExternalAccount)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByExternalAccountOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback CompletionDelegate) = NULL;
void EOS_UserInfo_QueryUserInfoByExternalAccount(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByExternalAccountOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback CompletionDelegate) {
    __on_EOS_UserInfo_QueryUserInfoByExternalAccount(Handle, Options, ClientData, CompletionDelegate);
}

void (*__on_EOS_UserInfo_Release)(EOS_UserInfo *UserInfo) = NULL;
void EOS_UserInfo_Release(EOS_UserInfo *UserInfo) {
    __on_EOS_UserInfo_Release(UserInfo);
}

