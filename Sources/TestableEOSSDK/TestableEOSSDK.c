
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "include/TestableEOSSDK.h"

EOS_NotificationId (*__on_EOS_Achievements_AddNotifyAchievementsUnlocked)(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedOptions *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Achievements_AddNotifyAchievementsUnlocked(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedOptions *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallback NotificationFn) {
    if(NULL != __on_EOS_Achievements_AddNotifyAchievementsUnlocked) {
        return __on_EOS_Achievements_AddNotifyAchievementsUnlocked(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Achievements_AddNotifyAchievementsUnlocked");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Achievements_AddNotifyAchievementsUnlockedV2)(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedV2Options *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallbackV2 NotificationFn) = NULL;

EOS_NotificationId EOS_Achievements_AddNotifyAchievementsUnlockedV2(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedV2Options *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallbackV2 NotificationFn) {
    if(NULL != __on_EOS_Achievements_AddNotifyAchievementsUnlockedV2) {
        return __on_EOS_Achievements_AddNotifyAchievementsUnlockedV2(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Achievements_AddNotifyAchievementsUnlockedV2");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByAchievementIdOptions *Options, EOS_Achievements_Definition **OutDefinition) = NULL;

EOS_EResult EOS_Achievements_CopyAchievementDefinitionByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByAchievementIdOptions *Options, EOS_Achievements_Definition **OutDefinition) {
    if(NULL != __on_EOS_Achievements_CopyAchievementDefinitionByAchievementId) {
        return __on_EOS_Achievements_CopyAchievementDefinitionByAchievementId(Handle, Options, OutDefinition);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyAchievementDefinitionByAchievementId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByIndexOptions *Options, EOS_Achievements_Definition **OutDefinition) = NULL;

EOS_EResult EOS_Achievements_CopyAchievementDefinitionByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByIndexOptions *Options, EOS_Achievements_Definition **OutDefinition) {
    if(NULL != __on_EOS_Achievements_CopyAchievementDefinitionByIndex) {
        return __on_EOS_Achievements_CopyAchievementDefinitionByIndex(Handle, Options, OutDefinition);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyAchievementDefinitionByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) = NULL;

EOS_EResult EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) {
    if(NULL != __on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId) {
        return __on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId(Handle, Options, OutDefinition);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByIndexOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) = NULL;

EOS_EResult EOS_Achievements_CopyAchievementDefinitionV2ByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByIndexOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition) {
    if(NULL != __on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex) {
        return __on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex(Handle, Options, OutDefinition);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyPlayerAchievementByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByAchievementIdOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) = NULL;

EOS_EResult EOS_Achievements_CopyPlayerAchievementByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByAchievementIdOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) {
    if(NULL != __on_EOS_Achievements_CopyPlayerAchievementByAchievementId) {
        return __on_EOS_Achievements_CopyPlayerAchievementByAchievementId(Handle, Options, OutAchievement);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyPlayerAchievementByAchievementId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyPlayerAchievementByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByIndexOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) = NULL;

EOS_EResult EOS_Achievements_CopyPlayerAchievementByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByIndexOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement) {
    if(NULL != __on_EOS_Achievements_CopyPlayerAchievementByIndex) {
        return __on_EOS_Achievements_CopyPlayerAchievementByIndex(Handle, Options, OutAchievement);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyPlayerAchievementByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyUnlockedAchievementByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByAchievementIdOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) = NULL;

EOS_EResult EOS_Achievements_CopyUnlockedAchievementByAchievementId(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByAchievementIdOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) {
    if(NULL != __on_EOS_Achievements_CopyUnlockedAchievementByAchievementId) {
        return __on_EOS_Achievements_CopyUnlockedAchievementByAchievementId(Handle, Options, OutAchievement);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyUnlockedAchievementByAchievementId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Achievements_CopyUnlockedAchievementByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByIndexOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) = NULL;

EOS_EResult EOS_Achievements_CopyUnlockedAchievementByIndex(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByIndexOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement) {
    if(NULL != __on_EOS_Achievements_CopyUnlockedAchievementByIndex) {
        return __on_EOS_Achievements_CopyUnlockedAchievementByIndex(Handle, Options, OutAchievement);
    } else {
        assert(!"NULL == __on_EOS_Achievements_CopyUnlockedAchievementByIndex");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_DefinitionV2_Release)(EOS_Achievements_DefinitionV2 *AchievementDefinition) = NULL;

void EOS_Achievements_DefinitionV2_Release(EOS_Achievements_DefinitionV2 *AchievementDefinition) {
    if(NULL != __on_EOS_Achievements_DefinitionV2_Release) {
        __on_EOS_Achievements_DefinitionV2_Release(AchievementDefinition);
    } else {
        assert(!"NULL == __on_EOS_Achievements_DefinitionV2_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_Definition_Release)(EOS_Achievements_Definition *AchievementDefinition) = NULL;

void EOS_Achievements_Definition_Release(EOS_Achievements_Definition *AchievementDefinition) {
    if(NULL != __on_EOS_Achievements_Definition_Release) {
        __on_EOS_Achievements_Definition_Release(AchievementDefinition);
    } else {
        assert(!"NULL == __on_EOS_Achievements_Definition_Release");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Achievements_GetAchievementDefinitionCount)(EOS_HAchievements Handle, const EOS_Achievements_GetAchievementDefinitionCountOptions *Options) = NULL;

uint32_t EOS_Achievements_GetAchievementDefinitionCount(EOS_HAchievements Handle, const EOS_Achievements_GetAchievementDefinitionCountOptions *Options) {
    if(NULL != __on_EOS_Achievements_GetAchievementDefinitionCount) {
        return __on_EOS_Achievements_GetAchievementDefinitionCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Achievements_GetAchievementDefinitionCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Achievements_GetPlayerAchievementCount)(EOS_HAchievements Handle, const EOS_Achievements_GetPlayerAchievementCountOptions *Options) = NULL;

uint32_t EOS_Achievements_GetPlayerAchievementCount(EOS_HAchievements Handle, const EOS_Achievements_GetPlayerAchievementCountOptions *Options) {
    if(NULL != __on_EOS_Achievements_GetPlayerAchievementCount) {
        return __on_EOS_Achievements_GetPlayerAchievementCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Achievements_GetPlayerAchievementCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Achievements_GetUnlockedAchievementCount)(EOS_HAchievements Handle, const EOS_Achievements_GetUnlockedAchievementCountOptions *Options) = NULL;

uint32_t EOS_Achievements_GetUnlockedAchievementCount(EOS_HAchievements Handle, const EOS_Achievements_GetUnlockedAchievementCountOptions *Options) {
    if(NULL != __on_EOS_Achievements_GetUnlockedAchievementCount) {
        return __on_EOS_Achievements_GetUnlockedAchievementCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Achievements_GetUnlockedAchievementCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_PlayerAchievement_Release)(EOS_Achievements_PlayerAchievement *Achievement) = NULL;

void EOS_Achievements_PlayerAchievement_Release(EOS_Achievements_PlayerAchievement *Achievement) {
    if(NULL != __on_EOS_Achievements_PlayerAchievement_Release) {
        __on_EOS_Achievements_PlayerAchievement_Release(Achievement);
    } else {
        assert(!"NULL == __on_EOS_Achievements_PlayerAchievement_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_QueryDefinitions)(EOS_HAchievements Handle, const EOS_Achievements_QueryDefinitionsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryDefinitionsCompleteCallback CompletionDelegate) = NULL;

void EOS_Achievements_QueryDefinitions(EOS_HAchievements Handle, const EOS_Achievements_QueryDefinitionsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryDefinitionsCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Achievements_QueryDefinitions) {
        __on_EOS_Achievements_QueryDefinitions(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Achievements_QueryDefinitions");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_QueryPlayerAchievements)(EOS_HAchievements Handle, const EOS_Achievements_QueryPlayerAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallback CompletionDelegate) = NULL;

void EOS_Achievements_QueryPlayerAchievements(EOS_HAchievements Handle, const EOS_Achievements_QueryPlayerAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Achievements_QueryPlayerAchievements) {
        __on_EOS_Achievements_QueryPlayerAchievements(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Achievements_QueryPlayerAchievements");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_RemoveNotifyAchievementsUnlocked)(EOS_HAchievements Handle, EOS_NotificationId InId) = NULL;

void EOS_Achievements_RemoveNotifyAchievementsUnlocked(EOS_HAchievements Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Achievements_RemoveNotifyAchievementsUnlocked) {
        __on_EOS_Achievements_RemoveNotifyAchievementsUnlocked(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Achievements_RemoveNotifyAchievementsUnlocked");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_UnlockAchievements)(EOS_HAchievements Handle, const EOS_Achievements_UnlockAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnUnlockAchievementsCompleteCallback CompletionDelegate) = NULL;

void EOS_Achievements_UnlockAchievements(EOS_HAchievements Handle, const EOS_Achievements_UnlockAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnUnlockAchievementsCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Achievements_UnlockAchievements) {
        __on_EOS_Achievements_UnlockAchievements(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Achievements_UnlockAchievements");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Achievements_UnlockedAchievement_Release)(EOS_Achievements_UnlockedAchievement *Achievement) = NULL;

void EOS_Achievements_UnlockedAchievement_Release(EOS_Achievements_UnlockedAchievement *Achievement) {
    if(NULL != __on_EOS_Achievements_UnlockedAchievement_Release) {
        __on_EOS_Achievements_UnlockedAchievement_Release(Achievement);
    } else {
        assert(!"NULL == __on_EOS_Achievements_UnlockedAchievement_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_ActiveSession_CopyInfo)(EOS_HActiveSession Handle, const EOS_ActiveSession_CopyInfoOptions *Options, EOS_ActiveSession_Info **OutActiveSessionInfo) = NULL;

EOS_EResult EOS_ActiveSession_CopyInfo(EOS_HActiveSession Handle, const EOS_ActiveSession_CopyInfoOptions *Options, EOS_ActiveSession_Info **OutActiveSessionInfo) {
    if(NULL != __on_EOS_ActiveSession_CopyInfo) {
        return __on_EOS_ActiveSession_CopyInfo(Handle, Options, OutActiveSessionInfo);
    } else {
        assert(!"NULL == __on_EOS_ActiveSession_CopyInfo");
        exit(EXIT_FAILURE);
    }
}

EOS_ProductUserId (*__on_EOS_ActiveSession_GetRegisteredPlayerByIndex)(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerByIndexOptions *Options) = NULL;

EOS_ProductUserId EOS_ActiveSession_GetRegisteredPlayerByIndex(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerByIndexOptions *Options) {
    if(NULL != __on_EOS_ActiveSession_GetRegisteredPlayerByIndex) {
        return __on_EOS_ActiveSession_GetRegisteredPlayerByIndex(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_ActiveSession_GetRegisteredPlayerByIndex");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_ActiveSession_GetRegisteredPlayerCount)(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerCountOptions *Options) = NULL;

uint32_t EOS_ActiveSession_GetRegisteredPlayerCount(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerCountOptions *Options) {
    if(NULL != __on_EOS_ActiveSession_GetRegisteredPlayerCount) {
        return __on_EOS_ActiveSession_GetRegisteredPlayerCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_ActiveSession_GetRegisteredPlayerCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_ActiveSession_Info_Release)(EOS_ActiveSession_Info *ActiveSessionInfo) = NULL;

void EOS_ActiveSession_Info_Release(EOS_ActiveSession_Info *ActiveSessionInfo) {
    if(NULL != __on_EOS_ActiveSession_Info_Release) {
        __on_EOS_ActiveSession_Info_Release(ActiveSessionInfo);
    } else {
        assert(!"NULL == __on_EOS_ActiveSession_Info_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_ActiveSession_Release)(EOS_HActiveSession ActiveSessionHandle) = NULL;

void EOS_ActiveSession_Release(EOS_HActiveSession ActiveSessionHandle) {
    if(NULL != __on_EOS_ActiveSession_Release) {
        __on_EOS_ActiveSession_Release(ActiveSessionHandle);
    } else {
        assert(!"NULL == __on_EOS_ActiveSession_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_AddExternalIntegrityCatalog)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddExternalIntegrityCatalogOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_AddExternalIntegrityCatalog(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddExternalIntegrityCatalogOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_AddExternalIntegrityCatalog) {
        return __on_EOS_AntiCheatClient_AddExternalIntegrityCatalog(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_AddExternalIntegrityCatalog");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyMessageToPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToPeerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToPeerCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatClient_AddNotifyMessageToPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToPeerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToPeerCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatClient_AddNotifyMessageToPeer) {
        return __on_EOS_AntiCheatClient_AddNotifyMessageToPeer(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_AddNotifyMessageToPeer");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyMessageToServer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToServerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToServerCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatClient_AddNotifyMessageToServer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToServerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToServerCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatClient_AddNotifyMessageToServer) {
        return __on_EOS_AntiCheatClient_AddNotifyMessageToServer(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_AddNotifyMessageToServer");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyPeerActionRequired)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerActionRequiredCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatClient_AddNotifyPeerActionRequired(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerActionRequiredCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatClient_AddNotifyPeerActionRequired) {
        return __on_EOS_AntiCheatClient_AddNotifyPeerActionRequired(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_AddNotifyPeerActionRequired");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerAuthStatusChangedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerAuthStatusChangedCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged) {
        return __on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_BeginSession)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_BeginSessionOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_BeginSession(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_BeginSessionOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_BeginSession) {
        return __on_EOS_AntiCheatClient_BeginSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_BeginSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_EndSession)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_EndSessionOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_EndSession(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_EndSessionOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_EndSession) {
        return __on_EOS_AntiCheatClient_EndSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_EndSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_GetProtectMessageOutputLength)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) = NULL;

EOS_EResult EOS_AntiCheatClient_GetProtectMessageOutputLength(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) {
    if(NULL != __on_EOS_AntiCheatClient_GetProtectMessageOutputLength) {
        return __on_EOS_AntiCheatClient_GetProtectMessageOutputLength(Handle, Options, OutBufferLengthBytes);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_GetProtectMessageOutputLength");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_PollStatus)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_PollStatusOptions *Options, EOS_EAntiCheatClientViolationType *ViolationType, char *OutMessage) = NULL;

EOS_EResult EOS_AntiCheatClient_PollStatus(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_PollStatusOptions *Options, EOS_EAntiCheatClientViolationType *ViolationType, char *OutMessage) {
    if(NULL != __on_EOS_AntiCheatClient_PollStatus) {
        return __on_EOS_AntiCheatClient_PollStatus(Handle, Options, ViolationType, OutMessage);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_PollStatus");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_ProtectMessage)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;

EOS_EResult EOS_AntiCheatClient_ProtectMessage(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    if(NULL != __on_EOS_AntiCheatClient_ProtectMessage) {
        return __on_EOS_AntiCheatClient_ProtectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_ProtectMessage");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_ReceiveMessageFromPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromPeerOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_ReceiveMessageFromPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromPeerOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_ReceiveMessageFromPeer) {
        return __on_EOS_AntiCheatClient_ReceiveMessageFromPeer(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_ReceiveMessageFromPeer");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_ReceiveMessageFromServer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromServerOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_ReceiveMessageFromServer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromServerOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_ReceiveMessageFromServer) {
        return __on_EOS_AntiCheatClient_ReceiveMessageFromServer(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_ReceiveMessageFromServer");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_RegisterPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_RegisterPeerOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_RegisterPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_RegisterPeerOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_RegisterPeer) {
        return __on_EOS_AntiCheatClient_RegisterPeer(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_RegisterPeer");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatClient_RemoveNotifyMessageToPeer(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer) {
        __on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyMessageToServer)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatClient_RemoveNotifyMessageToServer(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatClient_RemoveNotifyMessageToServer) {
        __on_EOS_AntiCheatClient_RemoveNotifyMessageToServer(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_RemoveNotifyMessageToServer");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatClient_RemoveNotifyPeerActionRequired(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired) {
        __on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged) {
        __on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_UnprotectMessage)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;

EOS_EResult EOS_AntiCheatClient_UnprotectMessage(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    if(NULL != __on_EOS_AntiCheatClient_UnprotectMessage) {
        return __on_EOS_AntiCheatClient_UnprotectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_UnprotectMessage");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatClient_UnregisterPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnregisterPeerOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatClient_UnregisterPeer(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnregisterPeerOptions *Options) {
    if(NULL != __on_EOS_AntiCheatClient_UnregisterPeer) {
        return __on_EOS_AntiCheatClient_UnregisterPeer(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatClient_UnregisterPeer");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyClientActionRequired)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientActionRequiredCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatServer_AddNotifyClientActionRequired(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientActionRequiredCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatServer_AddNotifyClientActionRequired) {
        return __on_EOS_AntiCheatServer_AddNotifyClientActionRequired(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_AddNotifyClientActionRequired");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientAuthStatusChangedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientAuthStatusChangedCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged) {
        return __on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyMessageToClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyMessageToClientOptions *Options, void *ClientData, EOS_AntiCheatServer_OnMessageToClientCallback NotificationFn) = NULL;

EOS_NotificationId EOS_AntiCheatServer_AddNotifyMessageToClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyMessageToClientOptions *Options, void *ClientData, EOS_AntiCheatServer_OnMessageToClientCallback NotificationFn) {
    if(NULL != __on_EOS_AntiCheatServer_AddNotifyMessageToClient) {
        return __on_EOS_AntiCheatServer_AddNotifyMessageToClient(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_AddNotifyMessageToClient");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_BeginSession)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_BeginSessionOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_BeginSession(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_BeginSessionOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_BeginSession) {
        return __on_EOS_AntiCheatServer_BeginSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_BeginSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_EndSession)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_EndSessionOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_EndSession(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_EndSessionOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_EndSession) {
        return __on_EOS_AntiCheatServer_EndSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_EndSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_GetProtectMessageOutputLength)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) = NULL;

EOS_EResult EOS_AntiCheatServer_GetProtectMessageOutputLength(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes) {
    if(NULL != __on_EOS_AntiCheatServer_GetProtectMessageOutputLength) {
        return __on_EOS_AntiCheatServer_GetProtectMessageOutputLength(Handle, Options, OutBufferLengthBytes);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_GetProtectMessageOutputLength");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogEvent)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogEventOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogEvent(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogEventOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogEvent) {
        return __on_EOS_AntiCheatServer_LogEvent(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogEvent");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogGameRoundEnd)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundEndOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogGameRoundEnd(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundEndOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogGameRoundEnd) {
        return __on_EOS_AntiCheatServer_LogGameRoundEnd(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogGameRoundEnd");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogGameRoundStart)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundStartOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogGameRoundStart(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundStartOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogGameRoundStart) {
        return __on_EOS_AntiCheatServer_LogGameRoundStart(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogGameRoundStart");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerDespawn)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerDespawnOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerDespawn(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerDespawnOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerDespawn) {
        return __on_EOS_AntiCheatServer_LogPlayerDespawn(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerDespawn");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerRevive)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerReviveOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerRevive(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerReviveOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerRevive) {
        return __on_EOS_AntiCheatServer_LogPlayerRevive(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerRevive");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerSpawn)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerSpawnOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerSpawn(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerSpawnOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerSpawn) {
        return __on_EOS_AntiCheatServer_LogPlayerSpawn(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerSpawn");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerTakeDamage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTakeDamageOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerTakeDamage(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTakeDamageOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerTakeDamage) {
        return __on_EOS_AntiCheatServer_LogPlayerTakeDamage(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerTakeDamage");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerTick)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTickOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerTick(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTickOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerTick) {
        return __on_EOS_AntiCheatServer_LogPlayerTick(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerTick");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerUseAbility)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseAbilityOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerUseAbility(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseAbilityOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerUseAbility) {
        return __on_EOS_AntiCheatServer_LogPlayerUseAbility(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerUseAbility");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerUseWeapon)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseWeaponOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_LogPlayerUseWeapon(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseWeaponOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_LogPlayerUseWeapon) {
        return __on_EOS_AntiCheatServer_LogPlayerUseWeapon(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_LogPlayerUseWeapon");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_ProtectMessage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;

EOS_EResult EOS_AntiCheatServer_ProtectMessage(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    if(NULL != __on_EOS_AntiCheatServer_ProtectMessage) {
        return __on_EOS_AntiCheatServer_ProtectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_ProtectMessage");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_ReceiveMessageFromClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ReceiveMessageFromClientOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_ReceiveMessageFromClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ReceiveMessageFromClientOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_ReceiveMessageFromClient) {
        return __on_EOS_AntiCheatServer_ReceiveMessageFromClient(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_ReceiveMessageFromClient");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_RegisterClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_RegisterClientOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_RegisterClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_RegisterClientOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_RegisterClient) {
        return __on_EOS_AntiCheatServer_RegisterClient(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_RegisterClient");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_RegisterEvent)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_RegisterEventOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_RegisterEvent(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_RegisterEventOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_RegisterEvent) {
        return __on_EOS_AntiCheatServer_RegisterEvent(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_RegisterEvent");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatServer_RemoveNotifyClientActionRequired(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired) {
        __on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged) {
        __on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_AntiCheatServer_RemoveNotifyMessageToClient)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_AntiCheatServer_RemoveNotifyMessageToClient(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_AntiCheatServer_RemoveNotifyMessageToClient) {
        __on_EOS_AntiCheatServer_RemoveNotifyMessageToClient(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_RemoveNotifyMessageToClient");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_SetClientDetails)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetClientDetailsOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_SetClientDetails(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetClientDetailsOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_SetClientDetails) {
        return __on_EOS_AntiCheatServer_SetClientDetails(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_SetClientDetails");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_SetClientNetworkState)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_SetClientNetworkStateOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_SetClientNetworkState(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_SetClientNetworkStateOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_SetClientNetworkState) {
        return __on_EOS_AntiCheatServer_SetClientNetworkState(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_SetClientNetworkState");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_SetGameSessionId)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetGameSessionIdOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_SetGameSessionId(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetGameSessionIdOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_SetGameSessionId) {
        return __on_EOS_AntiCheatServer_SetGameSessionId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_SetGameSessionId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_UnprotectMessage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) = NULL;

EOS_EResult EOS_AntiCheatServer_UnprotectMessage(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes) {
    if(NULL != __on_EOS_AntiCheatServer_UnprotectMessage) {
        return __on_EOS_AntiCheatServer_UnprotectMessage(Handle, Options, OutBuffer, OutBufferLengthBytes);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_UnprotectMessage");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_AntiCheatServer_UnregisterClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnregisterClientOptions *Options) = NULL;

EOS_EResult EOS_AntiCheatServer_UnregisterClient(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnregisterClientOptions *Options) {
    if(NULL != __on_EOS_AntiCheatServer_UnregisterClient) {
        return __on_EOS_AntiCheatServer_UnregisterClient(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_AntiCheatServer_UnregisterClient");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Auth_AddNotifyLoginStatusChanged)(EOS_HAuth Handle, const EOS_Auth_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Auth_OnLoginStatusChangedCallback Notification) = NULL;

EOS_NotificationId EOS_Auth_AddNotifyLoginStatusChanged(EOS_HAuth Handle, const EOS_Auth_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Auth_OnLoginStatusChangedCallback Notification) {
    if(NULL != __on_EOS_Auth_AddNotifyLoginStatusChanged) {
        return __on_EOS_Auth_AddNotifyLoginStatusChanged(Handle, Options, ClientData, Notification);
    } else {
        assert(!"NULL == __on_EOS_Auth_AddNotifyLoginStatusChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Auth_CopyUserAuthToken)(EOS_HAuth Handle, const EOS_Auth_CopyUserAuthTokenOptions *Options, EOS_EpicAccountId LocalUserId, EOS_Auth_Token **OutUserAuthToken) = NULL;

EOS_EResult EOS_Auth_CopyUserAuthToken(EOS_HAuth Handle, const EOS_Auth_CopyUserAuthTokenOptions *Options, EOS_EpicAccountId LocalUserId, EOS_Auth_Token **OutUserAuthToken) {
    if(NULL != __on_EOS_Auth_CopyUserAuthToken) {
        return __on_EOS_Auth_CopyUserAuthToken(Handle, Options, LocalUserId, OutUserAuthToken);
    } else {
        assert(!"NULL == __on_EOS_Auth_CopyUserAuthToken");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_DeletePersistentAuth)(EOS_HAuth Handle, const EOS_Auth_DeletePersistentAuthOptions *Options, void *ClientData, const EOS_Auth_OnDeletePersistentAuthCallback CompletionDelegate) = NULL;

void EOS_Auth_DeletePersistentAuth(EOS_HAuth Handle, const EOS_Auth_DeletePersistentAuthOptions *Options, void *ClientData, const EOS_Auth_OnDeletePersistentAuthCallback CompletionDelegate) {
    if(NULL != __on_EOS_Auth_DeletePersistentAuth) {
        __on_EOS_Auth_DeletePersistentAuth(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Auth_DeletePersistentAuth");
        exit(EXIT_FAILURE);
    }
}

EOS_EpicAccountId (*__on_EOS_Auth_GetLoggedInAccountByIndex)(EOS_HAuth Handle, int32_t Index) = NULL;

EOS_EpicAccountId EOS_Auth_GetLoggedInAccountByIndex(EOS_HAuth Handle, int32_t Index) {
    if(NULL != __on_EOS_Auth_GetLoggedInAccountByIndex) {
        return __on_EOS_Auth_GetLoggedInAccountByIndex(Handle, Index);
    } else {
        assert(!"NULL == __on_EOS_Auth_GetLoggedInAccountByIndex");
        exit(EXIT_FAILURE);
    }
}

int32_t (*__on_EOS_Auth_GetLoggedInAccountsCount)(EOS_HAuth Handle) = NULL;

int32_t EOS_Auth_GetLoggedInAccountsCount(EOS_HAuth Handle) {
    if(NULL != __on_EOS_Auth_GetLoggedInAccountsCount) {
        return __on_EOS_Auth_GetLoggedInAccountsCount(Handle);
    } else {
        assert(!"NULL == __on_EOS_Auth_GetLoggedInAccountsCount");
        exit(EXIT_FAILURE);
    }
}

EOS_ELoginStatus (*__on_EOS_Auth_GetLoginStatus)(EOS_HAuth Handle, EOS_EpicAccountId LocalUserId) = NULL;

EOS_ELoginStatus EOS_Auth_GetLoginStatus(EOS_HAuth Handle, EOS_EpicAccountId LocalUserId) {
    if(NULL != __on_EOS_Auth_GetLoginStatus) {
        return __on_EOS_Auth_GetLoginStatus(Handle, LocalUserId);
    } else {
        assert(!"NULL == __on_EOS_Auth_GetLoginStatus");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_LinkAccount)(EOS_HAuth Handle, const EOS_Auth_LinkAccountOptions *Options, void *ClientData, const EOS_Auth_OnLinkAccountCallback CompletionDelegate) = NULL;

void EOS_Auth_LinkAccount(EOS_HAuth Handle, const EOS_Auth_LinkAccountOptions *Options, void *ClientData, const EOS_Auth_OnLinkAccountCallback CompletionDelegate) {
    if(NULL != __on_EOS_Auth_LinkAccount) {
        __on_EOS_Auth_LinkAccount(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Auth_LinkAccount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_Login)(EOS_HAuth Handle, const EOS_Auth_LoginOptions *Options, void *ClientData, const EOS_Auth_OnLoginCallback CompletionDelegate) = NULL;

void EOS_Auth_Login(EOS_HAuth Handle, const EOS_Auth_LoginOptions *Options, void *ClientData, const EOS_Auth_OnLoginCallback CompletionDelegate) {
    if(NULL != __on_EOS_Auth_Login) {
        __on_EOS_Auth_Login(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Auth_Login");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_Logout)(EOS_HAuth Handle, const EOS_Auth_LogoutOptions *Options, void *ClientData, const EOS_Auth_OnLogoutCallback CompletionDelegate) = NULL;

void EOS_Auth_Logout(EOS_HAuth Handle, const EOS_Auth_LogoutOptions *Options, void *ClientData, const EOS_Auth_OnLogoutCallback CompletionDelegate) {
    if(NULL != __on_EOS_Auth_Logout) {
        __on_EOS_Auth_Logout(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Auth_Logout");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_RemoveNotifyLoginStatusChanged)(EOS_HAuth Handle, EOS_NotificationId InId) = NULL;

void EOS_Auth_RemoveNotifyLoginStatusChanged(EOS_HAuth Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Auth_RemoveNotifyLoginStatusChanged) {
        __on_EOS_Auth_RemoveNotifyLoginStatusChanged(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Auth_RemoveNotifyLoginStatusChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_Token_Release)(EOS_Auth_Token *AuthToken) = NULL;

void EOS_Auth_Token_Release(EOS_Auth_Token *AuthToken) {
    if(NULL != __on_EOS_Auth_Token_Release) {
        __on_EOS_Auth_Token_Release(AuthToken);
    } else {
        assert(!"NULL == __on_EOS_Auth_Token_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Auth_VerifyUserAuth)(EOS_HAuth Handle, const EOS_Auth_VerifyUserAuthOptions *Options, void *ClientData, const EOS_Auth_OnVerifyUserAuthCallback CompletionDelegate) = NULL;

void EOS_Auth_VerifyUserAuth(EOS_HAuth Handle, const EOS_Auth_VerifyUserAuthOptions *Options, void *ClientData, const EOS_Auth_OnVerifyUserAuthCallback CompletionDelegate) {
    if(NULL != __on_EOS_Auth_VerifyUserAuth) {
        __on_EOS_Auth_VerifyUserAuth(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Auth_VerifyUserAuth");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_ByteArray_ToString)(const uint8_t *ByteArray, const uint32_t Length, char *OutBuffer, uint32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_ByteArray_ToString(const uint8_t *ByteArray, const uint32_t Length, char *OutBuffer, uint32_t *InOutBufferLength) {
    if(NULL != __on_EOS_ByteArray_ToString) {
        return __on_EOS_ByteArray_ToString(ByteArray, Length, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_ByteArray_ToString");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Connect_AddNotifyAuthExpiration)(EOS_HConnect Handle, const EOS_Connect_AddNotifyAuthExpirationOptions *Options, void *ClientData, const EOS_Connect_OnAuthExpirationCallback Notification) = NULL;

EOS_NotificationId EOS_Connect_AddNotifyAuthExpiration(EOS_HConnect Handle, const EOS_Connect_AddNotifyAuthExpirationOptions *Options, void *ClientData, const EOS_Connect_OnAuthExpirationCallback Notification) {
    if(NULL != __on_EOS_Connect_AddNotifyAuthExpiration) {
        return __on_EOS_Connect_AddNotifyAuthExpiration(Handle, Options, ClientData, Notification);
    } else {
        assert(!"NULL == __on_EOS_Connect_AddNotifyAuthExpiration");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Connect_AddNotifyLoginStatusChanged)(EOS_HConnect Handle, const EOS_Connect_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Connect_OnLoginStatusChangedCallback Notification) = NULL;

EOS_NotificationId EOS_Connect_AddNotifyLoginStatusChanged(EOS_HConnect Handle, const EOS_Connect_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Connect_OnLoginStatusChangedCallback Notification) {
    if(NULL != __on_EOS_Connect_AddNotifyLoginStatusChanged) {
        return __on_EOS_Connect_AddNotifyLoginStatusChanged(Handle, Options, ClientData, Notification);
    } else {
        assert(!"NULL == __on_EOS_Connect_AddNotifyLoginStatusChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByAccountId)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;

EOS_EResult EOS_Connect_CopyProductUserExternalAccountByAccountId(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    if(NULL != __on_EOS_Connect_CopyProductUserExternalAccountByAccountId) {
        return __on_EOS_Connect_CopyProductUserExternalAccountByAccountId(Handle, Options, OutExternalAccountInfo);
    } else {
        assert(!"NULL == __on_EOS_Connect_CopyProductUserExternalAccountByAccountId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByAccountType)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;

EOS_EResult EOS_Connect_CopyProductUserExternalAccountByAccountType(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    if(NULL != __on_EOS_Connect_CopyProductUserExternalAccountByAccountType) {
        return __on_EOS_Connect_CopyProductUserExternalAccountByAccountType(Handle, Options, OutExternalAccountInfo);
    } else {
        assert(!"NULL == __on_EOS_Connect_CopyProductUserExternalAccountByAccountType");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByIndex)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByIndexOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;

EOS_EResult EOS_Connect_CopyProductUserExternalAccountByIndex(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByIndexOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    if(NULL != __on_EOS_Connect_CopyProductUserExternalAccountByIndex) {
        return __on_EOS_Connect_CopyProductUserExternalAccountByIndex(Handle, Options, OutExternalAccountInfo);
    } else {
        assert(!"NULL == __on_EOS_Connect_CopyProductUserExternalAccountByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Connect_CopyProductUserInfo)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserInfoOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) = NULL;

EOS_EResult EOS_Connect_CopyProductUserInfo(EOS_HConnect Handle, const EOS_Connect_CopyProductUserInfoOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo) {
    if(NULL != __on_EOS_Connect_CopyProductUserInfo) {
        return __on_EOS_Connect_CopyProductUserInfo(Handle, Options, OutExternalAccountInfo);
    } else {
        assert(!"NULL == __on_EOS_Connect_CopyProductUserInfo");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_CreateDeviceId)(EOS_HConnect Handle, const EOS_Connect_CreateDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnCreateDeviceIdCallback CompletionDelegate) = NULL;

void EOS_Connect_CreateDeviceId(EOS_HConnect Handle, const EOS_Connect_CreateDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnCreateDeviceIdCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_CreateDeviceId) {
        __on_EOS_Connect_CreateDeviceId(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_CreateDeviceId");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_CreateUser)(EOS_HConnect Handle, const EOS_Connect_CreateUserOptions *Options, void *ClientData, const EOS_Connect_OnCreateUserCallback CompletionDelegate) = NULL;

void EOS_Connect_CreateUser(EOS_HConnect Handle, const EOS_Connect_CreateUserOptions *Options, void *ClientData, const EOS_Connect_OnCreateUserCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_CreateUser) {
        __on_EOS_Connect_CreateUser(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_CreateUser");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_DeleteDeviceId)(EOS_HConnect Handle, const EOS_Connect_DeleteDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnDeleteDeviceIdCallback CompletionDelegate) = NULL;

void EOS_Connect_DeleteDeviceId(EOS_HConnect Handle, const EOS_Connect_DeleteDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnDeleteDeviceIdCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_DeleteDeviceId) {
        __on_EOS_Connect_DeleteDeviceId(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_DeleteDeviceId");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_ExternalAccountInfo_Release)(EOS_Connect_ExternalAccountInfo *ExternalAccountInfo) = NULL;

void EOS_Connect_ExternalAccountInfo_Release(EOS_Connect_ExternalAccountInfo *ExternalAccountInfo) {
    if(NULL != __on_EOS_Connect_ExternalAccountInfo_Release) {
        __on_EOS_Connect_ExternalAccountInfo_Release(ExternalAccountInfo);
    } else {
        assert(!"NULL == __on_EOS_Connect_ExternalAccountInfo_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_ProductUserId (*__on_EOS_Connect_GetExternalAccountMapping)(EOS_HConnect Handle, const EOS_Connect_GetExternalAccountMappingsOptions *Options) = NULL;

EOS_ProductUserId EOS_Connect_GetExternalAccountMapping(EOS_HConnect Handle, const EOS_Connect_GetExternalAccountMappingsOptions *Options) {
    if(NULL != __on_EOS_Connect_GetExternalAccountMapping) {
        return __on_EOS_Connect_GetExternalAccountMapping(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Connect_GetExternalAccountMapping");
        exit(EXIT_FAILURE);
    }
}

EOS_ProductUserId (*__on_EOS_Connect_GetLoggedInUserByIndex)(EOS_HConnect Handle, int32_t Index) = NULL;

EOS_ProductUserId EOS_Connect_GetLoggedInUserByIndex(EOS_HConnect Handle, int32_t Index) {
    if(NULL != __on_EOS_Connect_GetLoggedInUserByIndex) {
        return __on_EOS_Connect_GetLoggedInUserByIndex(Handle, Index);
    } else {
        assert(!"NULL == __on_EOS_Connect_GetLoggedInUserByIndex");
        exit(EXIT_FAILURE);
    }
}

int32_t (*__on_EOS_Connect_GetLoggedInUsersCount)(EOS_HConnect Handle) = NULL;

int32_t EOS_Connect_GetLoggedInUsersCount(EOS_HConnect Handle) {
    if(NULL != __on_EOS_Connect_GetLoggedInUsersCount) {
        return __on_EOS_Connect_GetLoggedInUsersCount(Handle);
    } else {
        assert(!"NULL == __on_EOS_Connect_GetLoggedInUsersCount");
        exit(EXIT_FAILURE);
    }
}

EOS_ELoginStatus (*__on_EOS_Connect_GetLoginStatus)(EOS_HConnect Handle, EOS_ProductUserId LocalUserId) = NULL;

EOS_ELoginStatus EOS_Connect_GetLoginStatus(EOS_HConnect Handle, EOS_ProductUserId LocalUserId) {
    if(NULL != __on_EOS_Connect_GetLoginStatus) {
        return __on_EOS_Connect_GetLoginStatus(Handle, LocalUserId);
    } else {
        assert(!"NULL == __on_EOS_Connect_GetLoginStatus");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Connect_GetProductUserExternalAccountCount)(EOS_HConnect Handle, const EOS_Connect_GetProductUserExternalAccountCountOptions *Options) = NULL;

uint32_t EOS_Connect_GetProductUserExternalAccountCount(EOS_HConnect Handle, const EOS_Connect_GetProductUserExternalAccountCountOptions *Options) {
    if(NULL != __on_EOS_Connect_GetProductUserExternalAccountCount) {
        return __on_EOS_Connect_GetProductUserExternalAccountCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Connect_GetProductUserExternalAccountCount");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Connect_GetProductUserIdMapping)(EOS_HConnect Handle, const EOS_Connect_GetProductUserIdMappingOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Connect_GetProductUserIdMapping(EOS_HConnect Handle, const EOS_Connect_GetProductUserIdMappingOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Connect_GetProductUserIdMapping) {
        return __on_EOS_Connect_GetProductUserIdMapping(Handle, Options, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Connect_GetProductUserIdMapping");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_LinkAccount)(EOS_HConnect Handle, const EOS_Connect_LinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnLinkAccountCallback CompletionDelegate) = NULL;

void EOS_Connect_LinkAccount(EOS_HConnect Handle, const EOS_Connect_LinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnLinkAccountCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_LinkAccount) {
        __on_EOS_Connect_LinkAccount(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_LinkAccount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_Login)(EOS_HConnect Handle, const EOS_Connect_LoginOptions *Options, void *ClientData, const EOS_Connect_OnLoginCallback CompletionDelegate) = NULL;

void EOS_Connect_Login(EOS_HConnect Handle, const EOS_Connect_LoginOptions *Options, void *ClientData, const EOS_Connect_OnLoginCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_Login) {
        __on_EOS_Connect_Login(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_Login");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_QueryExternalAccountMappings)(EOS_HConnect Handle, const EOS_Connect_QueryExternalAccountMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryExternalAccountMappingsCallback CompletionDelegate) = NULL;

void EOS_Connect_QueryExternalAccountMappings(EOS_HConnect Handle, const EOS_Connect_QueryExternalAccountMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryExternalAccountMappingsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_QueryExternalAccountMappings) {
        __on_EOS_Connect_QueryExternalAccountMappings(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_QueryExternalAccountMappings");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_QueryProductUserIdMappings)(EOS_HConnect Handle, const EOS_Connect_QueryProductUserIdMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryProductUserIdMappingsCallback CompletionDelegate) = NULL;

void EOS_Connect_QueryProductUserIdMappings(EOS_HConnect Handle, const EOS_Connect_QueryProductUserIdMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryProductUserIdMappingsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_QueryProductUserIdMappings) {
        __on_EOS_Connect_QueryProductUserIdMappings(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_QueryProductUserIdMappings");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_RemoveNotifyAuthExpiration)(EOS_HConnect Handle, EOS_NotificationId InId) = NULL;

void EOS_Connect_RemoveNotifyAuthExpiration(EOS_HConnect Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Connect_RemoveNotifyAuthExpiration) {
        __on_EOS_Connect_RemoveNotifyAuthExpiration(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Connect_RemoveNotifyAuthExpiration");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_RemoveNotifyLoginStatusChanged)(EOS_HConnect Handle, EOS_NotificationId InId) = NULL;

void EOS_Connect_RemoveNotifyLoginStatusChanged(EOS_HConnect Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Connect_RemoveNotifyLoginStatusChanged) {
        __on_EOS_Connect_RemoveNotifyLoginStatusChanged(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Connect_RemoveNotifyLoginStatusChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_TransferDeviceIdAccount)(EOS_HConnect Handle, const EOS_Connect_TransferDeviceIdAccountOptions *Options, void *ClientData, const EOS_Connect_OnTransferDeviceIdAccountCallback CompletionDelegate) = NULL;

void EOS_Connect_TransferDeviceIdAccount(EOS_HConnect Handle, const EOS_Connect_TransferDeviceIdAccountOptions *Options, void *ClientData, const EOS_Connect_OnTransferDeviceIdAccountCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_TransferDeviceIdAccount) {
        __on_EOS_Connect_TransferDeviceIdAccount(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_TransferDeviceIdAccount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Connect_UnlinkAccount)(EOS_HConnect Handle, const EOS_Connect_UnlinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnUnlinkAccountCallback CompletionDelegate) = NULL;

void EOS_Connect_UnlinkAccount(EOS_HConnect Handle, const EOS_Connect_UnlinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnUnlinkAccountCallback CompletionDelegate) {
    if(NULL != __on_EOS_Connect_UnlinkAccount) {
        __on_EOS_Connect_UnlinkAccount(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Connect_UnlinkAccount");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_ContinuanceToken_ToString)(EOS_ContinuanceToken ContinuanceToken, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_ContinuanceToken_ToString(EOS_ContinuanceToken ContinuanceToken, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_ContinuanceToken_ToString) {
        return __on_EOS_ContinuanceToken_ToString(ContinuanceToken, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_ContinuanceToken_ToString");
        exit(EXIT_FAILURE);
    }
}

EOS_Bool (*__on_EOS_EResult_IsOperationComplete)(EOS_EResult Result) = NULL;

EOS_Bool EOS_EResult_IsOperationComplete(EOS_EResult Result) {
    if(NULL != __on_EOS_EResult_IsOperationComplete) {
        return __on_EOS_EResult_IsOperationComplete(Result);
    } else {
        assert(!"NULL == __on_EOS_EResult_IsOperationComplete");
        exit(EXIT_FAILURE);
    }
}

const char *(*__on_EOS_EResult_ToString)(EOS_EResult Result) = NULL;

const char *EOS_EResult_ToString(EOS_EResult Result) {
    if(NULL != __on_EOS_EResult_ToString) {
        return __on_EOS_EResult_ToString(Result);
    } else {
        assert(!"NULL == __on_EOS_EResult_ToString");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_CatalogItem_Release)(EOS_Ecom_CatalogItem *CatalogItem) = NULL;

void EOS_Ecom_CatalogItem_Release(EOS_Ecom_CatalogItem *CatalogItem) {
    if(NULL != __on_EOS_Ecom_CatalogItem_Release) {
        __on_EOS_Ecom_CatalogItem_Release(CatalogItem);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CatalogItem_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_CatalogOffer_Release)(EOS_Ecom_CatalogOffer *CatalogOffer) = NULL;

void EOS_Ecom_CatalogOffer_Release(EOS_Ecom_CatalogOffer *CatalogOffer) {
    if(NULL != __on_EOS_Ecom_CatalogOffer_Release) {
        __on_EOS_Ecom_CatalogOffer_Release(CatalogOffer);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CatalogOffer_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_CatalogRelease_Release)(EOS_Ecom_CatalogRelease *CatalogRelease) = NULL;

void EOS_Ecom_CatalogRelease_Release(EOS_Ecom_CatalogRelease *CatalogRelease) {
    if(NULL != __on_EOS_Ecom_CatalogRelease_Release) {
        __on_EOS_Ecom_CatalogRelease_Release(CatalogRelease);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CatalogRelease_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_Checkout)(EOS_HEcom Handle, const EOS_Ecom_CheckoutOptions *Options, void *ClientData, const EOS_Ecom_OnCheckoutCallback CompletionDelegate) = NULL;

void EOS_Ecom_Checkout(EOS_HEcom Handle, const EOS_Ecom_CheckoutOptions *Options, void *ClientData, const EOS_Ecom_OnCheckoutCallback CompletionDelegate) {
    if(NULL != __on_EOS_Ecom_Checkout) {
        __on_EOS_Ecom_Checkout(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Ecom_Checkout");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyEntitlementById)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIdOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;

EOS_EResult EOS_Ecom_CopyEntitlementById(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIdOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    if(NULL != __on_EOS_Ecom_CopyEntitlementById) {
        return __on_EOS_Ecom_CopyEntitlementById(Handle, Options, OutEntitlement);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyEntitlementById");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyEntitlementByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;

EOS_EResult EOS_Ecom_CopyEntitlementByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    if(NULL != __on_EOS_Ecom_CopyEntitlementByIndex) {
        return __on_EOS_Ecom_CopyEntitlementByIndex(Handle, Options, OutEntitlement);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyEntitlementByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyEntitlementByNameAndIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByNameAndIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;

EOS_EResult EOS_Ecom_CopyEntitlementByNameAndIndex(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByNameAndIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    if(NULL != __on_EOS_Ecom_CopyEntitlementByNameAndIndex) {
        return __on_EOS_Ecom_CopyEntitlementByNameAndIndex(Handle, Options, OutEntitlement);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyEntitlementByNameAndIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyItemById)(EOS_HEcom Handle, const EOS_Ecom_CopyItemByIdOptions *Options, EOS_Ecom_CatalogItem **OutItem) = NULL;

EOS_EResult EOS_Ecom_CopyItemById(EOS_HEcom Handle, const EOS_Ecom_CopyItemByIdOptions *Options, EOS_Ecom_CatalogItem **OutItem) {
    if(NULL != __on_EOS_Ecom_CopyItemById) {
        return __on_EOS_Ecom_CopyItemById(Handle, Options, OutItem);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyItemById");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyItemImageInfoByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyItemImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) = NULL;

EOS_EResult EOS_Ecom_CopyItemImageInfoByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyItemImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) {
    if(NULL != __on_EOS_Ecom_CopyItemImageInfoByIndex) {
        return __on_EOS_Ecom_CopyItemImageInfoByIndex(Handle, Options, OutImageInfo);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyItemImageInfoByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyItemReleaseByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyItemReleaseByIndexOptions *Options, EOS_Ecom_CatalogRelease **OutRelease) = NULL;

EOS_EResult EOS_Ecom_CopyItemReleaseByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyItemReleaseByIndexOptions *Options, EOS_Ecom_CatalogRelease **OutRelease) {
    if(NULL != __on_EOS_Ecom_CopyItemReleaseByIndex) {
        return __on_EOS_Ecom_CopyItemReleaseByIndex(Handle, Options, OutRelease);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyItemReleaseByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferById)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIdOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) = NULL;

EOS_EResult EOS_Ecom_CopyOfferById(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIdOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) {
    if(NULL != __on_EOS_Ecom_CopyOfferById) {
        return __on_EOS_Ecom_CopyOfferById(Handle, Options, OutOffer);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyOfferById");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIndexOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) = NULL;

EOS_EResult EOS_Ecom_CopyOfferByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIndexOptions *Options, EOS_Ecom_CatalogOffer **OutOffer) {
    if(NULL != __on_EOS_Ecom_CopyOfferByIndex) {
        return __on_EOS_Ecom_CopyOfferByIndex(Handle, Options, OutOffer);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyOfferByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferImageInfoByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) = NULL;

EOS_EResult EOS_Ecom_CopyOfferImageInfoByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyOfferImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo) {
    if(NULL != __on_EOS_Ecom_CopyOfferImageInfoByIndex) {
        return __on_EOS_Ecom_CopyOfferImageInfoByIndex(Handle, Options, OutImageInfo);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyOfferImageInfoByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyOfferItemByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferItemByIndexOptions *Options, EOS_Ecom_CatalogItem **OutItem) = NULL;

EOS_EResult EOS_Ecom_CopyOfferItemByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyOfferItemByIndexOptions *Options, EOS_Ecom_CatalogItem **OutItem) {
    if(NULL != __on_EOS_Ecom_CopyOfferItemByIndex) {
        return __on_EOS_Ecom_CopyOfferItemByIndex(Handle, Options, OutItem);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyOfferItemByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyTransactionById)(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIdOptions *Options, EOS_Ecom_HTransaction *OutTransaction) = NULL;

EOS_EResult EOS_Ecom_CopyTransactionById(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIdOptions *Options, EOS_Ecom_HTransaction *OutTransaction) {
    if(NULL != __on_EOS_Ecom_CopyTransactionById) {
        return __on_EOS_Ecom_CopyTransactionById(Handle, Options, OutTransaction);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyTransactionById");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_CopyTransactionByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIndexOptions *Options, EOS_Ecom_HTransaction *OutTransaction) = NULL;

EOS_EResult EOS_Ecom_CopyTransactionByIndex(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIndexOptions *Options, EOS_Ecom_HTransaction *OutTransaction) {
    if(NULL != __on_EOS_Ecom_CopyTransactionByIndex) {
        return __on_EOS_Ecom_CopyTransactionByIndex(Handle, Options, OutTransaction);
    } else {
        assert(!"NULL == __on_EOS_Ecom_CopyTransactionByIndex");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_Entitlement_Release)(EOS_Ecom_Entitlement *Entitlement) = NULL;

void EOS_Ecom_Entitlement_Release(EOS_Ecom_Entitlement *Entitlement) {
    if(NULL != __on_EOS_Ecom_Entitlement_Release) {
        __on_EOS_Ecom_Entitlement_Release(Entitlement);
    } else {
        assert(!"NULL == __on_EOS_Ecom_Entitlement_Release");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetEntitlementsByNameCount)(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsByNameCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetEntitlementsByNameCount(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsByNameCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetEntitlementsByNameCount) {
        return __on_EOS_Ecom_GetEntitlementsByNameCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetEntitlementsByNameCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetEntitlementsCount)(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetEntitlementsCount(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetEntitlementsCount) {
        return __on_EOS_Ecom_GetEntitlementsCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetEntitlementsCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetItemImageInfoCount)(EOS_HEcom Handle, const EOS_Ecom_GetItemImageInfoCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetItemImageInfoCount(EOS_HEcom Handle, const EOS_Ecom_GetItemImageInfoCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetItemImageInfoCount) {
        return __on_EOS_Ecom_GetItemImageInfoCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetItemImageInfoCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetItemReleaseCount)(EOS_HEcom Handle, const EOS_Ecom_GetItemReleaseCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetItemReleaseCount(EOS_HEcom Handle, const EOS_Ecom_GetItemReleaseCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetItemReleaseCount) {
        return __on_EOS_Ecom_GetItemReleaseCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetItemReleaseCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetOfferCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetOfferCount(EOS_HEcom Handle, const EOS_Ecom_GetOfferCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetOfferCount) {
        return __on_EOS_Ecom_GetOfferCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetOfferCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetOfferImageInfoCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferImageInfoCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetOfferImageInfoCount(EOS_HEcom Handle, const EOS_Ecom_GetOfferImageInfoCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetOfferImageInfoCount) {
        return __on_EOS_Ecom_GetOfferImageInfoCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetOfferImageInfoCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetOfferItemCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferItemCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetOfferItemCount(EOS_HEcom Handle, const EOS_Ecom_GetOfferItemCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetOfferItemCount) {
        return __on_EOS_Ecom_GetOfferItemCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetOfferItemCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_GetTransactionCount)(EOS_HEcom Handle, const EOS_Ecom_GetTransactionCountOptions *Options) = NULL;

uint32_t EOS_Ecom_GetTransactionCount(EOS_HEcom Handle, const EOS_Ecom_GetTransactionCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_GetTransactionCount) {
        return __on_EOS_Ecom_GetTransactionCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_GetTransactionCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_KeyImageInfo_Release)(EOS_Ecom_KeyImageInfo *KeyImageInfo) = NULL;

void EOS_Ecom_KeyImageInfo_Release(EOS_Ecom_KeyImageInfo *KeyImageInfo) {
    if(NULL != __on_EOS_Ecom_KeyImageInfo_Release) {
        __on_EOS_Ecom_KeyImageInfo_Release(KeyImageInfo);
    } else {
        assert(!"NULL == __on_EOS_Ecom_KeyImageInfo_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_QueryEntitlements)(EOS_HEcom Handle, const EOS_Ecom_QueryEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnQueryEntitlementsCallback CompletionDelegate) = NULL;

void EOS_Ecom_QueryEntitlements(EOS_HEcom Handle, const EOS_Ecom_QueryEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnQueryEntitlementsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Ecom_QueryEntitlements) {
        __on_EOS_Ecom_QueryEntitlements(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Ecom_QueryEntitlements");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_QueryOffers)(EOS_HEcom Handle, const EOS_Ecom_QueryOffersOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOffersCallback CompletionDelegate) = NULL;

void EOS_Ecom_QueryOffers(EOS_HEcom Handle, const EOS_Ecom_QueryOffersOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOffersCallback CompletionDelegate) {
    if(NULL != __on_EOS_Ecom_QueryOffers) {
        __on_EOS_Ecom_QueryOffers(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Ecom_QueryOffers");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_QueryOwnership)(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipCallback CompletionDelegate) = NULL;

void EOS_Ecom_QueryOwnership(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipCallback CompletionDelegate) {
    if(NULL != __on_EOS_Ecom_QueryOwnership) {
        __on_EOS_Ecom_QueryOwnership(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Ecom_QueryOwnership");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_QueryOwnershipToken)(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipTokenOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipTokenCallback CompletionDelegate) = NULL;

void EOS_Ecom_QueryOwnershipToken(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipTokenOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipTokenCallback CompletionDelegate) {
    if(NULL != __on_EOS_Ecom_QueryOwnershipToken) {
        __on_EOS_Ecom_QueryOwnershipToken(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Ecom_QueryOwnershipToken");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_RedeemEntitlements)(EOS_HEcom Handle, const EOS_Ecom_RedeemEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnRedeemEntitlementsCallback CompletionDelegate) = NULL;

void EOS_Ecom_RedeemEntitlements(EOS_HEcom Handle, const EOS_Ecom_RedeemEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnRedeemEntitlementsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Ecom_RedeemEntitlements) {
        __on_EOS_Ecom_RedeemEntitlements(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Ecom_RedeemEntitlements");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_Transaction_CopyEntitlementByIndex)(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) = NULL;

EOS_EResult EOS_Ecom_Transaction_CopyEntitlementByIndex(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement) {
    if(NULL != __on_EOS_Ecom_Transaction_CopyEntitlementByIndex) {
        return __on_EOS_Ecom_Transaction_CopyEntitlementByIndex(Handle, Options, OutEntitlement);
    } else {
        assert(!"NULL == __on_EOS_Ecom_Transaction_CopyEntitlementByIndex");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Ecom_Transaction_GetEntitlementsCount)(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_GetEntitlementsCountOptions *Options) = NULL;

uint32_t EOS_Ecom_Transaction_GetEntitlementsCount(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_GetEntitlementsCountOptions *Options) {
    if(NULL != __on_EOS_Ecom_Transaction_GetEntitlementsCount) {
        return __on_EOS_Ecom_Transaction_GetEntitlementsCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Ecom_Transaction_GetEntitlementsCount");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Ecom_Transaction_GetTransactionId)(EOS_Ecom_HTransaction Handle, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Ecom_Transaction_GetTransactionId(EOS_Ecom_HTransaction Handle, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Ecom_Transaction_GetTransactionId) {
        return __on_EOS_Ecom_Transaction_GetTransactionId(Handle, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Ecom_Transaction_GetTransactionId");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Ecom_Transaction_Release)(EOS_Ecom_HTransaction Transaction) = NULL;

void EOS_Ecom_Transaction_Release(EOS_Ecom_HTransaction Transaction) {
    if(NULL != __on_EOS_Ecom_Transaction_Release) {
        __on_EOS_Ecom_Transaction_Release(Transaction);
    } else {
        assert(!"NULL == __on_EOS_Ecom_Transaction_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EpicAccountId (*__on_EOS_EpicAccountId_FromString)(const char *AccountIdString) = NULL;

EOS_EpicAccountId EOS_EpicAccountId_FromString(const char *AccountIdString) {
    if(NULL != __on_EOS_EpicAccountId_FromString) {
        return __on_EOS_EpicAccountId_FromString(AccountIdString);
    } else {
        assert(!"NULL == __on_EOS_EpicAccountId_FromString");
        exit(EXIT_FAILURE);
    }
}

EOS_Bool (*__on_EOS_EpicAccountId_IsValid)(EOS_EpicAccountId AccountId) = NULL;

EOS_Bool EOS_EpicAccountId_IsValid(EOS_EpicAccountId AccountId) {
    if(NULL != __on_EOS_EpicAccountId_IsValid) {
        return __on_EOS_EpicAccountId_IsValid(AccountId);
    } else {
        assert(!"NULL == __on_EOS_EpicAccountId_IsValid");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_EpicAccountId_ToString)(EOS_EpicAccountId AccountId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_EpicAccountId_ToString(EOS_EpicAccountId AccountId, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_EpicAccountId_ToString) {
        return __on_EOS_EpicAccountId_ToString(AccountId, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_EpicAccountId_ToString");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Friends_AcceptInvite)(EOS_HFriends Handle, const EOS_Friends_AcceptInviteOptions *Options, void *ClientData, const EOS_Friends_OnAcceptInviteCallback CompletionDelegate) = NULL;

void EOS_Friends_AcceptInvite(EOS_HFriends Handle, const EOS_Friends_AcceptInviteOptions *Options, void *ClientData, const EOS_Friends_OnAcceptInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Friends_AcceptInvite) {
        __on_EOS_Friends_AcceptInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Friends_AcceptInvite");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Friends_AddNotifyFriendsUpdate)(EOS_HFriends Handle, const EOS_Friends_AddNotifyFriendsUpdateOptions *Options, void *ClientData, const EOS_Friends_OnFriendsUpdateCallback FriendsUpdateHandler) = NULL;

EOS_NotificationId EOS_Friends_AddNotifyFriendsUpdate(EOS_HFriends Handle, const EOS_Friends_AddNotifyFriendsUpdateOptions *Options, void *ClientData, const EOS_Friends_OnFriendsUpdateCallback FriendsUpdateHandler) {
    if(NULL != __on_EOS_Friends_AddNotifyFriendsUpdate) {
        return __on_EOS_Friends_AddNotifyFriendsUpdate(Handle, Options, ClientData, FriendsUpdateHandler);
    } else {
        assert(!"NULL == __on_EOS_Friends_AddNotifyFriendsUpdate");
        exit(EXIT_FAILURE);
    }
}

EOS_EpicAccountId (*__on_EOS_Friends_GetFriendAtIndex)(EOS_HFriends Handle, const EOS_Friends_GetFriendAtIndexOptions *Options) = NULL;

EOS_EpicAccountId EOS_Friends_GetFriendAtIndex(EOS_HFriends Handle, const EOS_Friends_GetFriendAtIndexOptions *Options) {
    if(NULL != __on_EOS_Friends_GetFriendAtIndex) {
        return __on_EOS_Friends_GetFriendAtIndex(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Friends_GetFriendAtIndex");
        exit(EXIT_FAILURE);
    }
}

int32_t (*__on_EOS_Friends_GetFriendsCount)(EOS_HFriends Handle, const EOS_Friends_GetFriendsCountOptions *Options) = NULL;

int32_t EOS_Friends_GetFriendsCount(EOS_HFriends Handle, const EOS_Friends_GetFriendsCountOptions *Options) {
    if(NULL != __on_EOS_Friends_GetFriendsCount) {
        return __on_EOS_Friends_GetFriendsCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Friends_GetFriendsCount");
        exit(EXIT_FAILURE);
    }
}

EOS_EFriendsStatus (*__on_EOS_Friends_GetStatus)(EOS_HFriends Handle, const EOS_Friends_GetStatusOptions *Options) = NULL;

EOS_EFriendsStatus EOS_Friends_GetStatus(EOS_HFriends Handle, const EOS_Friends_GetStatusOptions *Options) {
    if(NULL != __on_EOS_Friends_GetStatus) {
        return __on_EOS_Friends_GetStatus(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Friends_GetStatus");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Friends_QueryFriends)(EOS_HFriends Handle, const EOS_Friends_QueryFriendsOptions *Options, void *ClientData, const EOS_Friends_OnQueryFriendsCallback CompletionDelegate) = NULL;

void EOS_Friends_QueryFriends(EOS_HFriends Handle, const EOS_Friends_QueryFriendsOptions *Options, void *ClientData, const EOS_Friends_OnQueryFriendsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Friends_QueryFriends) {
        __on_EOS_Friends_QueryFriends(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Friends_QueryFriends");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Friends_RejectInvite)(EOS_HFriends Handle, const EOS_Friends_RejectInviteOptions *Options, void *ClientData, const EOS_Friends_OnRejectInviteCallback CompletionDelegate) = NULL;

void EOS_Friends_RejectInvite(EOS_HFriends Handle, const EOS_Friends_RejectInviteOptions *Options, void *ClientData, const EOS_Friends_OnRejectInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Friends_RejectInvite) {
        __on_EOS_Friends_RejectInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Friends_RejectInvite");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Friends_RemoveNotifyFriendsUpdate)(EOS_HFriends Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_Friends_RemoveNotifyFriendsUpdate(EOS_HFriends Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_Friends_RemoveNotifyFriendsUpdate) {
        __on_EOS_Friends_RemoveNotifyFriendsUpdate(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_Friends_RemoveNotifyFriendsUpdate");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Friends_SendInvite)(EOS_HFriends Handle, const EOS_Friends_SendInviteOptions *Options, void *ClientData, const EOS_Friends_OnSendInviteCallback CompletionDelegate) = NULL;

void EOS_Friends_SendInvite(EOS_HFriends Handle, const EOS_Friends_SendInviteOptions *Options, void *ClientData, const EOS_Friends_OnSendInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Friends_SendInvite) {
        __on_EOS_Friends_SendInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Friends_SendInvite");
        exit(EXIT_FAILURE);
    }
}

const char *(*__on_EOS_GetVersion)() = NULL;

const char *EOS_GetVersion() {
    if(NULL != __on_EOS_GetVersion) {
        return __on_EOS_GetVersion();
    } else {
        assert(!"NULL == __on_EOS_GetVersion");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Initialize)(const EOS_InitializeOptions *Options) = NULL;

EOS_EResult EOS_Initialize(const EOS_InitializeOptions *Options) {
    if(NULL != __on_EOS_Initialize) {
        return __on_EOS_Initialize(Options);
    } else {
        assert(!"NULL == __on_EOS_Initialize");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_KWS_AddNotifyPermissionsUpdateReceived)(EOS_HKWS Handle, const EOS_KWS_AddNotifyPermissionsUpdateReceivedOptions *Options, void *ClientData, const EOS_KWS_OnPermissionsUpdateReceivedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_KWS_AddNotifyPermissionsUpdateReceived(EOS_HKWS Handle, const EOS_KWS_AddNotifyPermissionsUpdateReceivedOptions *Options, void *ClientData, const EOS_KWS_OnPermissionsUpdateReceivedCallback NotificationFn) {
    if(NULL != __on_EOS_KWS_AddNotifyPermissionsUpdateReceived) {
        return __on_EOS_KWS_AddNotifyPermissionsUpdateReceived(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_KWS_AddNotifyPermissionsUpdateReceived");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_KWS_CopyPermissionByIndex)(EOS_HKWS Handle, const EOS_KWS_CopyPermissionByIndexOptions *Options, EOS_KWS_PermissionStatus **OutPermission) = NULL;

EOS_EResult EOS_KWS_CopyPermissionByIndex(EOS_HKWS Handle, const EOS_KWS_CopyPermissionByIndexOptions *Options, EOS_KWS_PermissionStatus **OutPermission) {
    if(NULL != __on_EOS_KWS_CopyPermissionByIndex) {
        return __on_EOS_KWS_CopyPermissionByIndex(Handle, Options, OutPermission);
    } else {
        assert(!"NULL == __on_EOS_KWS_CopyPermissionByIndex");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_CreateUser)(EOS_HKWS Handle, const EOS_KWS_CreateUserOptions *Options, void *ClientData, const EOS_KWS_OnCreateUserCallback CompletionDelegate) = NULL;

void EOS_KWS_CreateUser(EOS_HKWS Handle, const EOS_KWS_CreateUserOptions *Options, void *ClientData, const EOS_KWS_OnCreateUserCallback CompletionDelegate) {
    if(NULL != __on_EOS_KWS_CreateUser) {
        __on_EOS_KWS_CreateUser(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_KWS_CreateUser");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_KWS_GetPermissionByKey)(EOS_HKWS Handle, const EOS_KWS_GetPermissionByKeyOptions *Options, EOS_EKWSPermissionStatus *OutPermission) = NULL;

EOS_EResult EOS_KWS_GetPermissionByKey(EOS_HKWS Handle, const EOS_KWS_GetPermissionByKeyOptions *Options, EOS_EKWSPermissionStatus *OutPermission) {
    if(NULL != __on_EOS_KWS_GetPermissionByKey) {
        return __on_EOS_KWS_GetPermissionByKey(Handle, Options, OutPermission);
    } else {
        assert(!"NULL == __on_EOS_KWS_GetPermissionByKey");
        exit(EXIT_FAILURE);
    }
}

int32_t (*__on_EOS_KWS_GetPermissionsCount)(EOS_HKWS Handle, const EOS_KWS_GetPermissionsCountOptions *Options) = NULL;

int32_t EOS_KWS_GetPermissionsCount(EOS_HKWS Handle, const EOS_KWS_GetPermissionsCountOptions *Options) {
    if(NULL != __on_EOS_KWS_GetPermissionsCount) {
        return __on_EOS_KWS_GetPermissionsCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_KWS_GetPermissionsCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_PermissionStatus_Release)(EOS_KWS_PermissionStatus *PermissionStatus) = NULL;

void EOS_KWS_PermissionStatus_Release(EOS_KWS_PermissionStatus *PermissionStatus) {
    if(NULL != __on_EOS_KWS_PermissionStatus_Release) {
        __on_EOS_KWS_PermissionStatus_Release(PermissionStatus);
    } else {
        assert(!"NULL == __on_EOS_KWS_PermissionStatus_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_QueryAgeGate)(EOS_HKWS Handle, const EOS_KWS_QueryAgeGateOptions *Options, void *ClientData, const EOS_KWS_OnQueryAgeGateCallback CompletionDelegate) = NULL;

void EOS_KWS_QueryAgeGate(EOS_HKWS Handle, const EOS_KWS_QueryAgeGateOptions *Options, void *ClientData, const EOS_KWS_OnQueryAgeGateCallback CompletionDelegate) {
    if(NULL != __on_EOS_KWS_QueryAgeGate) {
        __on_EOS_KWS_QueryAgeGate(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_KWS_QueryAgeGate");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_QueryPermissions)(EOS_HKWS Handle, const EOS_KWS_QueryPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnQueryPermissionsCallback CompletionDelegate) = NULL;

void EOS_KWS_QueryPermissions(EOS_HKWS Handle, const EOS_KWS_QueryPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnQueryPermissionsCallback CompletionDelegate) {
    if(NULL != __on_EOS_KWS_QueryPermissions) {
        __on_EOS_KWS_QueryPermissions(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_KWS_QueryPermissions");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived)(EOS_HKWS Handle, EOS_NotificationId InId) = NULL;

void EOS_KWS_RemoveNotifyPermissionsUpdateReceived(EOS_HKWS Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived) {
        __on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_RequestPermissions)(EOS_HKWS Handle, const EOS_KWS_RequestPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnRequestPermissionsCallback CompletionDelegate) = NULL;

void EOS_KWS_RequestPermissions(EOS_HKWS Handle, const EOS_KWS_RequestPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnRequestPermissionsCallback CompletionDelegate) {
    if(NULL != __on_EOS_KWS_RequestPermissions) {
        __on_EOS_KWS_RequestPermissions(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_KWS_RequestPermissions");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_KWS_UpdateParentEmail)(EOS_HKWS Handle, const EOS_KWS_UpdateParentEmailOptions *Options, void *ClientData, const EOS_KWS_OnUpdateParentEmailCallback CompletionDelegate) = NULL;

void EOS_KWS_UpdateParentEmail(EOS_HKWS Handle, const EOS_KWS_UpdateParentEmailOptions *Options, void *ClientData, const EOS_KWS_OnUpdateParentEmailCallback CompletionDelegate) {
    if(NULL != __on_EOS_KWS_UpdateParentEmail) {
        __on_EOS_KWS_UpdateParentEmail(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_KWS_UpdateParentEmail");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) = NULL;

EOS_EResult EOS_Leaderboards_CopyLeaderboardDefinitionByIndex(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) {
    if(NULL != __on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex) {
        return __on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex(Handle, Options, OutLeaderboardDefinition);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) = NULL;

EOS_EResult EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition) {
    if(NULL != __on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId) {
        return __on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId(Handle, Options, OutLeaderboardDefinition);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardRecordByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) = NULL;

EOS_EResult EOS_Leaderboards_CopyLeaderboardRecordByIndex(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) {
    if(NULL != __on_EOS_Leaderboards_CopyLeaderboardRecordByIndex) {
        return __on_EOS_Leaderboards_CopyLeaderboardRecordByIndex(Handle, Options, OutLeaderboardRecord);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_CopyLeaderboardRecordByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardRecordByUserId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) = NULL;

EOS_EResult EOS_Leaderboards_CopyLeaderboardRecordByUserId(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord) {
    if(NULL != __on_EOS_Leaderboards_CopyLeaderboardRecordByUserId) {
        return __on_EOS_Leaderboards_CopyLeaderboardRecordByUserId(Handle, Options, OutLeaderboardRecord);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_CopyLeaderboardRecordByUserId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) = NULL;

EOS_EResult EOS_Leaderboards_CopyLeaderboardUserScoreByIndex(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) {
    if(NULL != __on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex) {
        return __on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex(Handle, Options, OutLeaderboardUserScore);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) = NULL;

EOS_EResult EOS_Leaderboards_CopyLeaderboardUserScoreByUserId(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore) {
    if(NULL != __on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId) {
        return __on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId(Handle, Options, OutLeaderboardUserScore);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_Definition_Release)(EOS_Leaderboards_Definition *LeaderboardDefinition) = NULL;

void EOS_Leaderboards_Definition_Release(EOS_Leaderboards_Definition *LeaderboardDefinition) {
    if(NULL != __on_EOS_Leaderboards_Definition_Release) {
        __on_EOS_Leaderboards_Definition_Release(LeaderboardDefinition);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_Definition_Release");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Leaderboards_GetLeaderboardDefinitionCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardDefinitionCountOptions *Options) = NULL;

uint32_t EOS_Leaderboards_GetLeaderboardDefinitionCount(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardDefinitionCountOptions *Options) {
    if(NULL != __on_EOS_Leaderboards_GetLeaderboardDefinitionCount) {
        return __on_EOS_Leaderboards_GetLeaderboardDefinitionCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_GetLeaderboardDefinitionCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Leaderboards_GetLeaderboardRecordCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardRecordCountOptions *Options) = NULL;

uint32_t EOS_Leaderboards_GetLeaderboardRecordCount(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardRecordCountOptions *Options) {
    if(NULL != __on_EOS_Leaderboards_GetLeaderboardRecordCount) {
        return __on_EOS_Leaderboards_GetLeaderboardRecordCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_GetLeaderboardRecordCount");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Leaderboards_GetLeaderboardUserScoreCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardUserScoreCountOptions *Options) = NULL;

uint32_t EOS_Leaderboards_GetLeaderboardUserScoreCount(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardUserScoreCountOptions *Options) {
    if(NULL != __on_EOS_Leaderboards_GetLeaderboardUserScoreCount) {
        return __on_EOS_Leaderboards_GetLeaderboardUserScoreCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_GetLeaderboardUserScoreCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_LeaderboardDefinition_Release)(EOS_Leaderboards_Definition *LeaderboardDefinition) = NULL;

void EOS_Leaderboards_LeaderboardDefinition_Release(EOS_Leaderboards_Definition *LeaderboardDefinition) {
    if(NULL != __on_EOS_Leaderboards_LeaderboardDefinition_Release) {
        __on_EOS_Leaderboards_LeaderboardDefinition_Release(LeaderboardDefinition);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_LeaderboardDefinition_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_LeaderboardRecord_Release)(EOS_Leaderboards_LeaderboardRecord *LeaderboardRecord) = NULL;

void EOS_Leaderboards_LeaderboardRecord_Release(EOS_Leaderboards_LeaderboardRecord *LeaderboardRecord) {
    if(NULL != __on_EOS_Leaderboards_LeaderboardRecord_Release) {
        __on_EOS_Leaderboards_LeaderboardRecord_Release(LeaderboardRecord);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_LeaderboardRecord_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_LeaderboardUserScore_Release)(EOS_Leaderboards_LeaderboardUserScore *LeaderboardUserScore) = NULL;

void EOS_Leaderboards_LeaderboardUserScore_Release(EOS_Leaderboards_LeaderboardUserScore *LeaderboardUserScore) {
    if(NULL != __on_EOS_Leaderboards_LeaderboardUserScore_Release) {
        __on_EOS_Leaderboards_LeaderboardUserScore_Release(LeaderboardUserScore);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_LeaderboardUserScore_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_QueryLeaderboardDefinitions)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardDefinitionsOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback CompletionDelegate) = NULL;

void EOS_Leaderboards_QueryLeaderboardDefinitions(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardDefinitionsOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Leaderboards_QueryLeaderboardDefinitions) {
        __on_EOS_Leaderboards_QueryLeaderboardDefinitions(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_QueryLeaderboardDefinitions");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_QueryLeaderboardRanks)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardRanksOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallback CompletionDelegate) = NULL;

void EOS_Leaderboards_QueryLeaderboardRanks(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardRanksOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Leaderboards_QueryLeaderboardRanks) {
        __on_EOS_Leaderboards_QueryLeaderboardRanks(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_QueryLeaderboardRanks");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Leaderboards_QueryLeaderboardUserScores)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardUserScoresOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback CompletionDelegate) = NULL;

void EOS_Leaderboards_QueryLeaderboardUserScores(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardUserScoresOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Leaderboards_QueryLeaderboardUserScores) {
        __on_EOS_Leaderboards_QueryLeaderboardUserScores(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Leaderboards_QueryLeaderboardUserScores");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyAttributeByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;

EOS_EResult EOS_LobbyDetails_CopyAttributeByIndex(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    if(NULL != __on_EOS_LobbyDetails_CopyAttributeByIndex) {
        return __on_EOS_LobbyDetails_CopyAttributeByIndex(Handle, Options, OutAttribute);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_CopyAttributeByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyAttributeByKey)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;

EOS_EResult EOS_LobbyDetails_CopyAttributeByKey(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    if(NULL != __on_EOS_LobbyDetails_CopyAttributeByKey) {
        return __on_EOS_LobbyDetails_CopyAttributeByKey(Handle, Options, OutAttribute);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_CopyAttributeByKey");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyInfo)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyInfoOptions *Options, EOS_LobbyDetails_Info **OutLobbyDetailsInfo) = NULL;

EOS_EResult EOS_LobbyDetails_CopyInfo(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyInfoOptions *Options, EOS_LobbyDetails_Info **OutLobbyDetailsInfo) {
    if(NULL != __on_EOS_LobbyDetails_CopyInfo) {
        return __on_EOS_LobbyDetails_CopyInfo(Handle, Options, OutLobbyDetailsInfo);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_CopyInfo");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyMemberAttributeByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;

EOS_EResult EOS_LobbyDetails_CopyMemberAttributeByIndex(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    if(NULL != __on_EOS_LobbyDetails_CopyMemberAttributeByIndex) {
        return __on_EOS_LobbyDetails_CopyMemberAttributeByIndex(Handle, Options, OutAttribute);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_CopyMemberAttributeByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyDetails_CopyMemberAttributeByKey)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) = NULL;

EOS_EResult EOS_LobbyDetails_CopyMemberAttributeByKey(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute) {
    if(NULL != __on_EOS_LobbyDetails_CopyMemberAttributeByKey) {
        return __on_EOS_LobbyDetails_CopyMemberAttributeByKey(Handle, Options, OutAttribute);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_CopyMemberAttributeByKey");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_LobbyDetails_GetAttributeCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetAttributeCountOptions *Options) = NULL;

uint32_t EOS_LobbyDetails_GetAttributeCount(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetAttributeCountOptions *Options) {
    if(NULL != __on_EOS_LobbyDetails_GetAttributeCount) {
        return __on_EOS_LobbyDetails_GetAttributeCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_GetAttributeCount");
        exit(EXIT_FAILURE);
    }
}

EOS_ProductUserId (*__on_EOS_LobbyDetails_GetLobbyOwner)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetLobbyOwnerOptions *Options) = NULL;

EOS_ProductUserId EOS_LobbyDetails_GetLobbyOwner(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetLobbyOwnerOptions *Options) {
    if(NULL != __on_EOS_LobbyDetails_GetLobbyOwner) {
        return __on_EOS_LobbyDetails_GetLobbyOwner(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_GetLobbyOwner");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_LobbyDetails_GetMemberAttributeCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberAttributeCountOptions *Options) = NULL;

uint32_t EOS_LobbyDetails_GetMemberAttributeCount(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberAttributeCountOptions *Options) {
    if(NULL != __on_EOS_LobbyDetails_GetMemberAttributeCount) {
        return __on_EOS_LobbyDetails_GetMemberAttributeCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_GetMemberAttributeCount");
        exit(EXIT_FAILURE);
    }
}

EOS_ProductUserId (*__on_EOS_LobbyDetails_GetMemberByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberByIndexOptions *Options) = NULL;

EOS_ProductUserId EOS_LobbyDetails_GetMemberByIndex(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberByIndexOptions *Options) {
    if(NULL != __on_EOS_LobbyDetails_GetMemberByIndex) {
        return __on_EOS_LobbyDetails_GetMemberByIndex(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_GetMemberByIndex");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_LobbyDetails_GetMemberCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberCountOptions *Options) = NULL;

uint32_t EOS_LobbyDetails_GetMemberCount(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberCountOptions *Options) {
    if(NULL != __on_EOS_LobbyDetails_GetMemberCount) {
        return __on_EOS_LobbyDetails_GetMemberCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_GetMemberCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_LobbyDetails_Info_Release)(EOS_LobbyDetails_Info *LobbyDetailsInfo) = NULL;

void EOS_LobbyDetails_Info_Release(EOS_LobbyDetails_Info *LobbyDetailsInfo) {
    if(NULL != __on_EOS_LobbyDetails_Info_Release) {
        __on_EOS_LobbyDetails_Info_Release(LobbyDetailsInfo);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_Info_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_LobbyDetails_Release)(EOS_HLobbyDetails LobbyHandle) = NULL;

void EOS_LobbyDetails_Release(EOS_HLobbyDetails LobbyHandle) {
    if(NULL != __on_EOS_LobbyDetails_Release) {
        __on_EOS_LobbyDetails_Release(LobbyHandle);
    } else {
        assert(!"NULL == __on_EOS_LobbyDetails_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_AddAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddAttributeOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_AddAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddAttributeOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_AddAttribute) {
        return __on_EOS_LobbyModification_AddAttribute(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_AddAttribute");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_AddMemberAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddMemberAttributeOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_AddMemberAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddMemberAttributeOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_AddMemberAttribute) {
        return __on_EOS_LobbyModification_AddMemberAttribute(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_AddMemberAttribute");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_LobbyModification_Release)(EOS_HLobbyModification LobbyModificationHandle) = NULL;

void EOS_LobbyModification_Release(EOS_HLobbyModification LobbyModificationHandle) {
    if(NULL != __on_EOS_LobbyModification_Release) {
        __on_EOS_LobbyModification_Release(LobbyModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_RemoveAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveAttributeOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_RemoveAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveAttributeOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_RemoveAttribute) {
        return __on_EOS_LobbyModification_RemoveAttribute(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_RemoveAttribute");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_RemoveMemberAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveMemberAttributeOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_RemoveMemberAttribute(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveMemberAttributeOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_RemoveMemberAttribute) {
        return __on_EOS_LobbyModification_RemoveMemberAttribute(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_RemoveMemberAttribute");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_SetBucketId)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetBucketIdOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_SetBucketId(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetBucketIdOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_SetBucketId) {
        return __on_EOS_LobbyModification_SetBucketId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_SetBucketId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_SetInvitesAllowed)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetInvitesAllowedOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_SetInvitesAllowed(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetInvitesAllowedOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_SetInvitesAllowed) {
        return __on_EOS_LobbyModification_SetInvitesAllowed(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_SetInvitesAllowed");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_SetMaxMembers)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetMaxMembersOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_SetMaxMembers(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetMaxMembersOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_SetMaxMembers) {
        return __on_EOS_LobbyModification_SetMaxMembers(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_SetMaxMembers");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbyModification_SetPermissionLevel)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetPermissionLevelOptions *Options) = NULL;

EOS_EResult EOS_LobbyModification_SetPermissionLevel(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetPermissionLevelOptions *Options) {
    if(NULL != __on_EOS_LobbyModification_SetPermissionLevel) {
        return __on_EOS_LobbyModification_SetPermissionLevel(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbyModification_SetPermissionLevel");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbySearch_CopySearchResultByIndex)(EOS_HLobbySearch Handle, const EOS_LobbySearch_CopySearchResultByIndexOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;

EOS_EResult EOS_LobbySearch_CopySearchResultByIndex(EOS_HLobbySearch Handle, const EOS_LobbySearch_CopySearchResultByIndexOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    if(NULL != __on_EOS_LobbySearch_CopySearchResultByIndex) {
        return __on_EOS_LobbySearch_CopySearchResultByIndex(Handle, Options, OutLobbyDetailsHandle);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_CopySearchResultByIndex");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_LobbySearch_Find)(EOS_HLobbySearch Handle, const EOS_LobbySearch_FindOptions *Options, void *ClientData, const EOS_LobbySearch_OnFindCallback CompletionDelegate) = NULL;

void EOS_LobbySearch_Find(EOS_HLobbySearch Handle, const EOS_LobbySearch_FindOptions *Options, void *ClientData, const EOS_LobbySearch_OnFindCallback CompletionDelegate) {
    if(NULL != __on_EOS_LobbySearch_Find) {
        __on_EOS_LobbySearch_Find(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_Find");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_LobbySearch_GetSearchResultCount)(EOS_HLobbySearch Handle, const EOS_LobbySearch_GetSearchResultCountOptions *Options) = NULL;

uint32_t EOS_LobbySearch_GetSearchResultCount(EOS_HLobbySearch Handle, const EOS_LobbySearch_GetSearchResultCountOptions *Options) {
    if(NULL != __on_EOS_LobbySearch_GetSearchResultCount) {
        return __on_EOS_LobbySearch_GetSearchResultCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_GetSearchResultCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_LobbySearch_Release)(EOS_HLobbySearch LobbySearchHandle) = NULL;

void EOS_LobbySearch_Release(EOS_HLobbySearch LobbySearchHandle) {
    if(NULL != __on_EOS_LobbySearch_Release) {
        __on_EOS_LobbySearch_Release(LobbySearchHandle);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbySearch_RemoveParameter)(EOS_HLobbySearch Handle, const EOS_LobbySearch_RemoveParameterOptions *Options) = NULL;

EOS_EResult EOS_LobbySearch_RemoveParameter(EOS_HLobbySearch Handle, const EOS_LobbySearch_RemoveParameterOptions *Options) {
    if(NULL != __on_EOS_LobbySearch_RemoveParameter) {
        return __on_EOS_LobbySearch_RemoveParameter(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_RemoveParameter");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbySearch_SetLobbyId)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetLobbyIdOptions *Options) = NULL;

EOS_EResult EOS_LobbySearch_SetLobbyId(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetLobbyIdOptions *Options) {
    if(NULL != __on_EOS_LobbySearch_SetLobbyId) {
        return __on_EOS_LobbySearch_SetLobbyId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_SetLobbyId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbySearch_SetMaxResults)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetMaxResultsOptions *Options) = NULL;

EOS_EResult EOS_LobbySearch_SetMaxResults(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetMaxResultsOptions *Options) {
    if(NULL != __on_EOS_LobbySearch_SetMaxResults) {
        return __on_EOS_LobbySearch_SetMaxResults(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_SetMaxResults");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbySearch_SetParameter)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetParameterOptions *Options) = NULL;

EOS_EResult EOS_LobbySearch_SetParameter(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetParameterOptions *Options) {
    if(NULL != __on_EOS_LobbySearch_SetParameter) {
        return __on_EOS_LobbySearch_SetParameter(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_SetParameter");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_LobbySearch_SetTargetUserId)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetTargetUserIdOptions *Options) = NULL;

EOS_EResult EOS_LobbySearch_SetTargetUserId(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetTargetUserIdOptions *Options) {
    if(NULL != __on_EOS_LobbySearch_SetTargetUserId) {
        return __on_EOS_LobbySearch_SetTargetUserId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_LobbySearch_SetTargetUserId");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyJoinLobbyAccepted)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyJoinLobbyAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyAcceptedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyJoinLobbyAccepted(EOS_HLobby Handle, const EOS_Lobby_AddNotifyJoinLobbyAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyAcceptedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyJoinLobbyAccepted) {
        return __on_EOS_Lobby_AddNotifyJoinLobbyAccepted(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyJoinLobbyAccepted");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyInviteAccepted)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteAcceptedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyLobbyInviteAccepted(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteAcceptedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyLobbyInviteAccepted) {
        return __on_EOS_Lobby_AddNotifyLobbyInviteAccepted(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyLobbyInviteAccepted");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyInviteReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteReceivedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyLobbyInviteReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteReceivedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyLobbyInviteReceived) {
        return __on_EOS_Lobby_AddNotifyLobbyInviteReceived(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyLobbyInviteReceived");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberStatusReceivedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyLobbyMemberStatusReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberStatusReceivedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived) {
        return __on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberUpdateReceivedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberUpdateReceivedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived) {
        return __on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyUpdateReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyUpdateReceivedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyLobbyUpdateReceived(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyUpdateReceivedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyLobbyUpdateReceived) {
        return __on_EOS_Lobby_AddNotifyLobbyUpdateReceived(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyLobbyUpdateReceived");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyRTCRoomConnectionChangedOptions *Options, void *ClientData, const EOS_Lobby_OnRTCRoomConnectionChangedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Lobby_AddNotifyRTCRoomConnectionChanged(EOS_HLobby Handle, const EOS_Lobby_AddNotifyRTCRoomConnectionChangedOptions *Options, void *ClientData, const EOS_Lobby_OnRTCRoomConnectionChangedCallback NotificationFn) {
    if(NULL != __on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged) {
        return __on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_Attribute_Release)(EOS_Lobby_Attribute *LobbyAttribute) = NULL;

void EOS_Lobby_Attribute_Release(EOS_Lobby_Attribute *LobbyAttribute) {
    if(NULL != __on_EOS_Lobby_Attribute_Release) {
        __on_EOS_Lobby_Attribute_Release(LobbyAttribute);
    } else {
        assert(!"NULL == __on_EOS_Lobby_Attribute_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandle)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;

EOS_EResult EOS_Lobby_CopyLobbyDetailsHandle(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    if(NULL != __on_EOS_Lobby_CopyLobbyDetailsHandle) {
        return __on_EOS_Lobby_CopyLobbyDetailsHandle(Handle, Options, OutLobbyDetailsHandle);
    } else {
        assert(!"NULL == __on_EOS_Lobby_CopyLobbyDetailsHandle");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;

EOS_EResult EOS_Lobby_CopyLobbyDetailsHandleByInviteId(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    if(NULL != __on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId) {
        return __on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId(Handle, Options, OutLobbyDetailsHandle);
    } else {
        assert(!"NULL == __on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByUiEventIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) = NULL;

EOS_EResult EOS_Lobby_CopyLobbyDetailsHandleByUiEventId(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByUiEventIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle) {
    if(NULL != __on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId) {
        return __on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId(Handle, Options, OutLobbyDetailsHandle);
    } else {
        assert(!"NULL == __on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_CreateLobby)(EOS_HLobby Handle, const EOS_Lobby_CreateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnCreateLobbyCallback CompletionDelegate) = NULL;

void EOS_Lobby_CreateLobby(EOS_HLobby Handle, const EOS_Lobby_CreateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnCreateLobbyCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_CreateLobby) {
        __on_EOS_Lobby_CreateLobby(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_CreateLobby");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_CreateLobbySearch)(EOS_HLobby Handle, const EOS_Lobby_CreateLobbySearchOptions *Options, EOS_HLobbySearch *OutLobbySearchHandle) = NULL;

EOS_EResult EOS_Lobby_CreateLobbySearch(EOS_HLobby Handle, const EOS_Lobby_CreateLobbySearchOptions *Options, EOS_HLobbySearch *OutLobbySearchHandle) {
    if(NULL != __on_EOS_Lobby_CreateLobbySearch) {
        return __on_EOS_Lobby_CreateLobbySearch(Handle, Options, OutLobbySearchHandle);
    } else {
        assert(!"NULL == __on_EOS_Lobby_CreateLobbySearch");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_DestroyLobby)(EOS_HLobby Handle, const EOS_Lobby_DestroyLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnDestroyLobbyCallback CompletionDelegate) = NULL;

void EOS_Lobby_DestroyLobby(EOS_HLobby Handle, const EOS_Lobby_DestroyLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnDestroyLobbyCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_DestroyLobby) {
        __on_EOS_Lobby_DestroyLobby(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_DestroyLobby");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Lobby_GetInviteCount)(EOS_HLobby Handle, const EOS_Lobby_GetInviteCountOptions *Options) = NULL;

uint32_t EOS_Lobby_GetInviteCount(EOS_HLobby Handle, const EOS_Lobby_GetInviteCountOptions *Options) {
    if(NULL != __on_EOS_Lobby_GetInviteCount) {
        return __on_EOS_Lobby_GetInviteCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Lobby_GetInviteCount");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_GetInviteIdByIndex)(EOS_HLobby Handle, const EOS_Lobby_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Lobby_GetInviteIdByIndex(EOS_HLobby Handle, const EOS_Lobby_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Lobby_GetInviteIdByIndex) {
        return __on_EOS_Lobby_GetInviteIdByIndex(Handle, Options, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Lobby_GetInviteIdByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_GetRTCRoomName)(EOS_HLobby Handle, const EOS_Lobby_GetRTCRoomNameOptions *Options, char *OutBuffer, uint32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Lobby_GetRTCRoomName(EOS_HLobby Handle, const EOS_Lobby_GetRTCRoomNameOptions *Options, char *OutBuffer, uint32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Lobby_GetRTCRoomName) {
        return __on_EOS_Lobby_GetRTCRoomName(Handle, Options, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Lobby_GetRTCRoomName");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_IsRTCRoomConnected)(EOS_HLobby Handle, const EOS_Lobby_IsRTCRoomConnectedOptions *Options, EOS_Bool *bOutIsConnected) = NULL;

EOS_EResult EOS_Lobby_IsRTCRoomConnected(EOS_HLobby Handle, const EOS_Lobby_IsRTCRoomConnectedOptions *Options, EOS_Bool *bOutIsConnected) {
    if(NULL != __on_EOS_Lobby_IsRTCRoomConnected) {
        return __on_EOS_Lobby_IsRTCRoomConnected(Handle, Options, bOutIsConnected);
    } else {
        assert(!"NULL == __on_EOS_Lobby_IsRTCRoomConnected");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_JoinLobby)(EOS_HLobby Handle, const EOS_Lobby_JoinLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyCallback CompletionDelegate) = NULL;

void EOS_Lobby_JoinLobby(EOS_HLobby Handle, const EOS_Lobby_JoinLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_JoinLobby) {
        __on_EOS_Lobby_JoinLobby(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_JoinLobby");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_KickMember)(EOS_HLobby Handle, const EOS_Lobby_KickMemberOptions *Options, void *ClientData, const EOS_Lobby_OnKickMemberCallback CompletionDelegate) = NULL;

void EOS_Lobby_KickMember(EOS_HLobby Handle, const EOS_Lobby_KickMemberOptions *Options, void *ClientData, const EOS_Lobby_OnKickMemberCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_KickMember) {
        __on_EOS_Lobby_KickMember(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_KickMember");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_LeaveLobby)(EOS_HLobby Handle, const EOS_Lobby_LeaveLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnLeaveLobbyCallback CompletionDelegate) = NULL;

void EOS_Lobby_LeaveLobby(EOS_HLobby Handle, const EOS_Lobby_LeaveLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnLeaveLobbyCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_LeaveLobby) {
        __on_EOS_Lobby_LeaveLobby(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_LeaveLobby");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_PromoteMember)(EOS_HLobby Handle, const EOS_Lobby_PromoteMemberOptions *Options, void *ClientData, const EOS_Lobby_OnPromoteMemberCallback CompletionDelegate) = NULL;

void EOS_Lobby_PromoteMember(EOS_HLobby Handle, const EOS_Lobby_PromoteMemberOptions *Options, void *ClientData, const EOS_Lobby_OnPromoteMemberCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_PromoteMember) {
        __on_EOS_Lobby_PromoteMember(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_PromoteMember");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_QueryInvites)(EOS_HLobby Handle, const EOS_Lobby_QueryInvitesOptions *Options, void *ClientData, const EOS_Lobby_OnQueryInvitesCallback CompletionDelegate) = NULL;

void EOS_Lobby_QueryInvites(EOS_HLobby Handle, const EOS_Lobby_QueryInvitesOptions *Options, void *ClientData, const EOS_Lobby_OnQueryInvitesCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_QueryInvites) {
        __on_EOS_Lobby_QueryInvites(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_QueryInvites");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RejectInvite)(EOS_HLobby Handle, const EOS_Lobby_RejectInviteOptions *Options, void *ClientData, const EOS_Lobby_OnRejectInviteCallback CompletionDelegate) = NULL;

void EOS_Lobby_RejectInvite(EOS_HLobby Handle, const EOS_Lobby_RejectInviteOptions *Options, void *ClientData, const EOS_Lobby_OnRejectInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_RejectInvite) {
        __on_EOS_Lobby_RejectInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RejectInvite");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyJoinLobbyAccepted(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted) {
        __on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyLobbyInviteAccepted(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted) {
        __on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyInviteReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyLobbyInviteReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyLobbyInviteReceived) {
        __on_EOS_Lobby_RemoveNotifyLobbyInviteReceived(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyLobbyInviteReceived");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived) {
        __on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived) {
        __on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyLobbyUpdateReceived(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived) {
        __on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged)(EOS_HLobby Handle, EOS_NotificationId InId) = NULL;

void EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged(EOS_HLobby Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged) {
        __on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_SendInvite)(EOS_HLobby Handle, const EOS_Lobby_SendInviteOptions *Options, void *ClientData, const EOS_Lobby_OnSendInviteCallback CompletionDelegate) = NULL;

void EOS_Lobby_SendInvite(EOS_HLobby Handle, const EOS_Lobby_SendInviteOptions *Options, void *ClientData, const EOS_Lobby_OnSendInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_SendInvite) {
        __on_EOS_Lobby_SendInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_SendInvite");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Lobby_UpdateLobby)(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnUpdateLobbyCallback CompletionDelegate) = NULL;

void EOS_Lobby_UpdateLobby(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnUpdateLobbyCallback CompletionDelegate) {
    if(NULL != __on_EOS_Lobby_UpdateLobby) {
        __on_EOS_Lobby_UpdateLobby(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Lobby_UpdateLobby");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Lobby_UpdateLobbyModification)(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyModificationOptions *Options, EOS_HLobbyModification *OutLobbyModificationHandle) = NULL;

EOS_EResult EOS_Lobby_UpdateLobbyModification(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyModificationOptions *Options, EOS_HLobbyModification *OutLobbyModificationHandle) {
    if(NULL != __on_EOS_Lobby_UpdateLobbyModification) {
        return __on_EOS_Lobby_UpdateLobbyModification(Handle, Options, OutLobbyModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_Lobby_UpdateLobbyModification");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Logging_SetCallback)(EOS_LogMessageFunc Callback) = NULL;

EOS_EResult EOS_Logging_SetCallback(EOS_LogMessageFunc Callback) {
    if(NULL != __on_EOS_Logging_SetCallback) {
        return __on_EOS_Logging_SetCallback(Callback);
    } else {
        assert(!"NULL == __on_EOS_Logging_SetCallback");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Logging_SetLogLevel)(EOS_ELogCategory LogCategory, EOS_ELogLevel LogLevel) = NULL;

EOS_EResult EOS_Logging_SetLogLevel(EOS_ELogCategory LogCategory, EOS_ELogLevel LogLevel) {
    if(NULL != __on_EOS_Logging_SetLogLevel) {
        return __on_EOS_Logging_SetLogLevel(LogCategory, LogLevel);
    } else {
        assert(!"NULL == __on_EOS_Logging_SetLogLevel");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Metrics_BeginPlayerSession)(EOS_HMetrics Handle, const EOS_Metrics_BeginPlayerSessionOptions *Options) = NULL;

EOS_EResult EOS_Metrics_BeginPlayerSession(EOS_HMetrics Handle, const EOS_Metrics_BeginPlayerSessionOptions *Options) {
    if(NULL != __on_EOS_Metrics_BeginPlayerSession) {
        return __on_EOS_Metrics_BeginPlayerSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Metrics_BeginPlayerSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Metrics_EndPlayerSession)(EOS_HMetrics Handle, const EOS_Metrics_EndPlayerSessionOptions *Options) = NULL;

EOS_EResult EOS_Metrics_EndPlayerSession(EOS_HMetrics Handle, const EOS_Metrics_EndPlayerSessionOptions *Options) {
    if(NULL != __on_EOS_Metrics_EndPlayerSession) {
        return __on_EOS_Metrics_EndPlayerSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Metrics_EndPlayerSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Mods_CopyModInfo)(EOS_HMods Handle, const EOS_Mods_CopyModInfoOptions *Options, EOS_Mods_ModInfo **OutEnumeratedMods) = NULL;

EOS_EResult EOS_Mods_CopyModInfo(EOS_HMods Handle, const EOS_Mods_CopyModInfoOptions *Options, EOS_Mods_ModInfo **OutEnumeratedMods) {
    if(NULL != __on_EOS_Mods_CopyModInfo) {
        return __on_EOS_Mods_CopyModInfo(Handle, Options, OutEnumeratedMods);
    } else {
        assert(!"NULL == __on_EOS_Mods_CopyModInfo");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Mods_EnumerateMods)(EOS_HMods Handle, const EOS_Mods_EnumerateModsOptions *Options, void *ClientData, const EOS_Mods_OnEnumerateModsCallback CompletionDelegate) = NULL;

void EOS_Mods_EnumerateMods(EOS_HMods Handle, const EOS_Mods_EnumerateModsOptions *Options, void *ClientData, const EOS_Mods_OnEnumerateModsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Mods_EnumerateMods) {
        __on_EOS_Mods_EnumerateMods(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Mods_EnumerateMods");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Mods_InstallMod)(EOS_HMods Handle, const EOS_Mods_InstallModOptions *Options, void *ClientData, const EOS_Mods_OnInstallModCallback CompletionDelegate) = NULL;

void EOS_Mods_InstallMod(EOS_HMods Handle, const EOS_Mods_InstallModOptions *Options, void *ClientData, const EOS_Mods_OnInstallModCallback CompletionDelegate) {
    if(NULL != __on_EOS_Mods_InstallMod) {
        __on_EOS_Mods_InstallMod(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Mods_InstallMod");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Mods_ModInfo_Release)(EOS_Mods_ModInfo *ModInfo) = NULL;

void EOS_Mods_ModInfo_Release(EOS_Mods_ModInfo *ModInfo) {
    if(NULL != __on_EOS_Mods_ModInfo_Release) {
        __on_EOS_Mods_ModInfo_Release(ModInfo);
    } else {
        assert(!"NULL == __on_EOS_Mods_ModInfo_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Mods_UninstallMod)(EOS_HMods Handle, const EOS_Mods_UninstallModOptions *Options, void *ClientData, const EOS_Mods_OnUninstallModCallback CompletionDelegate) = NULL;

void EOS_Mods_UninstallMod(EOS_HMods Handle, const EOS_Mods_UninstallModOptions *Options, void *ClientData, const EOS_Mods_OnUninstallModCallback CompletionDelegate) {
    if(NULL != __on_EOS_Mods_UninstallMod) {
        __on_EOS_Mods_UninstallMod(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Mods_UninstallMod");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Mods_UpdateMod)(EOS_HMods Handle, const EOS_Mods_UpdateModOptions *Options, void *ClientData, const EOS_Mods_OnUpdateModCallback CompletionDelegate) = NULL;

void EOS_Mods_UpdateMod(EOS_HMods Handle, const EOS_Mods_UpdateModOptions *Options, void *ClientData, const EOS_Mods_OnUpdateModCallback CompletionDelegate) {
    if(NULL != __on_EOS_Mods_UpdateMod) {
        __on_EOS_Mods_UpdateMod(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Mods_UpdateMod");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_AcceptConnection)(EOS_HP2P Handle, const EOS_P2P_AcceptConnectionOptions *Options) = NULL;

EOS_EResult EOS_P2P_AcceptConnection(EOS_HP2P Handle, const EOS_P2P_AcceptConnectionOptions *Options) {
    if(NULL != __on_EOS_P2P_AcceptConnection) {
        return __on_EOS_P2P_AcceptConnection(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_AcceptConnection");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_P2P_AddNotifyIncomingPacketQueueFull)(EOS_HP2P Handle, const EOS_P2P_AddNotifyIncomingPacketQueueFullOptions *Options, void *ClientData, EOS_P2P_OnIncomingPacketQueueFullCallback IncomingPacketQueueFullHandler) = NULL;

EOS_NotificationId EOS_P2P_AddNotifyIncomingPacketQueueFull(EOS_HP2P Handle, const EOS_P2P_AddNotifyIncomingPacketQueueFullOptions *Options, void *ClientData, EOS_P2P_OnIncomingPacketQueueFullCallback IncomingPacketQueueFullHandler) {
    if(NULL != __on_EOS_P2P_AddNotifyIncomingPacketQueueFull) {
        return __on_EOS_P2P_AddNotifyIncomingPacketQueueFull(Handle, Options, ClientData, IncomingPacketQueueFullHandler);
    } else {
        assert(!"NULL == __on_EOS_P2P_AddNotifyIncomingPacketQueueFull");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_P2P_AddNotifyPeerConnectionClosed)(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionClosedOptions *Options, void *ClientData, EOS_P2P_OnRemoteConnectionClosedCallback ConnectionClosedHandler) = NULL;

EOS_NotificationId EOS_P2P_AddNotifyPeerConnectionClosed(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionClosedOptions *Options, void *ClientData, EOS_P2P_OnRemoteConnectionClosedCallback ConnectionClosedHandler) {
    if(NULL != __on_EOS_P2P_AddNotifyPeerConnectionClosed) {
        return __on_EOS_P2P_AddNotifyPeerConnectionClosed(Handle, Options, ClientData, ConnectionClosedHandler);
    } else {
        assert(!"NULL == __on_EOS_P2P_AddNotifyPeerConnectionClosed");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_P2P_AddNotifyPeerConnectionRequest)(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionRequestOptions *Options, void *ClientData, EOS_P2P_OnIncomingConnectionRequestCallback ConnectionRequestHandler) = NULL;

EOS_NotificationId EOS_P2P_AddNotifyPeerConnectionRequest(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionRequestOptions *Options, void *ClientData, EOS_P2P_OnIncomingConnectionRequestCallback ConnectionRequestHandler) {
    if(NULL != __on_EOS_P2P_AddNotifyPeerConnectionRequest) {
        return __on_EOS_P2P_AddNotifyPeerConnectionRequest(Handle, Options, ClientData, ConnectionRequestHandler);
    } else {
        assert(!"NULL == __on_EOS_P2P_AddNotifyPeerConnectionRequest");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_CloseConnection)(EOS_HP2P Handle, const EOS_P2P_CloseConnectionOptions *Options) = NULL;

EOS_EResult EOS_P2P_CloseConnection(EOS_HP2P Handle, const EOS_P2P_CloseConnectionOptions *Options) {
    if(NULL != __on_EOS_P2P_CloseConnection) {
        return __on_EOS_P2P_CloseConnection(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_CloseConnection");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_CloseConnections)(EOS_HP2P Handle, const EOS_P2P_CloseConnectionsOptions *Options) = NULL;

EOS_EResult EOS_P2P_CloseConnections(EOS_HP2P Handle, const EOS_P2P_CloseConnectionsOptions *Options) {
    if(NULL != __on_EOS_P2P_CloseConnections) {
        return __on_EOS_P2P_CloseConnections(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_CloseConnections");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_GetNATType)(EOS_HP2P Handle, const EOS_P2P_GetNATTypeOptions *Options, EOS_ENATType *OutNATType) = NULL;

EOS_EResult EOS_P2P_GetNATType(EOS_HP2P Handle, const EOS_P2P_GetNATTypeOptions *Options, EOS_ENATType *OutNATType) {
    if(NULL != __on_EOS_P2P_GetNATType) {
        return __on_EOS_P2P_GetNATType(Handle, Options, OutNATType);
    } else {
        assert(!"NULL == __on_EOS_P2P_GetNATType");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_GetNextReceivedPacketSize)(EOS_HP2P Handle, const EOS_P2P_GetNextReceivedPacketSizeOptions *Options, uint32_t *OutPacketSizeBytes) = NULL;

EOS_EResult EOS_P2P_GetNextReceivedPacketSize(EOS_HP2P Handle, const EOS_P2P_GetNextReceivedPacketSizeOptions *Options, uint32_t *OutPacketSizeBytes) {
    if(NULL != __on_EOS_P2P_GetNextReceivedPacketSize) {
        return __on_EOS_P2P_GetNextReceivedPacketSize(Handle, Options, OutPacketSizeBytes);
    } else {
        assert(!"NULL == __on_EOS_P2P_GetNextReceivedPacketSize");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_GetPacketQueueInfo)(EOS_HP2P Handle, const EOS_P2P_GetPacketQueueInfoOptions *Options, EOS_P2P_PacketQueueInfo *OutPacketQueueInfo) = NULL;

EOS_EResult EOS_P2P_GetPacketQueueInfo(EOS_HP2P Handle, const EOS_P2P_GetPacketQueueInfoOptions *Options, EOS_P2P_PacketQueueInfo *OutPacketQueueInfo) {
    if(NULL != __on_EOS_P2P_GetPacketQueueInfo) {
        return __on_EOS_P2P_GetPacketQueueInfo(Handle, Options, OutPacketQueueInfo);
    } else {
        assert(!"NULL == __on_EOS_P2P_GetPacketQueueInfo");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_GetPortRange)(EOS_HP2P Handle, const EOS_P2P_GetPortRangeOptions *Options, uint16_t *OutPort, uint16_t *OutNumAdditionalPortsToTry) = NULL;

EOS_EResult EOS_P2P_GetPortRange(EOS_HP2P Handle, const EOS_P2P_GetPortRangeOptions *Options, uint16_t *OutPort, uint16_t *OutNumAdditionalPortsToTry) {
    if(NULL != __on_EOS_P2P_GetPortRange) {
        return __on_EOS_P2P_GetPortRange(Handle, Options, OutPort, OutNumAdditionalPortsToTry);
    } else {
        assert(!"NULL == __on_EOS_P2P_GetPortRange");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_GetRelayControl)(EOS_HP2P Handle, const EOS_P2P_GetRelayControlOptions *Options, EOS_ERelayControl *OutRelayControl) = NULL;

EOS_EResult EOS_P2P_GetRelayControl(EOS_HP2P Handle, const EOS_P2P_GetRelayControlOptions *Options, EOS_ERelayControl *OutRelayControl) {
    if(NULL != __on_EOS_P2P_GetRelayControl) {
        return __on_EOS_P2P_GetRelayControl(Handle, Options, OutRelayControl);
    } else {
        assert(!"NULL == __on_EOS_P2P_GetRelayControl");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_P2P_QueryNATType)(EOS_HP2P Handle, const EOS_P2P_QueryNATTypeOptions *Options, void *ClientData, const EOS_P2P_OnQueryNATTypeCompleteCallback CompletionDelegate) = NULL;

void EOS_P2P_QueryNATType(EOS_HP2P Handle, const EOS_P2P_QueryNATTypeOptions *Options, void *ClientData, const EOS_P2P_OnQueryNATTypeCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_P2P_QueryNATType) {
        __on_EOS_P2P_QueryNATType(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_P2P_QueryNATType");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_ReceivePacket)(EOS_HP2P Handle, const EOS_P2P_ReceivePacketOptions *Options, EOS_ProductUserId *OutPeerId, EOS_P2P_SocketId *OutSocketId, uint8_t *OutChannel, void *OutData, uint32_t *OutBytesWritten) = NULL;

EOS_EResult EOS_P2P_ReceivePacket(EOS_HP2P Handle, const EOS_P2P_ReceivePacketOptions *Options, EOS_ProductUserId *OutPeerId, EOS_P2P_SocketId *OutSocketId, uint8_t *OutChannel, void *OutData, uint32_t *OutBytesWritten) {
    if(NULL != __on_EOS_P2P_ReceivePacket) {
        return __on_EOS_P2P_ReceivePacket(Handle, Options, OutPeerId, OutSocketId, OutChannel, OutData, OutBytesWritten);
    } else {
        assert(!"NULL == __on_EOS_P2P_ReceivePacket");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull)(EOS_HP2P Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_P2P_RemoveNotifyIncomingPacketQueueFull(EOS_HP2P Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull) {
        __on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_P2P_RemoveNotifyPeerConnectionClosed)(EOS_HP2P Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_P2P_RemoveNotifyPeerConnectionClosed(EOS_HP2P Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_P2P_RemoveNotifyPeerConnectionClosed) {
        __on_EOS_P2P_RemoveNotifyPeerConnectionClosed(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_P2P_RemoveNotifyPeerConnectionClosed");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_P2P_RemoveNotifyPeerConnectionRequest)(EOS_HP2P Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_P2P_RemoveNotifyPeerConnectionRequest(EOS_HP2P Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_P2P_RemoveNotifyPeerConnectionRequest) {
        __on_EOS_P2P_RemoveNotifyPeerConnectionRequest(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_P2P_RemoveNotifyPeerConnectionRequest");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_SendPacket)(EOS_HP2P Handle, const EOS_P2P_SendPacketOptions *Options) = NULL;

EOS_EResult EOS_P2P_SendPacket(EOS_HP2P Handle, const EOS_P2P_SendPacketOptions *Options) {
    if(NULL != __on_EOS_P2P_SendPacket) {
        return __on_EOS_P2P_SendPacket(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_SendPacket");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_SetPacketQueueSize)(EOS_HP2P Handle, const EOS_P2P_SetPacketQueueSizeOptions *Options) = NULL;

EOS_EResult EOS_P2P_SetPacketQueueSize(EOS_HP2P Handle, const EOS_P2P_SetPacketQueueSizeOptions *Options) {
    if(NULL != __on_EOS_P2P_SetPacketQueueSize) {
        return __on_EOS_P2P_SetPacketQueueSize(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_SetPacketQueueSize");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_SetPortRange)(EOS_HP2P Handle, const EOS_P2P_SetPortRangeOptions *Options) = NULL;

EOS_EResult EOS_P2P_SetPortRange(EOS_HP2P Handle, const EOS_P2P_SetPortRangeOptions *Options) {
    if(NULL != __on_EOS_P2P_SetPortRange) {
        return __on_EOS_P2P_SetPortRange(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_SetPortRange");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_P2P_SetRelayControl)(EOS_HP2P Handle, const EOS_P2P_SetRelayControlOptions *Options) = NULL;

EOS_EResult EOS_P2P_SetRelayControl(EOS_HP2P Handle, const EOS_P2P_SetRelayControlOptions *Options) {
    if(NULL != __on_EOS_P2P_SetRelayControl) {
        return __on_EOS_P2P_SetRelayControl(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_P2P_SetRelayControl");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_CheckForLauncherAndRestart)(EOS_HPlatform Handle) = NULL;

EOS_EResult EOS_Platform_CheckForLauncherAndRestart(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_CheckForLauncherAndRestart) {
        return __on_EOS_Platform_CheckForLauncherAndRestart(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_CheckForLauncherAndRestart");
        exit(EXIT_FAILURE);
    }
}

EOS_HPlatform (*__on_EOS_Platform_Create)(const EOS_Platform_Options *Options) = NULL;

EOS_HPlatform EOS_Platform_Create(const EOS_Platform_Options *Options) {
    if(NULL != __on_EOS_Platform_Create) {
        return __on_EOS_Platform_Create(Options);
    } else {
        assert(!"NULL == __on_EOS_Platform_Create");
        exit(EXIT_FAILURE);
    }
}

EOS_HAchievements (*__on_EOS_Platform_GetAchievementsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HAchievements EOS_Platform_GetAchievementsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetAchievementsInterface) {
        return __on_EOS_Platform_GetAchievementsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetAchievementsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_GetActiveCountryCode)(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Platform_GetActiveCountryCode(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Platform_GetActiveCountryCode) {
        return __on_EOS_Platform_GetActiveCountryCode(Handle, LocalUserId, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetActiveCountryCode");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_GetActiveLocaleCode)(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Platform_GetActiveLocaleCode(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Platform_GetActiveLocaleCode) {
        return __on_EOS_Platform_GetActiveLocaleCode(Handle, LocalUserId, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetActiveLocaleCode");
        exit(EXIT_FAILURE);
    }
}

EOS_HAntiCheatClient (*__on_EOS_Platform_GetAntiCheatClientInterface)(EOS_HPlatform Handle) = NULL;

EOS_HAntiCheatClient EOS_Platform_GetAntiCheatClientInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetAntiCheatClientInterface) {
        return __on_EOS_Platform_GetAntiCheatClientInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetAntiCheatClientInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HAntiCheatServer (*__on_EOS_Platform_GetAntiCheatServerInterface)(EOS_HPlatform Handle) = NULL;

EOS_HAntiCheatServer EOS_Platform_GetAntiCheatServerInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetAntiCheatServerInterface) {
        return __on_EOS_Platform_GetAntiCheatServerInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetAntiCheatServerInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HAuth (*__on_EOS_Platform_GetAuthInterface)(EOS_HPlatform Handle) = NULL;

EOS_HAuth EOS_Platform_GetAuthInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetAuthInterface) {
        return __on_EOS_Platform_GetAuthInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetAuthInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HConnect (*__on_EOS_Platform_GetConnectInterface)(EOS_HPlatform Handle) = NULL;

EOS_HConnect EOS_Platform_GetConnectInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetConnectInterface) {
        return __on_EOS_Platform_GetConnectInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetConnectInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HEcom (*__on_EOS_Platform_GetEcomInterface)(EOS_HPlatform Handle) = NULL;

EOS_HEcom EOS_Platform_GetEcomInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetEcomInterface) {
        return __on_EOS_Platform_GetEcomInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetEcomInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HFriends (*__on_EOS_Platform_GetFriendsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HFriends EOS_Platform_GetFriendsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetFriendsInterface) {
        return __on_EOS_Platform_GetFriendsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetFriendsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HKWS (*__on_EOS_Platform_GetKWSInterface)(EOS_HPlatform Handle) = NULL;

EOS_HKWS EOS_Platform_GetKWSInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetKWSInterface) {
        return __on_EOS_Platform_GetKWSInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetKWSInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HLeaderboards (*__on_EOS_Platform_GetLeaderboardsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HLeaderboards EOS_Platform_GetLeaderboardsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetLeaderboardsInterface) {
        return __on_EOS_Platform_GetLeaderboardsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetLeaderboardsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HLobby (*__on_EOS_Platform_GetLobbyInterface)(EOS_HPlatform Handle) = NULL;

EOS_HLobby EOS_Platform_GetLobbyInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetLobbyInterface) {
        return __on_EOS_Platform_GetLobbyInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetLobbyInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HMetrics (*__on_EOS_Platform_GetMetricsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HMetrics EOS_Platform_GetMetricsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetMetricsInterface) {
        return __on_EOS_Platform_GetMetricsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetMetricsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HMods (*__on_EOS_Platform_GetModsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HMods EOS_Platform_GetModsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetModsInterface) {
        return __on_EOS_Platform_GetModsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetModsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_GetOverrideCountryCode)(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Platform_GetOverrideCountryCode(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Platform_GetOverrideCountryCode) {
        return __on_EOS_Platform_GetOverrideCountryCode(Handle, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetOverrideCountryCode");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_GetOverrideLocaleCode)(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Platform_GetOverrideLocaleCode(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Platform_GetOverrideLocaleCode) {
        return __on_EOS_Platform_GetOverrideLocaleCode(Handle, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetOverrideLocaleCode");
        exit(EXIT_FAILURE);
    }
}

EOS_HP2P (*__on_EOS_Platform_GetP2PInterface)(EOS_HPlatform Handle) = NULL;

EOS_HP2P EOS_Platform_GetP2PInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetP2PInterface) {
        return __on_EOS_Platform_GetP2PInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetP2PInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HPlayerDataStorage (*__on_EOS_Platform_GetPlayerDataStorageInterface)(EOS_HPlatform Handle) = NULL;

EOS_HPlayerDataStorage EOS_Platform_GetPlayerDataStorageInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetPlayerDataStorageInterface) {
        return __on_EOS_Platform_GetPlayerDataStorageInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetPlayerDataStorageInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HPresence (*__on_EOS_Platform_GetPresenceInterface)(EOS_HPlatform Handle) = NULL;

EOS_HPresence EOS_Platform_GetPresenceInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetPresenceInterface) {
        return __on_EOS_Platform_GetPresenceInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetPresenceInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HRTCAdmin (*__on_EOS_Platform_GetRTCAdminInterface)(EOS_HPlatform Handle) = NULL;

EOS_HRTCAdmin EOS_Platform_GetRTCAdminInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetRTCAdminInterface) {
        return __on_EOS_Platform_GetRTCAdminInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetRTCAdminInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HRTC (*__on_EOS_Platform_GetRTCInterface)(EOS_HPlatform Handle) = NULL;

EOS_HRTC EOS_Platform_GetRTCInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetRTCInterface) {
        return __on_EOS_Platform_GetRTCInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetRTCInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HReports (*__on_EOS_Platform_GetReportsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HReports EOS_Platform_GetReportsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetReportsInterface) {
        return __on_EOS_Platform_GetReportsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetReportsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HSanctions (*__on_EOS_Platform_GetSanctionsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HSanctions EOS_Platform_GetSanctionsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetSanctionsInterface) {
        return __on_EOS_Platform_GetSanctionsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetSanctionsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HSessions (*__on_EOS_Platform_GetSessionsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HSessions EOS_Platform_GetSessionsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetSessionsInterface) {
        return __on_EOS_Platform_GetSessionsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetSessionsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HStats (*__on_EOS_Platform_GetStatsInterface)(EOS_HPlatform Handle) = NULL;

EOS_HStats EOS_Platform_GetStatsInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetStatsInterface) {
        return __on_EOS_Platform_GetStatsInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetStatsInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HTitleStorage (*__on_EOS_Platform_GetTitleStorageInterface)(EOS_HPlatform Handle) = NULL;

EOS_HTitleStorage EOS_Platform_GetTitleStorageInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetTitleStorageInterface) {
        return __on_EOS_Platform_GetTitleStorageInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetTitleStorageInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HUI (*__on_EOS_Platform_GetUIInterface)(EOS_HPlatform Handle) = NULL;

EOS_HUI EOS_Platform_GetUIInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetUIInterface) {
        return __on_EOS_Platform_GetUIInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetUIInterface");
        exit(EXIT_FAILURE);
    }
}

EOS_HUserInfo (*__on_EOS_Platform_GetUserInfoInterface)(EOS_HPlatform Handle) = NULL;

EOS_HUserInfo EOS_Platform_GetUserInfoInterface(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_GetUserInfoInterface) {
        return __on_EOS_Platform_GetUserInfoInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_GetUserInfoInterface");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Platform_Release)(EOS_HPlatform Handle) = NULL;

void EOS_Platform_Release(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_Release) {
        __on_EOS_Platform_Release(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_SetOverrideCountryCode)(EOS_HPlatform Handle, const char *NewCountryCode) = NULL;

EOS_EResult EOS_Platform_SetOverrideCountryCode(EOS_HPlatform Handle, const char *NewCountryCode) {
    if(NULL != __on_EOS_Platform_SetOverrideCountryCode) {
        return __on_EOS_Platform_SetOverrideCountryCode(Handle, NewCountryCode);
    } else {
        assert(!"NULL == __on_EOS_Platform_SetOverrideCountryCode");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Platform_SetOverrideLocaleCode)(EOS_HPlatform Handle, const char *NewLocaleCode) = NULL;

EOS_EResult EOS_Platform_SetOverrideLocaleCode(EOS_HPlatform Handle, const char *NewLocaleCode) {
    if(NULL != __on_EOS_Platform_SetOverrideLocaleCode) {
        return __on_EOS_Platform_SetOverrideLocaleCode(Handle, NewLocaleCode);
    } else {
        assert(!"NULL == __on_EOS_Platform_SetOverrideLocaleCode");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Platform_Tick)(EOS_HPlatform Handle) = NULL;

void EOS_Platform_Tick(EOS_HPlatform Handle) {
    if(NULL != __on_EOS_Platform_Tick) {
        __on_EOS_Platform_Tick(Handle);
    } else {
        assert(!"NULL == __on_EOS_Platform_Tick");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest)(EOS_HPlayerDataStorageFileTransferRequest Handle) = NULL;

EOS_EResult EOS_PlayerDataStorageFileTransferRequest_CancelRequest(EOS_HPlayerDataStorageFileTransferRequest Handle) {
    if(NULL != __on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest) {
        return __on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest(Handle);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState)(EOS_HPlayerDataStorageFileTransferRequest Handle) = NULL;

EOS_EResult EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState(EOS_HPlayerDataStorageFileTransferRequest Handle) {
    if(NULL != __on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState) {
        return __on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState(Handle);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_GetFilename)(EOS_HPlayerDataStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) = NULL;

EOS_EResult EOS_PlayerDataStorageFileTransferRequest_GetFilename(EOS_HPlayerDataStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) {
    if(NULL != __on_EOS_PlayerDataStorageFileTransferRequest_GetFilename) {
        return __on_EOS_PlayerDataStorageFileTransferRequest_GetFilename(Handle, FilenameStringBufferSizeBytes, OutStringBuffer, OutStringLength);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorageFileTransferRequest_GetFilename");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PlayerDataStorageFileTransferRequest_Release)(EOS_HPlayerDataStorageFileTransferRequest PlayerDataStorageFileTransferHandle) = NULL;

void EOS_PlayerDataStorageFileTransferRequest_Release(EOS_HPlayerDataStorageFileTransferRequest PlayerDataStorageFileTransferHandle) {
    if(NULL != __on_EOS_PlayerDataStorageFileTransferRequest_Release) {
        __on_EOS_PlayerDataStorageFileTransferRequest_Release(PlayerDataStorageFileTransferHandle);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorageFileTransferRequest_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataAtIndexOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) = NULL;

EOS_EResult EOS_PlayerDataStorage_CopyFileMetadataAtIndex(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataAtIndexOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) {
    if(NULL != __on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex) {
        return __on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex(Handle, CopyFileMetadataOptions, OutMetadata);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorage_CopyFileMetadataByFilename)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataByFilenameOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) = NULL;

EOS_EResult EOS_PlayerDataStorage_CopyFileMetadataByFilename(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataByFilenameOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata) {
    if(NULL != __on_EOS_PlayerDataStorage_CopyFileMetadataByFilename) {
        return __on_EOS_PlayerDataStorage_CopyFileMetadataByFilename(Handle, CopyFileMetadataOptions, OutMetadata);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_CopyFileMetadataByFilename");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorage_DeleteCache)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_PlayerDataStorage_OnDeleteCacheCompleteCallback CompletionCallback) = NULL;

EOS_EResult EOS_PlayerDataStorage_DeleteCache(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_PlayerDataStorage_OnDeleteCacheCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_DeleteCache) {
        return __on_EOS_PlayerDataStorage_DeleteCache(Handle, Options, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_DeleteCache");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PlayerDataStorage_DeleteFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteFileOptions *DeleteOptions, void *ClientData, const EOS_PlayerDataStorage_OnDeleteFileCompleteCallback CompletionCallback) = NULL;

void EOS_PlayerDataStorage_DeleteFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteFileOptions *DeleteOptions, void *ClientData, const EOS_PlayerDataStorage_OnDeleteFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_DeleteFile) {
        __on_EOS_PlayerDataStorage_DeleteFile(Handle, DeleteOptions, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_DeleteFile");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PlayerDataStorage_DuplicateFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DuplicateFileOptions *DuplicateOptions, void *ClientData, const EOS_PlayerDataStorage_OnDuplicateFileCompleteCallback CompletionCallback) = NULL;

void EOS_PlayerDataStorage_DuplicateFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DuplicateFileOptions *DuplicateOptions, void *ClientData, const EOS_PlayerDataStorage_OnDuplicateFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_DuplicateFile) {
        __on_EOS_PlayerDataStorage_DuplicateFile(Handle, DuplicateOptions, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_DuplicateFile");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PlayerDataStorage_FileMetadata_Release)(EOS_PlayerDataStorage_FileMetadata *FileMetadata) = NULL;

void EOS_PlayerDataStorage_FileMetadata_Release(EOS_PlayerDataStorage_FileMetadata *FileMetadata) {
    if(NULL != __on_EOS_PlayerDataStorage_FileMetadata_Release) {
        __on_EOS_PlayerDataStorage_FileMetadata_Release(FileMetadata);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_FileMetadata_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PlayerDataStorage_GetFileMetadataCount)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_GetFileMetadataCountOptions *GetFileMetadataCountOptions, int32_t *OutFileMetadataCount) = NULL;

EOS_EResult EOS_PlayerDataStorage_GetFileMetadataCount(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_GetFileMetadataCountOptions *GetFileMetadataCountOptions, int32_t *OutFileMetadataCount) {
    if(NULL != __on_EOS_PlayerDataStorage_GetFileMetadataCount) {
        return __on_EOS_PlayerDataStorage_GetFileMetadataCount(Handle, GetFileMetadataCountOptions, OutFileMetadataCount);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_GetFileMetadataCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PlayerDataStorage_QueryFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileOptions *QueryFileOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileCompleteCallback CompletionCallback) = NULL;

void EOS_PlayerDataStorage_QueryFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileOptions *QueryFileOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_QueryFile) {
        __on_EOS_PlayerDataStorage_QueryFile(Handle, QueryFileOptions, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_QueryFile");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PlayerDataStorage_QueryFileList)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileListOptions *QueryFileListOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileListCompleteCallback CompletionCallback) = NULL;

void EOS_PlayerDataStorage_QueryFileList(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileListOptions *QueryFileListOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileListCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_QueryFileList) {
        __on_EOS_PlayerDataStorage_QueryFileList(Handle, QueryFileListOptions, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_QueryFileList");
        exit(EXIT_FAILURE);
    }
}

EOS_HPlayerDataStorageFileTransferRequest (*__on_EOS_PlayerDataStorage_ReadFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_ReadFileOptions *ReadOptions, void *ClientData, const EOS_PlayerDataStorage_OnReadFileCompleteCallback CompletionCallback) = NULL;

EOS_HPlayerDataStorageFileTransferRequest EOS_PlayerDataStorage_ReadFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_ReadFileOptions *ReadOptions, void *ClientData, const EOS_PlayerDataStorage_OnReadFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_ReadFile) {
        return __on_EOS_PlayerDataStorage_ReadFile(Handle, ReadOptions, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_ReadFile");
        exit(EXIT_FAILURE);
    }
}

EOS_HPlayerDataStorageFileTransferRequest (*__on_EOS_PlayerDataStorage_WriteFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_WriteFileOptions *WriteOptions, void *ClientData, const EOS_PlayerDataStorage_OnWriteFileCompleteCallback CompletionCallback) = NULL;

EOS_HPlayerDataStorageFileTransferRequest EOS_PlayerDataStorage_WriteFile(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_WriteFileOptions *WriteOptions, void *ClientData, const EOS_PlayerDataStorage_OnWriteFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_PlayerDataStorage_WriteFile) {
        return __on_EOS_PlayerDataStorage_WriteFile(Handle, WriteOptions, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_PlayerDataStorage_WriteFile");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PresenceModification_DeleteData)(EOS_HPresenceModification Handle, const EOS_PresenceModification_DeleteDataOptions *Options) = NULL;

EOS_EResult EOS_PresenceModification_DeleteData(EOS_HPresenceModification Handle, const EOS_PresenceModification_DeleteDataOptions *Options) {
    if(NULL != __on_EOS_PresenceModification_DeleteData) {
        return __on_EOS_PresenceModification_DeleteData(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_PresenceModification_DeleteData");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_PresenceModification_Release)(EOS_HPresenceModification PresenceModificationHandle) = NULL;

void EOS_PresenceModification_Release(EOS_HPresenceModification PresenceModificationHandle) {
    if(NULL != __on_EOS_PresenceModification_Release) {
        __on_EOS_PresenceModification_Release(PresenceModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_PresenceModification_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PresenceModification_SetData)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetDataOptions *Options) = NULL;

EOS_EResult EOS_PresenceModification_SetData(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetDataOptions *Options) {
    if(NULL != __on_EOS_PresenceModification_SetData) {
        return __on_EOS_PresenceModification_SetData(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_PresenceModification_SetData");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PresenceModification_SetJoinInfo)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetJoinInfoOptions *Options) = NULL;

EOS_EResult EOS_PresenceModification_SetJoinInfo(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetJoinInfoOptions *Options) {
    if(NULL != __on_EOS_PresenceModification_SetJoinInfo) {
        return __on_EOS_PresenceModification_SetJoinInfo(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_PresenceModification_SetJoinInfo");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PresenceModification_SetRawRichText)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetRawRichTextOptions *Options) = NULL;

EOS_EResult EOS_PresenceModification_SetRawRichText(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetRawRichTextOptions *Options) {
    if(NULL != __on_EOS_PresenceModification_SetRawRichText) {
        return __on_EOS_PresenceModification_SetRawRichText(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_PresenceModification_SetRawRichText");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_PresenceModification_SetStatus)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetStatusOptions *Options) = NULL;

EOS_EResult EOS_PresenceModification_SetStatus(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetStatusOptions *Options) {
    if(NULL != __on_EOS_PresenceModification_SetStatus) {
        return __on_EOS_PresenceModification_SetStatus(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_PresenceModification_SetStatus");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Presence_AddNotifyJoinGameAccepted)(EOS_HPresence Handle, const EOS_Presence_AddNotifyJoinGameAcceptedOptions *Options, void *ClientData, const EOS_Presence_OnJoinGameAcceptedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Presence_AddNotifyJoinGameAccepted(EOS_HPresence Handle, const EOS_Presence_AddNotifyJoinGameAcceptedOptions *Options, void *ClientData, const EOS_Presence_OnJoinGameAcceptedCallback NotificationFn) {
    if(NULL != __on_EOS_Presence_AddNotifyJoinGameAccepted) {
        return __on_EOS_Presence_AddNotifyJoinGameAccepted(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Presence_AddNotifyJoinGameAccepted");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Presence_AddNotifyOnPresenceChanged)(EOS_HPresence Handle, const EOS_Presence_AddNotifyOnPresenceChangedOptions *Options, void *ClientData, const EOS_Presence_OnPresenceChangedCallback NotificationHandler) = NULL;

EOS_NotificationId EOS_Presence_AddNotifyOnPresenceChanged(EOS_HPresence Handle, const EOS_Presence_AddNotifyOnPresenceChangedOptions *Options, void *ClientData, const EOS_Presence_OnPresenceChangedCallback NotificationHandler) {
    if(NULL != __on_EOS_Presence_AddNotifyOnPresenceChanged) {
        return __on_EOS_Presence_AddNotifyOnPresenceChanged(Handle, Options, ClientData, NotificationHandler);
    } else {
        assert(!"NULL == __on_EOS_Presence_AddNotifyOnPresenceChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Presence_CopyPresence)(EOS_HPresence Handle, const EOS_Presence_CopyPresenceOptions *Options, EOS_Presence_Info **OutPresence) = NULL;

EOS_EResult EOS_Presence_CopyPresence(EOS_HPresence Handle, const EOS_Presence_CopyPresenceOptions *Options, EOS_Presence_Info **OutPresence) {
    if(NULL != __on_EOS_Presence_CopyPresence) {
        return __on_EOS_Presence_CopyPresence(Handle, Options, OutPresence);
    } else {
        assert(!"NULL == __on_EOS_Presence_CopyPresence");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Presence_CreatePresenceModification)(EOS_HPresence Handle, const EOS_Presence_CreatePresenceModificationOptions *Options, EOS_HPresenceModification *OutPresenceModificationHandle) = NULL;

EOS_EResult EOS_Presence_CreatePresenceModification(EOS_HPresence Handle, const EOS_Presence_CreatePresenceModificationOptions *Options, EOS_HPresenceModification *OutPresenceModificationHandle) {
    if(NULL != __on_EOS_Presence_CreatePresenceModification) {
        return __on_EOS_Presence_CreatePresenceModification(Handle, Options, OutPresenceModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_Presence_CreatePresenceModification");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Presence_GetJoinInfo)(EOS_HPresence Handle, const EOS_Presence_GetJoinInfoOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Presence_GetJoinInfo(EOS_HPresence Handle, const EOS_Presence_GetJoinInfoOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Presence_GetJoinInfo) {
        return __on_EOS_Presence_GetJoinInfo(Handle, Options, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Presence_GetJoinInfo");
        exit(EXIT_FAILURE);
    }
}

EOS_Bool (*__on_EOS_Presence_HasPresence)(EOS_HPresence Handle, const EOS_Presence_HasPresenceOptions *Options) = NULL;

EOS_Bool EOS_Presence_HasPresence(EOS_HPresence Handle, const EOS_Presence_HasPresenceOptions *Options) {
    if(NULL != __on_EOS_Presence_HasPresence) {
        return __on_EOS_Presence_HasPresence(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Presence_HasPresence");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Presence_Info_Release)(EOS_Presence_Info *PresenceInfo) = NULL;

void EOS_Presence_Info_Release(EOS_Presence_Info *PresenceInfo) {
    if(NULL != __on_EOS_Presence_Info_Release) {
        __on_EOS_Presence_Info_Release(PresenceInfo);
    } else {
        assert(!"NULL == __on_EOS_Presence_Info_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Presence_QueryPresence)(EOS_HPresence Handle, const EOS_Presence_QueryPresenceOptions *Options, void *ClientData, const EOS_Presence_OnQueryPresenceCompleteCallback CompletionDelegate) = NULL;

void EOS_Presence_QueryPresence(EOS_HPresence Handle, const EOS_Presence_QueryPresenceOptions *Options, void *ClientData, const EOS_Presence_OnQueryPresenceCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Presence_QueryPresence) {
        __on_EOS_Presence_QueryPresence(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Presence_QueryPresence");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Presence_RemoveNotifyJoinGameAccepted)(EOS_HPresence Handle, EOS_NotificationId InId) = NULL;

void EOS_Presence_RemoveNotifyJoinGameAccepted(EOS_HPresence Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Presence_RemoveNotifyJoinGameAccepted) {
        __on_EOS_Presence_RemoveNotifyJoinGameAccepted(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Presence_RemoveNotifyJoinGameAccepted");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Presence_RemoveNotifyOnPresenceChanged)(EOS_HPresence Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_Presence_RemoveNotifyOnPresenceChanged(EOS_HPresence Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_Presence_RemoveNotifyOnPresenceChanged) {
        __on_EOS_Presence_RemoveNotifyOnPresenceChanged(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_Presence_RemoveNotifyOnPresenceChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Presence_SetPresence)(EOS_HPresence Handle, const EOS_Presence_SetPresenceOptions *Options, void *ClientData, const EOS_Presence_SetPresenceCompleteCallback CompletionDelegate) = NULL;

void EOS_Presence_SetPresence(EOS_HPresence Handle, const EOS_Presence_SetPresenceOptions *Options, void *ClientData, const EOS_Presence_SetPresenceCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Presence_SetPresence) {
        __on_EOS_Presence_SetPresence(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Presence_SetPresence");
        exit(EXIT_FAILURE);
    }
}

EOS_ProductUserId (*__on_EOS_ProductUserId_FromString)(const char *ProductUserIdString) = NULL;

EOS_ProductUserId EOS_ProductUserId_FromString(const char *ProductUserIdString) {
    if(NULL != __on_EOS_ProductUserId_FromString) {
        return __on_EOS_ProductUserId_FromString(ProductUserIdString);
    } else {
        assert(!"NULL == __on_EOS_ProductUserId_FromString");
        exit(EXIT_FAILURE);
    }
}

EOS_Bool (*__on_EOS_ProductUserId_IsValid)(EOS_ProductUserId AccountId) = NULL;

EOS_Bool EOS_ProductUserId_IsValid(EOS_ProductUserId AccountId) {
    if(NULL != __on_EOS_ProductUserId_IsValid) {
        return __on_EOS_ProductUserId_IsValid(AccountId);
    } else {
        assert(!"NULL == __on_EOS_ProductUserId_IsValid");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_ProductUserId_ToString)(EOS_ProductUserId AccountId, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_ProductUserId_ToString(EOS_ProductUserId AccountId, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_ProductUserId_ToString) {
        return __on_EOS_ProductUserId_ToString(AccountId, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_ProductUserId_ToString");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAdmin_CopyUserTokenByIndex)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByIndexOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) = NULL;

EOS_EResult EOS_RTCAdmin_CopyUserTokenByIndex(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByIndexOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) {
    if(NULL != __on_EOS_RTCAdmin_CopyUserTokenByIndex) {
        return __on_EOS_RTCAdmin_CopyUserTokenByIndex(Handle, Options, OutUserToken);
    } else {
        assert(!"NULL == __on_EOS_RTCAdmin_CopyUserTokenByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAdmin_CopyUserTokenByUserId)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByUserIdOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) = NULL;

EOS_EResult EOS_RTCAdmin_CopyUserTokenByUserId(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByUserIdOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken) {
    if(NULL != __on_EOS_RTCAdmin_CopyUserTokenByUserId) {
        return __on_EOS_RTCAdmin_CopyUserTokenByUserId(Handle, Options, OutUserToken);
    } else {
        assert(!"NULL == __on_EOS_RTCAdmin_CopyUserTokenByUserId");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAdmin_Kick)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_KickOptions *Options, void *ClientData, const EOS_RTCAdmin_OnKickCompleteCallback CompletionDelegate) = NULL;

void EOS_RTCAdmin_Kick(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_KickOptions *Options, void *ClientData, const EOS_RTCAdmin_OnKickCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAdmin_Kick) {
        __on_EOS_RTCAdmin_Kick(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAdmin_Kick");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAdmin_QueryJoinRoomToken)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_QueryJoinRoomTokenOptions *Options, void *ClientData, const EOS_RTCAdmin_OnQueryJoinRoomTokenCompleteCallback CompletionDelegate) = NULL;

void EOS_RTCAdmin_QueryJoinRoomToken(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_QueryJoinRoomTokenOptions *Options, void *ClientData, const EOS_RTCAdmin_OnQueryJoinRoomTokenCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAdmin_QueryJoinRoomToken) {
        __on_EOS_RTCAdmin_QueryJoinRoomToken(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAdmin_QueryJoinRoomToken");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAdmin_SetParticipantHardMute)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_SetParticipantHardMuteOptions *Options, void *ClientData, const EOS_RTCAdmin_OnSetParticipantHardMuteCompleteCallback CompletionDelegate) = NULL;

void EOS_RTCAdmin_SetParticipantHardMute(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_SetParticipantHardMuteOptions *Options, void *ClientData, const EOS_RTCAdmin_OnSetParticipantHardMuteCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAdmin_SetParticipantHardMute) {
        __on_EOS_RTCAdmin_SetParticipantHardMute(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAdmin_SetParticipantHardMute");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAdmin_UserToken_Release)(EOS_RTCAdmin_UserToken *UserToken) = NULL;

void EOS_RTCAdmin_UserToken_Release(EOS_RTCAdmin_UserToken *UserToken) {
    if(NULL != __on_EOS_RTCAdmin_UserToken_Release) {
        __on_EOS_RTCAdmin_UserToken_Release(UserToken);
    } else {
        assert(!"NULL == __on_EOS_RTCAdmin_UserToken_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioBeforeRender)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeRenderOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeRenderCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTCAudio_AddNotifyAudioBeforeRender(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeRenderOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeRenderCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_AddNotifyAudioBeforeRender) {
        return __on_EOS_RTCAudio_AddNotifyAudioBeforeRender(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_AddNotifyAudioBeforeRender");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioBeforeSend)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeSendOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeSendCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTCAudio_AddNotifyAudioBeforeSend(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeSendOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeSendCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_AddNotifyAudioBeforeSend) {
        return __on_EOS_RTCAudio_AddNotifyAudioBeforeSend(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_AddNotifyAudioBeforeSend");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioDevicesChanged)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioDevicesChangedOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioDevicesChangedCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTCAudio_AddNotifyAudioDevicesChanged(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioDevicesChangedOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioDevicesChangedCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_AddNotifyAudioDevicesChanged) {
        return __on_EOS_RTCAudio_AddNotifyAudioDevicesChanged(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_AddNotifyAudioDevicesChanged");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioInputState)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioInputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioInputStateCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTCAudio_AddNotifyAudioInputState(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioInputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioInputStateCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_AddNotifyAudioInputState) {
        return __on_EOS_RTCAudio_AddNotifyAudioInputState(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_AddNotifyAudioInputState");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioOutputState)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioOutputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioOutputStateCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTCAudio_AddNotifyAudioOutputState(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioOutputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioOutputStateCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_AddNotifyAudioOutputState) {
        return __on_EOS_RTCAudio_AddNotifyAudioOutputState(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_AddNotifyAudioOutputState");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyParticipantUpdated)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyParticipantUpdatedOptions *Options, void *ClientData, const EOS_RTCAudio_OnParticipantUpdatedCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTCAudio_AddNotifyParticipantUpdated(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyParticipantUpdatedOptions *Options, void *ClientData, const EOS_RTCAudio_OnParticipantUpdatedCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_AddNotifyParticipantUpdated) {
        return __on_EOS_RTCAudio_AddNotifyParticipantUpdated(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_AddNotifyParticipantUpdated");
        exit(EXIT_FAILURE);
    }
}

const EOS_RTCAudio_AudioInputDeviceInfo *(*__on_EOS_RTCAudio_GetAudioInputDeviceByIndex)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDeviceByIndexOptions *Options) = NULL;

const EOS_RTCAudio_AudioInputDeviceInfo *EOS_RTCAudio_GetAudioInputDeviceByIndex(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDeviceByIndexOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_GetAudioInputDeviceByIndex) {
        return __on_EOS_RTCAudio_GetAudioInputDeviceByIndex(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_GetAudioInputDeviceByIndex");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_RTCAudio_GetAudioInputDevicesCount)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDevicesCountOptions *Options) = NULL;

uint32_t EOS_RTCAudio_GetAudioInputDevicesCount(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDevicesCountOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_GetAudioInputDevicesCount) {
        return __on_EOS_RTCAudio_GetAudioInputDevicesCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_GetAudioInputDevicesCount");
        exit(EXIT_FAILURE);
    }
}

const EOS_RTCAudio_AudioOutputDeviceInfo *(*__on_EOS_RTCAudio_GetAudioOutputDeviceByIndex)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDeviceByIndexOptions *Options) = NULL;

const EOS_RTCAudio_AudioOutputDeviceInfo *EOS_RTCAudio_GetAudioOutputDeviceByIndex(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDeviceByIndexOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_GetAudioOutputDeviceByIndex) {
        return __on_EOS_RTCAudio_GetAudioOutputDeviceByIndex(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_GetAudioOutputDeviceByIndex");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_RTCAudio_GetAudioOutputDevicesCount)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDevicesCountOptions *Options) = NULL;

uint32_t EOS_RTCAudio_GetAudioOutputDevicesCount(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDevicesCountOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_GetAudioOutputDevicesCount) {
        return __on_EOS_RTCAudio_GetAudioOutputDevicesCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_GetAudioOutputDevicesCount");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAudio_RegisterPlatformAudioUser)(EOS_HRTCAudio Handle, const EOS_RTCAudio_RegisterPlatformAudioUserOptions *Options) = NULL;

EOS_EResult EOS_RTCAudio_RegisterPlatformAudioUser(EOS_HRTCAudio Handle, const EOS_RTCAudio_RegisterPlatformAudioUserOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_RegisterPlatformAudioUser) {
        return __on_EOS_RTCAudio_RegisterPlatformAudioUser(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RegisterPlatformAudioUser");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTCAudio_RemoveNotifyAudioBeforeRender(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender) {
        __on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTCAudio_RemoveNotifyAudioBeforeSend(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend) {
        __on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTCAudio_RemoveNotifyAudioDevicesChanged(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged) {
        __on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioInputState)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTCAudio_RemoveNotifyAudioInputState(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTCAudio_RemoveNotifyAudioInputState) {
        __on_EOS_RTCAudio_RemoveNotifyAudioInputState(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RemoveNotifyAudioInputState");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_RemoveNotifyAudioOutputState)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTCAudio_RemoveNotifyAudioOutputState(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTCAudio_RemoveNotifyAudioOutputState) {
        __on_EOS_RTCAudio_RemoveNotifyAudioOutputState(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RemoveNotifyAudioOutputState");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_RemoveNotifyParticipantUpdated)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTCAudio_RemoveNotifyParticipantUpdated(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTCAudio_RemoveNotifyParticipantUpdated) {
        __on_EOS_RTCAudio_RemoveNotifyParticipantUpdated(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_RemoveNotifyParticipantUpdated");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAudio_SendAudio)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SendAudioOptions *Options) = NULL;

EOS_EResult EOS_RTCAudio_SendAudio(EOS_HRTCAudio Handle, const EOS_RTCAudio_SendAudioOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_SendAudio) {
        return __on_EOS_RTCAudio_SendAudio(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_SendAudio");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAudio_SetAudioInputSettings)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioInputSettingsOptions *Options) = NULL;

EOS_EResult EOS_RTCAudio_SetAudioInputSettings(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioInputSettingsOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_SetAudioInputSettings) {
        return __on_EOS_RTCAudio_SetAudioInputSettings(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_SetAudioInputSettings");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAudio_SetAudioOutputSettings)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioOutputSettingsOptions *Options) = NULL;

EOS_EResult EOS_RTCAudio_SetAudioOutputSettings(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioOutputSettingsOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_SetAudioOutputSettings) {
        return __on_EOS_RTCAudio_SetAudioOutputSettings(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_SetAudioOutputSettings");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_RTCAudio_UnregisterPlatformAudioUser)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UnregisterPlatformAudioUserOptions *Options) = NULL;

EOS_EResult EOS_RTCAudio_UnregisterPlatformAudioUser(EOS_HRTCAudio Handle, const EOS_RTCAudio_UnregisterPlatformAudioUserOptions *Options) {
    if(NULL != __on_EOS_RTCAudio_UnregisterPlatformAudioUser) {
        return __on_EOS_RTCAudio_UnregisterPlatformAudioUser(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_UnregisterPlatformAudioUser");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_UpdateReceiving)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateReceivingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateReceivingCallback CompletionDelegate) = NULL;

void EOS_RTCAudio_UpdateReceiving(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateReceivingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateReceivingCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_UpdateReceiving) {
        __on_EOS_RTCAudio_UpdateReceiving(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_UpdateReceiving");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTCAudio_UpdateSending)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateSendingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateSendingCallback CompletionDelegate) = NULL;

void EOS_RTCAudio_UpdateSending(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateSendingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateSendingCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTCAudio_UpdateSending) {
        __on_EOS_RTCAudio_UpdateSending(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTCAudio_UpdateSending");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTC_AddNotifyDisconnected)(EOS_HRTC Handle, EOS_RTC_AddNotifyDisconnectedOptions *Options, void *ClientData, const EOS_RTC_OnDisconnectedCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTC_AddNotifyDisconnected(EOS_HRTC Handle, EOS_RTC_AddNotifyDisconnectedOptions *Options, void *ClientData, const EOS_RTC_OnDisconnectedCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTC_AddNotifyDisconnected) {
        return __on_EOS_RTC_AddNotifyDisconnected(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTC_AddNotifyDisconnected");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_RTC_AddNotifyParticipantStatusChanged)(EOS_HRTC Handle, EOS_RTC_AddNotifyParticipantStatusChangedOptions *Options, void *ClientData, const EOS_RTC_OnParticipantStatusChangedCallback CompletionDelegate) = NULL;

EOS_NotificationId EOS_RTC_AddNotifyParticipantStatusChanged(EOS_HRTC Handle, EOS_RTC_AddNotifyParticipantStatusChangedOptions *Options, void *ClientData, const EOS_RTC_OnParticipantStatusChangedCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTC_AddNotifyParticipantStatusChanged) {
        return __on_EOS_RTC_AddNotifyParticipantStatusChanged(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTC_AddNotifyParticipantStatusChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTC_BlockParticipant)(EOS_HRTC Handle, EOS_RTC_BlockParticipantOptions *Options, void *ClientData, const EOS_RTC_OnBlockParticipantCallback CompletionDelegate) = NULL;

void EOS_RTC_BlockParticipant(EOS_HRTC Handle, EOS_RTC_BlockParticipantOptions *Options, void *ClientData, const EOS_RTC_OnBlockParticipantCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTC_BlockParticipant) {
        __on_EOS_RTC_BlockParticipant(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTC_BlockParticipant");
        exit(EXIT_FAILURE);
    }
}

EOS_HRTCAudio (*__on_EOS_RTC_GetAudioInterface)(EOS_HRTC Handle) = NULL;

EOS_HRTCAudio EOS_RTC_GetAudioInterface(EOS_HRTC Handle) {
    if(NULL != __on_EOS_RTC_GetAudioInterface) {
        return __on_EOS_RTC_GetAudioInterface(Handle);
    } else {
        assert(!"NULL == __on_EOS_RTC_GetAudioInterface");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTC_JoinRoom)(EOS_HRTC Handle, const EOS_RTC_JoinRoomOptions *Options, void *ClientData, const EOS_RTC_OnJoinRoomCallback CompletionDelegate) = NULL;

void EOS_RTC_JoinRoom(EOS_HRTC Handle, const EOS_RTC_JoinRoomOptions *Options, void *ClientData, const EOS_RTC_OnJoinRoomCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTC_JoinRoom) {
        __on_EOS_RTC_JoinRoom(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTC_JoinRoom");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTC_LeaveRoom)(EOS_HRTC Handle, const EOS_RTC_LeaveRoomOptions *Options, void *ClientData, const EOS_RTC_OnLeaveRoomCallback CompletionDelegate) = NULL;

void EOS_RTC_LeaveRoom(EOS_HRTC Handle, const EOS_RTC_LeaveRoomOptions *Options, void *ClientData, const EOS_RTC_OnLeaveRoomCallback CompletionDelegate) {
    if(NULL != __on_EOS_RTC_LeaveRoom) {
        __on_EOS_RTC_LeaveRoom(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_RTC_LeaveRoom");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTC_RemoveNotifyDisconnected)(EOS_HRTC Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTC_RemoveNotifyDisconnected(EOS_HRTC Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTC_RemoveNotifyDisconnected) {
        __on_EOS_RTC_RemoveNotifyDisconnected(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTC_RemoveNotifyDisconnected");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_RTC_RemoveNotifyParticipantStatusChanged)(EOS_HRTC Handle, EOS_NotificationId NotificationId) = NULL;

void EOS_RTC_RemoveNotifyParticipantStatusChanged(EOS_HRTC Handle, EOS_NotificationId NotificationId) {
    if(NULL != __on_EOS_RTC_RemoveNotifyParticipantStatusChanged) {
        __on_EOS_RTC_RemoveNotifyParticipantStatusChanged(Handle, NotificationId);
    } else {
        assert(!"NULL == __on_EOS_RTC_RemoveNotifyParticipantStatusChanged");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Reports_SendPlayerBehaviorReport)(EOS_HReports Handle, const EOS_Reports_SendPlayerBehaviorReportOptions *Options, void *ClientData, const EOS_Reports_OnSendPlayerBehaviorReportCompleteCallback CompletionDelegate) = NULL;

void EOS_Reports_SendPlayerBehaviorReport(EOS_HReports Handle, const EOS_Reports_SendPlayerBehaviorReportOptions *Options, void *ClientData, const EOS_Reports_OnSendPlayerBehaviorReportCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Reports_SendPlayerBehaviorReport) {
        __on_EOS_Reports_SendPlayerBehaviorReport(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Reports_SendPlayerBehaviorReport");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sanctions_CopyPlayerSanctionByIndex)(EOS_HSanctions Handle, const EOS_Sanctions_CopyPlayerSanctionByIndexOptions *Options, EOS_Sanctions_PlayerSanction **OutSanction) = NULL;

EOS_EResult EOS_Sanctions_CopyPlayerSanctionByIndex(EOS_HSanctions Handle, const EOS_Sanctions_CopyPlayerSanctionByIndexOptions *Options, EOS_Sanctions_PlayerSanction **OutSanction) {
    if(NULL != __on_EOS_Sanctions_CopyPlayerSanctionByIndex) {
        return __on_EOS_Sanctions_CopyPlayerSanctionByIndex(Handle, Options, OutSanction);
    } else {
        assert(!"NULL == __on_EOS_Sanctions_CopyPlayerSanctionByIndex");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Sanctions_GetPlayerSanctionCount)(EOS_HSanctions Handle, const EOS_Sanctions_GetPlayerSanctionCountOptions *Options) = NULL;

uint32_t EOS_Sanctions_GetPlayerSanctionCount(EOS_HSanctions Handle, const EOS_Sanctions_GetPlayerSanctionCountOptions *Options) {
    if(NULL != __on_EOS_Sanctions_GetPlayerSanctionCount) {
        return __on_EOS_Sanctions_GetPlayerSanctionCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Sanctions_GetPlayerSanctionCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sanctions_PlayerSanction_Release)(EOS_Sanctions_PlayerSanction *Sanction) = NULL;

void EOS_Sanctions_PlayerSanction_Release(EOS_Sanctions_PlayerSanction *Sanction) {
    if(NULL != __on_EOS_Sanctions_PlayerSanction_Release) {
        __on_EOS_Sanctions_PlayerSanction_Release(Sanction);
    } else {
        assert(!"NULL == __on_EOS_Sanctions_PlayerSanction_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sanctions_QueryActivePlayerSanctions)(EOS_HSanctions Handle, const EOS_Sanctions_QueryActivePlayerSanctionsOptions *Options, void *ClientData, const EOS_Sanctions_OnQueryActivePlayerSanctionsCallback CompletionDelegate) = NULL;

void EOS_Sanctions_QueryActivePlayerSanctions(EOS_HSanctions Handle, const EOS_Sanctions_QueryActivePlayerSanctionsOptions *Options, void *ClientData, const EOS_Sanctions_OnQueryActivePlayerSanctionsCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sanctions_QueryActivePlayerSanctions) {
        __on_EOS_Sanctions_QueryActivePlayerSanctions(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sanctions_QueryActivePlayerSanctions");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_SessionDetails_Attribute_Release)(EOS_SessionDetails_Attribute *SessionAttribute) = NULL;

void EOS_SessionDetails_Attribute_Release(EOS_SessionDetails_Attribute *SessionAttribute) {
    if(NULL != __on_EOS_SessionDetails_Attribute_Release) {
        __on_EOS_SessionDetails_Attribute_Release(SessionAttribute);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_Attribute_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionDetails_CopyInfo)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopyInfoOptions *Options, EOS_SessionDetails_Info **OutSessionInfo) = NULL;

EOS_EResult EOS_SessionDetails_CopyInfo(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopyInfoOptions *Options, EOS_SessionDetails_Info **OutSessionInfo) {
    if(NULL != __on_EOS_SessionDetails_CopyInfo) {
        return __on_EOS_SessionDetails_CopyInfo(Handle, Options, OutSessionInfo);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_CopyInfo");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionDetails_CopySessionAttributeByIndex)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByIndexOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) = NULL;

EOS_EResult EOS_SessionDetails_CopySessionAttributeByIndex(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByIndexOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) {
    if(NULL != __on_EOS_SessionDetails_CopySessionAttributeByIndex) {
        return __on_EOS_SessionDetails_CopySessionAttributeByIndex(Handle, Options, OutSessionAttribute);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_CopySessionAttributeByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionDetails_CopySessionAttributeByKey)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByKeyOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) = NULL;

EOS_EResult EOS_SessionDetails_CopySessionAttributeByKey(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByKeyOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute) {
    if(NULL != __on_EOS_SessionDetails_CopySessionAttributeByKey) {
        return __on_EOS_SessionDetails_CopySessionAttributeByKey(Handle, Options, OutSessionAttribute);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_CopySessionAttributeByKey");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_SessionDetails_GetSessionAttributeCount)(EOS_HSessionDetails Handle, const EOS_SessionDetails_GetSessionAttributeCountOptions *Options) = NULL;

uint32_t EOS_SessionDetails_GetSessionAttributeCount(EOS_HSessionDetails Handle, const EOS_SessionDetails_GetSessionAttributeCountOptions *Options) {
    if(NULL != __on_EOS_SessionDetails_GetSessionAttributeCount) {
        return __on_EOS_SessionDetails_GetSessionAttributeCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_GetSessionAttributeCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_SessionDetails_Info_Release)(EOS_SessionDetails_Info *SessionInfo) = NULL;

void EOS_SessionDetails_Info_Release(EOS_SessionDetails_Info *SessionInfo) {
    if(NULL != __on_EOS_SessionDetails_Info_Release) {
        __on_EOS_SessionDetails_Info_Release(SessionInfo);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_Info_Release");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_SessionDetails_Release)(EOS_HSessionDetails SessionHandle) = NULL;

void EOS_SessionDetails_Release(EOS_HSessionDetails SessionHandle) {
    if(NULL != __on_EOS_SessionDetails_Release) {
        __on_EOS_SessionDetails_Release(SessionHandle);
    } else {
        assert(!"NULL == __on_EOS_SessionDetails_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_AddAttribute)(EOS_HSessionModification Handle, const EOS_SessionModification_AddAttributeOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_AddAttribute(EOS_HSessionModification Handle, const EOS_SessionModification_AddAttributeOptions *Options) {
    if(NULL != __on_EOS_SessionModification_AddAttribute) {
        return __on_EOS_SessionModification_AddAttribute(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_AddAttribute");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_SessionModification_Release)(EOS_HSessionModification SessionModificationHandle) = NULL;

void EOS_SessionModification_Release(EOS_HSessionModification SessionModificationHandle) {
    if(NULL != __on_EOS_SessionModification_Release) {
        __on_EOS_SessionModification_Release(SessionModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_RemoveAttribute)(EOS_HSessionModification Handle, const EOS_SessionModification_RemoveAttributeOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_RemoveAttribute(EOS_HSessionModification Handle, const EOS_SessionModification_RemoveAttributeOptions *Options) {
    if(NULL != __on_EOS_SessionModification_RemoveAttribute) {
        return __on_EOS_SessionModification_RemoveAttribute(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_RemoveAttribute");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_SetBucketId)(EOS_HSessionModification Handle, const EOS_SessionModification_SetBucketIdOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_SetBucketId(EOS_HSessionModification Handle, const EOS_SessionModification_SetBucketIdOptions *Options) {
    if(NULL != __on_EOS_SessionModification_SetBucketId) {
        return __on_EOS_SessionModification_SetBucketId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_SetBucketId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_SetHostAddress)(EOS_HSessionModification Handle, const EOS_SessionModification_SetHostAddressOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_SetHostAddress(EOS_HSessionModification Handle, const EOS_SessionModification_SetHostAddressOptions *Options) {
    if(NULL != __on_EOS_SessionModification_SetHostAddress) {
        return __on_EOS_SessionModification_SetHostAddress(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_SetHostAddress");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_SetInvitesAllowed)(EOS_HSessionModification Handle, const EOS_SessionModification_SetInvitesAllowedOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_SetInvitesAllowed(EOS_HSessionModification Handle, const EOS_SessionModification_SetInvitesAllowedOptions *Options) {
    if(NULL != __on_EOS_SessionModification_SetInvitesAllowed) {
        return __on_EOS_SessionModification_SetInvitesAllowed(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_SetInvitesAllowed");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_SetJoinInProgressAllowed)(EOS_HSessionModification Handle, const EOS_SessionModification_SetJoinInProgressAllowedOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_SetJoinInProgressAllowed(EOS_HSessionModification Handle, const EOS_SessionModification_SetJoinInProgressAllowedOptions *Options) {
    if(NULL != __on_EOS_SessionModification_SetJoinInProgressAllowed) {
        return __on_EOS_SessionModification_SetJoinInProgressAllowed(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_SetJoinInProgressAllowed");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_SetMaxPlayers)(EOS_HSessionModification Handle, const EOS_SessionModification_SetMaxPlayersOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_SetMaxPlayers(EOS_HSessionModification Handle, const EOS_SessionModification_SetMaxPlayersOptions *Options) {
    if(NULL != __on_EOS_SessionModification_SetMaxPlayers) {
        return __on_EOS_SessionModification_SetMaxPlayers(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_SetMaxPlayers");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionModification_SetPermissionLevel)(EOS_HSessionModification Handle, const EOS_SessionModification_SetPermissionLevelOptions *Options) = NULL;

EOS_EResult EOS_SessionModification_SetPermissionLevel(EOS_HSessionModification Handle, const EOS_SessionModification_SetPermissionLevelOptions *Options) {
    if(NULL != __on_EOS_SessionModification_SetPermissionLevel) {
        return __on_EOS_SessionModification_SetPermissionLevel(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionModification_SetPermissionLevel");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionSearch_CopySearchResultByIndex)(EOS_HSessionSearch Handle, const EOS_SessionSearch_CopySearchResultByIndexOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;

EOS_EResult EOS_SessionSearch_CopySearchResultByIndex(EOS_HSessionSearch Handle, const EOS_SessionSearch_CopySearchResultByIndexOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    if(NULL != __on_EOS_SessionSearch_CopySearchResultByIndex) {
        return __on_EOS_SessionSearch_CopySearchResultByIndex(Handle, Options, OutSessionHandle);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_CopySearchResultByIndex");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_SessionSearch_Find)(EOS_HSessionSearch Handle, const EOS_SessionSearch_FindOptions *Options, void *ClientData, const EOS_SessionSearch_OnFindCallback CompletionDelegate) = NULL;

void EOS_SessionSearch_Find(EOS_HSessionSearch Handle, const EOS_SessionSearch_FindOptions *Options, void *ClientData, const EOS_SessionSearch_OnFindCallback CompletionDelegate) {
    if(NULL != __on_EOS_SessionSearch_Find) {
        __on_EOS_SessionSearch_Find(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_Find");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_SessionSearch_GetSearchResultCount)(EOS_HSessionSearch Handle, const EOS_SessionSearch_GetSearchResultCountOptions *Options) = NULL;

uint32_t EOS_SessionSearch_GetSearchResultCount(EOS_HSessionSearch Handle, const EOS_SessionSearch_GetSearchResultCountOptions *Options) {
    if(NULL != __on_EOS_SessionSearch_GetSearchResultCount) {
        return __on_EOS_SessionSearch_GetSearchResultCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_GetSearchResultCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_SessionSearch_Release)(EOS_HSessionSearch SessionSearchHandle) = NULL;

void EOS_SessionSearch_Release(EOS_HSessionSearch SessionSearchHandle) {
    if(NULL != __on_EOS_SessionSearch_Release) {
        __on_EOS_SessionSearch_Release(SessionSearchHandle);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionSearch_RemoveParameter)(EOS_HSessionSearch Handle, const EOS_SessionSearch_RemoveParameterOptions *Options) = NULL;

EOS_EResult EOS_SessionSearch_RemoveParameter(EOS_HSessionSearch Handle, const EOS_SessionSearch_RemoveParameterOptions *Options) {
    if(NULL != __on_EOS_SessionSearch_RemoveParameter) {
        return __on_EOS_SessionSearch_RemoveParameter(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_RemoveParameter");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionSearch_SetMaxResults)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetMaxResultsOptions *Options) = NULL;

EOS_EResult EOS_SessionSearch_SetMaxResults(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetMaxResultsOptions *Options) {
    if(NULL != __on_EOS_SessionSearch_SetMaxResults) {
        return __on_EOS_SessionSearch_SetMaxResults(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_SetMaxResults");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionSearch_SetParameter)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetParameterOptions *Options) = NULL;

EOS_EResult EOS_SessionSearch_SetParameter(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetParameterOptions *Options) {
    if(NULL != __on_EOS_SessionSearch_SetParameter) {
        return __on_EOS_SessionSearch_SetParameter(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_SetParameter");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionSearch_SetSessionId)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetSessionIdOptions *Options) = NULL;

EOS_EResult EOS_SessionSearch_SetSessionId(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetSessionIdOptions *Options) {
    if(NULL != __on_EOS_SessionSearch_SetSessionId) {
        return __on_EOS_SessionSearch_SetSessionId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_SetSessionId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_SessionSearch_SetTargetUserId)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetTargetUserIdOptions *Options) = NULL;

EOS_EResult EOS_SessionSearch_SetTargetUserId(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetTargetUserIdOptions *Options) {
    if(NULL != __on_EOS_SessionSearch_SetTargetUserId) {
        return __on_EOS_SessionSearch_SetTargetUserId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_SessionSearch_SetTargetUserId");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Sessions_AddNotifyJoinSessionAccepted)(EOS_HSessions Handle, const EOS_Sessions_AddNotifyJoinSessionAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionAcceptedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Sessions_AddNotifyJoinSessionAccepted(EOS_HSessions Handle, const EOS_Sessions_AddNotifyJoinSessionAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionAcceptedCallback NotificationFn) {
    if(NULL != __on_EOS_Sessions_AddNotifyJoinSessionAccepted) {
        return __on_EOS_Sessions_AddNotifyJoinSessionAccepted(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Sessions_AddNotifyJoinSessionAccepted");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Sessions_AddNotifySessionInviteAccepted)(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteAcceptedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Sessions_AddNotifySessionInviteAccepted(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteAcceptedCallback NotificationFn) {
    if(NULL != __on_EOS_Sessions_AddNotifySessionInviteAccepted) {
        return __on_EOS_Sessions_AddNotifySessionInviteAccepted(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Sessions_AddNotifySessionInviteAccepted");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_Sessions_AddNotifySessionInviteReceived)(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteReceivedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteReceivedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_Sessions_AddNotifySessionInviteReceived(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteReceivedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteReceivedCallback NotificationFn) {
    if(NULL != __on_EOS_Sessions_AddNotifySessionInviteReceived) {
        return __on_EOS_Sessions_AddNotifySessionInviteReceived(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_Sessions_AddNotifySessionInviteReceived");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_CopyActiveSessionHandle)(EOS_HSessions Handle, const EOS_Sessions_CopyActiveSessionHandleOptions *Options, EOS_HActiveSession *OutSessionHandle) = NULL;

EOS_EResult EOS_Sessions_CopyActiveSessionHandle(EOS_HSessions Handle, const EOS_Sessions_CopyActiveSessionHandleOptions *Options, EOS_HActiveSession *OutSessionHandle) {
    if(NULL != __on_EOS_Sessions_CopyActiveSessionHandle) {
        return __on_EOS_Sessions_CopyActiveSessionHandle(Handle, Options, OutSessionHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_CopyActiveSessionHandle");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_CopySessionHandleByInviteId)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByInviteIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;

EOS_EResult EOS_Sessions_CopySessionHandleByInviteId(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByInviteIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    if(NULL != __on_EOS_Sessions_CopySessionHandleByInviteId) {
        return __on_EOS_Sessions_CopySessionHandleByInviteId(Handle, Options, OutSessionHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_CopySessionHandleByInviteId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_CopySessionHandleByUiEventId)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByUiEventIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;

EOS_EResult EOS_Sessions_CopySessionHandleByUiEventId(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByUiEventIdOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    if(NULL != __on_EOS_Sessions_CopySessionHandleByUiEventId) {
        return __on_EOS_Sessions_CopySessionHandleByUiEventId(Handle, Options, OutSessionHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_CopySessionHandleByUiEventId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_CopySessionHandleForPresence)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleForPresenceOptions *Options, EOS_HSessionDetails *OutSessionHandle) = NULL;

EOS_EResult EOS_Sessions_CopySessionHandleForPresence(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleForPresenceOptions *Options, EOS_HSessionDetails *OutSessionHandle) {
    if(NULL != __on_EOS_Sessions_CopySessionHandleForPresence) {
        return __on_EOS_Sessions_CopySessionHandleForPresence(Handle, Options, OutSessionHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_CopySessionHandleForPresence");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_CreateSessionModification)(EOS_HSessions Handle, const EOS_Sessions_CreateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) = NULL;

EOS_EResult EOS_Sessions_CreateSessionModification(EOS_HSessions Handle, const EOS_Sessions_CreateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) {
    if(NULL != __on_EOS_Sessions_CreateSessionModification) {
        return __on_EOS_Sessions_CreateSessionModification(Handle, Options, OutSessionModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_CreateSessionModification");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_CreateSessionSearch)(EOS_HSessions Handle, const EOS_Sessions_CreateSessionSearchOptions *Options, EOS_HSessionSearch *OutSessionSearchHandle) = NULL;

EOS_EResult EOS_Sessions_CreateSessionSearch(EOS_HSessions Handle, const EOS_Sessions_CreateSessionSearchOptions *Options, EOS_HSessionSearch *OutSessionSearchHandle) {
    if(NULL != __on_EOS_Sessions_CreateSessionSearch) {
        return __on_EOS_Sessions_CreateSessionSearch(Handle, Options, OutSessionSearchHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_CreateSessionSearch");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_DestroySession)(EOS_HSessions Handle, const EOS_Sessions_DestroySessionOptions *Options, void *ClientData, const EOS_Sessions_OnDestroySessionCallback CompletionDelegate) = NULL;

void EOS_Sessions_DestroySession(EOS_HSessions Handle, const EOS_Sessions_DestroySessionOptions *Options, void *ClientData, const EOS_Sessions_OnDestroySessionCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_DestroySession) {
        __on_EOS_Sessions_DestroySession(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_DestroySession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_DumpSessionState)(EOS_HSessions Handle, const EOS_Sessions_DumpSessionStateOptions *Options) = NULL;

EOS_EResult EOS_Sessions_DumpSessionState(EOS_HSessions Handle, const EOS_Sessions_DumpSessionStateOptions *Options) {
    if(NULL != __on_EOS_Sessions_DumpSessionState) {
        return __on_EOS_Sessions_DumpSessionState(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Sessions_DumpSessionState");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_EndSession)(EOS_HSessions Handle, const EOS_Sessions_EndSessionOptions *Options, void *ClientData, const EOS_Sessions_OnEndSessionCallback CompletionDelegate) = NULL;

void EOS_Sessions_EndSession(EOS_HSessions Handle, const EOS_Sessions_EndSessionOptions *Options, void *ClientData, const EOS_Sessions_OnEndSessionCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_EndSession) {
        __on_EOS_Sessions_EndSession(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_EndSession");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Sessions_GetInviteCount)(EOS_HSessions Handle, const EOS_Sessions_GetInviteCountOptions *Options) = NULL;

uint32_t EOS_Sessions_GetInviteCount(EOS_HSessions Handle, const EOS_Sessions_GetInviteCountOptions *Options) {
    if(NULL != __on_EOS_Sessions_GetInviteCount) {
        return __on_EOS_Sessions_GetInviteCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Sessions_GetInviteCount");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_GetInviteIdByIndex)(EOS_HSessions Handle, const EOS_Sessions_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) = NULL;

EOS_EResult EOS_Sessions_GetInviteIdByIndex(EOS_HSessions Handle, const EOS_Sessions_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength) {
    if(NULL != __on_EOS_Sessions_GetInviteIdByIndex) {
        return __on_EOS_Sessions_GetInviteIdByIndex(Handle, Options, OutBuffer, InOutBufferLength);
    } else {
        assert(!"NULL == __on_EOS_Sessions_GetInviteIdByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_IsUserInSession)(EOS_HSessions Handle, const EOS_Sessions_IsUserInSessionOptions *Options) = NULL;

EOS_EResult EOS_Sessions_IsUserInSession(EOS_HSessions Handle, const EOS_Sessions_IsUserInSessionOptions *Options) {
    if(NULL != __on_EOS_Sessions_IsUserInSession) {
        return __on_EOS_Sessions_IsUserInSession(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Sessions_IsUserInSession");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_JoinSession)(EOS_HSessions Handle, const EOS_Sessions_JoinSessionOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionCallback CompletionDelegate) = NULL;

void EOS_Sessions_JoinSession(EOS_HSessions Handle, const EOS_Sessions_JoinSessionOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_JoinSession) {
        __on_EOS_Sessions_JoinSession(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_JoinSession");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_QueryInvites)(EOS_HSessions Handle, const EOS_Sessions_QueryInvitesOptions *Options, void *ClientData, const EOS_Sessions_OnQueryInvitesCallback CompletionDelegate) = NULL;

void EOS_Sessions_QueryInvites(EOS_HSessions Handle, const EOS_Sessions_QueryInvitesOptions *Options, void *ClientData, const EOS_Sessions_OnQueryInvitesCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_QueryInvites) {
        __on_EOS_Sessions_QueryInvites(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_QueryInvites");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_RegisterPlayers)(EOS_HSessions Handle, const EOS_Sessions_RegisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnRegisterPlayersCallback CompletionDelegate) = NULL;

void EOS_Sessions_RegisterPlayers(EOS_HSessions Handle, const EOS_Sessions_RegisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnRegisterPlayersCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_RegisterPlayers) {
        __on_EOS_Sessions_RegisterPlayers(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_RegisterPlayers");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_RejectInvite)(EOS_HSessions Handle, const EOS_Sessions_RejectInviteOptions *Options, void *ClientData, const EOS_Sessions_OnRejectInviteCallback CompletionDelegate) = NULL;

void EOS_Sessions_RejectInvite(EOS_HSessions Handle, const EOS_Sessions_RejectInviteOptions *Options, void *ClientData, const EOS_Sessions_OnRejectInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_RejectInvite) {
        __on_EOS_Sessions_RejectInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_RejectInvite");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_RemoveNotifyJoinSessionAccepted)(EOS_HSessions Handle, EOS_NotificationId InId) = NULL;

void EOS_Sessions_RemoveNotifyJoinSessionAccepted(EOS_HSessions Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Sessions_RemoveNotifyJoinSessionAccepted) {
        __on_EOS_Sessions_RemoveNotifyJoinSessionAccepted(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Sessions_RemoveNotifyJoinSessionAccepted");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_RemoveNotifySessionInviteAccepted)(EOS_HSessions Handle, EOS_NotificationId InId) = NULL;

void EOS_Sessions_RemoveNotifySessionInviteAccepted(EOS_HSessions Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Sessions_RemoveNotifySessionInviteAccepted) {
        __on_EOS_Sessions_RemoveNotifySessionInviteAccepted(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Sessions_RemoveNotifySessionInviteAccepted");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_RemoveNotifySessionInviteReceived)(EOS_HSessions Handle, EOS_NotificationId InId) = NULL;

void EOS_Sessions_RemoveNotifySessionInviteReceived(EOS_HSessions Handle, EOS_NotificationId InId) {
    if(NULL != __on_EOS_Sessions_RemoveNotifySessionInviteReceived) {
        __on_EOS_Sessions_RemoveNotifySessionInviteReceived(Handle, InId);
    } else {
        assert(!"NULL == __on_EOS_Sessions_RemoveNotifySessionInviteReceived");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_SendInvite)(EOS_HSessions Handle, const EOS_Sessions_SendInviteOptions *Options, void *ClientData, const EOS_Sessions_OnSendInviteCallback CompletionDelegate) = NULL;

void EOS_Sessions_SendInvite(EOS_HSessions Handle, const EOS_Sessions_SendInviteOptions *Options, void *ClientData, const EOS_Sessions_OnSendInviteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_SendInvite) {
        __on_EOS_Sessions_SendInvite(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_SendInvite");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_StartSession)(EOS_HSessions Handle, const EOS_Sessions_StartSessionOptions *Options, void *ClientData, const EOS_Sessions_OnStartSessionCallback CompletionDelegate) = NULL;

void EOS_Sessions_StartSession(EOS_HSessions Handle, const EOS_Sessions_StartSessionOptions *Options, void *ClientData, const EOS_Sessions_OnStartSessionCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_StartSession) {
        __on_EOS_Sessions_StartSession(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_StartSession");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_UnregisterPlayers)(EOS_HSessions Handle, const EOS_Sessions_UnregisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnUnregisterPlayersCallback CompletionDelegate) = NULL;

void EOS_Sessions_UnregisterPlayers(EOS_HSessions Handle, const EOS_Sessions_UnregisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnUnregisterPlayersCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_UnregisterPlayers) {
        __on_EOS_Sessions_UnregisterPlayers(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_UnregisterPlayers");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Sessions_UpdateSession)(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionOptions *Options, void *ClientData, const EOS_Sessions_OnUpdateSessionCallback CompletionDelegate) = NULL;

void EOS_Sessions_UpdateSession(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionOptions *Options, void *ClientData, const EOS_Sessions_OnUpdateSessionCallback CompletionDelegate) {
    if(NULL != __on_EOS_Sessions_UpdateSession) {
        __on_EOS_Sessions_UpdateSession(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Sessions_UpdateSession");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Sessions_UpdateSessionModification)(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) = NULL;

EOS_EResult EOS_Sessions_UpdateSessionModification(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle) {
    if(NULL != __on_EOS_Sessions_UpdateSessionModification) {
        return __on_EOS_Sessions_UpdateSessionModification(Handle, Options, OutSessionModificationHandle);
    } else {
        assert(!"NULL == __on_EOS_Sessions_UpdateSessionModification");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Shutdown)() = NULL;

EOS_EResult EOS_Shutdown() {
    if(NULL != __on_EOS_Shutdown) {
        return __on_EOS_Shutdown();
    } else {
        assert(!"NULL == __on_EOS_Shutdown");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Stats_CopyStatByIndex)(EOS_HStats Handle, const EOS_Stats_CopyStatByIndexOptions *Options, EOS_Stats_Stat **OutStat) = NULL;

EOS_EResult EOS_Stats_CopyStatByIndex(EOS_HStats Handle, const EOS_Stats_CopyStatByIndexOptions *Options, EOS_Stats_Stat **OutStat) {
    if(NULL != __on_EOS_Stats_CopyStatByIndex) {
        return __on_EOS_Stats_CopyStatByIndex(Handle, Options, OutStat);
    } else {
        assert(!"NULL == __on_EOS_Stats_CopyStatByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_Stats_CopyStatByName)(EOS_HStats Handle, const EOS_Stats_CopyStatByNameOptions *Options, EOS_Stats_Stat **OutStat) = NULL;

EOS_EResult EOS_Stats_CopyStatByName(EOS_HStats Handle, const EOS_Stats_CopyStatByNameOptions *Options, EOS_Stats_Stat **OutStat) {
    if(NULL != __on_EOS_Stats_CopyStatByName) {
        return __on_EOS_Stats_CopyStatByName(Handle, Options, OutStat);
    } else {
        assert(!"NULL == __on_EOS_Stats_CopyStatByName");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_Stats_GetStatsCount)(EOS_HStats Handle, const EOS_Stats_GetStatCountOptions *Options) = NULL;

uint32_t EOS_Stats_GetStatsCount(EOS_HStats Handle, const EOS_Stats_GetStatCountOptions *Options) {
    if(NULL != __on_EOS_Stats_GetStatsCount) {
        return __on_EOS_Stats_GetStatsCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_Stats_GetStatsCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Stats_IngestStat)(EOS_HStats Handle, const EOS_Stats_IngestStatOptions *Options, void *ClientData, const EOS_Stats_OnIngestStatCompleteCallback CompletionDelegate) = NULL;

void EOS_Stats_IngestStat(EOS_HStats Handle, const EOS_Stats_IngestStatOptions *Options, void *ClientData, const EOS_Stats_OnIngestStatCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Stats_IngestStat) {
        __on_EOS_Stats_IngestStat(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Stats_IngestStat");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Stats_QueryStats)(EOS_HStats Handle, const EOS_Stats_QueryStatsOptions *Options, void *ClientData, const EOS_Stats_OnQueryStatsCompleteCallback CompletionDelegate) = NULL;

void EOS_Stats_QueryStats(EOS_HStats Handle, const EOS_Stats_QueryStatsOptions *Options, void *ClientData, const EOS_Stats_OnQueryStatsCompleteCallback CompletionDelegate) {
    if(NULL != __on_EOS_Stats_QueryStats) {
        __on_EOS_Stats_QueryStats(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_Stats_QueryStats");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_Stats_Stat_Release)(EOS_Stats_Stat *Stat) = NULL;

void EOS_Stats_Stat_Release(EOS_Stats_Stat *Stat) {
    if(NULL != __on_EOS_Stats_Stat_Release) {
        __on_EOS_Stats_Stat_Release(Stat);
    } else {
        assert(!"NULL == __on_EOS_Stats_Stat_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_CancelRequest)(EOS_HTitleStorageFileTransferRequest Handle) = NULL;

EOS_EResult EOS_TitleStorageFileTransferRequest_CancelRequest(EOS_HTitleStorageFileTransferRequest Handle) {
    if(NULL != __on_EOS_TitleStorageFileTransferRequest_CancelRequest) {
        return __on_EOS_TitleStorageFileTransferRequest_CancelRequest(Handle);
    } else {
        assert(!"NULL == __on_EOS_TitleStorageFileTransferRequest_CancelRequest");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_GetFileRequestState)(EOS_HTitleStorageFileTransferRequest Handle) = NULL;

EOS_EResult EOS_TitleStorageFileTransferRequest_GetFileRequestState(EOS_HTitleStorageFileTransferRequest Handle) {
    if(NULL != __on_EOS_TitleStorageFileTransferRequest_GetFileRequestState) {
        return __on_EOS_TitleStorageFileTransferRequest_GetFileRequestState(Handle);
    } else {
        assert(!"NULL == __on_EOS_TitleStorageFileTransferRequest_GetFileRequestState");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_GetFilename)(EOS_HTitleStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) = NULL;

EOS_EResult EOS_TitleStorageFileTransferRequest_GetFilename(EOS_HTitleStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength) {
    if(NULL != __on_EOS_TitleStorageFileTransferRequest_GetFilename) {
        return __on_EOS_TitleStorageFileTransferRequest_GetFilename(Handle, FilenameStringBufferSizeBytes, OutStringBuffer, OutStringLength);
    } else {
        assert(!"NULL == __on_EOS_TitleStorageFileTransferRequest_GetFilename");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_TitleStorageFileTransferRequest_Release)(EOS_HTitleStorageFileTransferRequest TitleStorageFileTransferHandle) = NULL;

void EOS_TitleStorageFileTransferRequest_Release(EOS_HTitleStorageFileTransferRequest TitleStorageFileTransferHandle) {
    if(NULL != __on_EOS_TitleStorageFileTransferRequest_Release) {
        __on_EOS_TitleStorageFileTransferRequest_Release(TitleStorageFileTransferHandle);
    } else {
        assert(!"NULL == __on_EOS_TitleStorageFileTransferRequest_Release");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_TitleStorage_CopyFileMetadataAtIndex)(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataAtIndexOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) = NULL;

EOS_EResult EOS_TitleStorage_CopyFileMetadataAtIndex(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataAtIndexOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) {
    if(NULL != __on_EOS_TitleStorage_CopyFileMetadataAtIndex) {
        return __on_EOS_TitleStorage_CopyFileMetadataAtIndex(Handle, Options, OutMetadata);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_CopyFileMetadataAtIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_TitleStorage_CopyFileMetadataByFilename)(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataByFilenameOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) = NULL;

EOS_EResult EOS_TitleStorage_CopyFileMetadataByFilename(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataByFilenameOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata) {
    if(NULL != __on_EOS_TitleStorage_CopyFileMetadataByFilename) {
        return __on_EOS_TitleStorage_CopyFileMetadataByFilename(Handle, Options, OutMetadata);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_CopyFileMetadataByFilename");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_TitleStorage_DeleteCache)(EOS_HTitleStorage Handle, const EOS_TitleStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_TitleStorage_OnDeleteCacheCompleteCallback CompletionCallback) = NULL;

EOS_EResult EOS_TitleStorage_DeleteCache(EOS_HTitleStorage Handle, const EOS_TitleStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_TitleStorage_OnDeleteCacheCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_TitleStorage_DeleteCache) {
        return __on_EOS_TitleStorage_DeleteCache(Handle, Options, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_DeleteCache");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_TitleStorage_FileMetadata_Release)(EOS_TitleStorage_FileMetadata *FileMetadata) = NULL;

void EOS_TitleStorage_FileMetadata_Release(EOS_TitleStorage_FileMetadata *FileMetadata) {
    if(NULL != __on_EOS_TitleStorage_FileMetadata_Release) {
        __on_EOS_TitleStorage_FileMetadata_Release(FileMetadata);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_FileMetadata_Release");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_TitleStorage_GetFileMetadataCount)(EOS_HTitleStorage Handle, const EOS_TitleStorage_GetFileMetadataCountOptions *Options) = NULL;

uint32_t EOS_TitleStorage_GetFileMetadataCount(EOS_HTitleStorage Handle, const EOS_TitleStorage_GetFileMetadataCountOptions *Options) {
    if(NULL != __on_EOS_TitleStorage_GetFileMetadataCount) {
        return __on_EOS_TitleStorage_GetFileMetadataCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_GetFileMetadataCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_TitleStorage_QueryFile)(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileCompleteCallback CompletionCallback) = NULL;

void EOS_TitleStorage_QueryFile(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_TitleStorage_QueryFile) {
        __on_EOS_TitleStorage_QueryFile(Handle, Options, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_QueryFile");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_TitleStorage_QueryFileList)(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileListOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileListCompleteCallback CompletionCallback) = NULL;

void EOS_TitleStorage_QueryFileList(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileListOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileListCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_TitleStorage_QueryFileList) {
        __on_EOS_TitleStorage_QueryFileList(Handle, Options, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_QueryFileList");
        exit(EXIT_FAILURE);
    }
}

EOS_HTitleStorageFileTransferRequest (*__on_EOS_TitleStorage_ReadFile)(EOS_HTitleStorage Handle, const EOS_TitleStorage_ReadFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnReadFileCompleteCallback CompletionCallback) = NULL;

EOS_HTitleStorageFileTransferRequest EOS_TitleStorage_ReadFile(EOS_HTitleStorage Handle, const EOS_TitleStorage_ReadFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnReadFileCompleteCallback CompletionCallback) {
    if(NULL != __on_EOS_TitleStorage_ReadFile) {
        return __on_EOS_TitleStorage_ReadFile(Handle, Options, ClientData, CompletionCallback);
    } else {
        assert(!"NULL == __on_EOS_TitleStorage_ReadFile");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UI_AcknowledgeEventId)(EOS_HUI Handle, const EOS_UI_AcknowledgeEventIdOptions *Options) = NULL;

EOS_EResult EOS_UI_AcknowledgeEventId(EOS_HUI Handle, const EOS_UI_AcknowledgeEventIdOptions *Options) {
    if(NULL != __on_EOS_UI_AcknowledgeEventId) {
        return __on_EOS_UI_AcknowledgeEventId(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_UI_AcknowledgeEventId");
        exit(EXIT_FAILURE);
    }
}

EOS_NotificationId (*__on_EOS_UI_AddNotifyDisplaySettingsUpdated)(EOS_HUI Handle, const EOS_UI_AddNotifyDisplaySettingsUpdatedOptions *Options, void *ClientData, const EOS_UI_OnDisplaySettingsUpdatedCallback NotificationFn) = NULL;

EOS_NotificationId EOS_UI_AddNotifyDisplaySettingsUpdated(EOS_HUI Handle, const EOS_UI_AddNotifyDisplaySettingsUpdatedOptions *Options, void *ClientData, const EOS_UI_OnDisplaySettingsUpdatedCallback NotificationFn) {
    if(NULL != __on_EOS_UI_AddNotifyDisplaySettingsUpdated) {
        return __on_EOS_UI_AddNotifyDisplaySettingsUpdated(Handle, Options, ClientData, NotificationFn);
    } else {
        assert(!"NULL == __on_EOS_UI_AddNotifyDisplaySettingsUpdated");
        exit(EXIT_FAILURE);
    }
}

EOS_Bool (*__on_EOS_UI_GetFriendsVisible)(EOS_HUI Handle, const EOS_UI_GetFriendsVisibleOptions *Options) = NULL;

EOS_Bool EOS_UI_GetFriendsVisible(EOS_HUI Handle, const EOS_UI_GetFriendsVisibleOptions *Options) {
    if(NULL != __on_EOS_UI_GetFriendsVisible) {
        return __on_EOS_UI_GetFriendsVisible(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_UI_GetFriendsVisible");
        exit(EXIT_FAILURE);
    }
}

EOS_UI_ENotificationLocation (*__on_EOS_UI_GetNotificationLocationPreference)(EOS_HUI Handle) = NULL;

EOS_UI_ENotificationLocation EOS_UI_GetNotificationLocationPreference(EOS_HUI Handle) {
    if(NULL != __on_EOS_UI_GetNotificationLocationPreference) {
        return __on_EOS_UI_GetNotificationLocationPreference(Handle);
    } else {
        assert(!"NULL == __on_EOS_UI_GetNotificationLocationPreference");
        exit(EXIT_FAILURE);
    }
}

EOS_UI_EKeyCombination (*__on_EOS_UI_GetToggleFriendsKey)(EOS_HUI Handle, const EOS_UI_GetToggleFriendsKeyOptions *Options) = NULL;

EOS_UI_EKeyCombination EOS_UI_GetToggleFriendsKey(EOS_HUI Handle, const EOS_UI_GetToggleFriendsKeyOptions *Options) {
    if(NULL != __on_EOS_UI_GetToggleFriendsKey) {
        return __on_EOS_UI_GetToggleFriendsKey(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_UI_GetToggleFriendsKey");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UI_HideFriends)(EOS_HUI Handle, const EOS_UI_HideFriendsOptions *Options, void *ClientData, const EOS_UI_OnHideFriendsCallback CompletionDelegate) = NULL;

void EOS_UI_HideFriends(EOS_HUI Handle, const EOS_UI_HideFriendsOptions *Options, void *ClientData, const EOS_UI_OnHideFriendsCallback CompletionDelegate) {
    if(NULL != __on_EOS_UI_HideFriends) {
        __on_EOS_UI_HideFriends(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_UI_HideFriends");
        exit(EXIT_FAILURE);
    }
}

EOS_Bool (*__on_EOS_UI_IsValidKeyCombination)(EOS_HUI Handle, EOS_UI_EKeyCombination KeyCombination) = NULL;

EOS_Bool EOS_UI_IsValidKeyCombination(EOS_HUI Handle, EOS_UI_EKeyCombination KeyCombination) {
    if(NULL != __on_EOS_UI_IsValidKeyCombination) {
        return __on_EOS_UI_IsValidKeyCombination(Handle, KeyCombination);
    } else {
        assert(!"NULL == __on_EOS_UI_IsValidKeyCombination");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UI_RemoveNotifyDisplaySettingsUpdated)(EOS_HUI Handle, EOS_NotificationId Id) = NULL;

void EOS_UI_RemoveNotifyDisplaySettingsUpdated(EOS_HUI Handle, EOS_NotificationId Id) {
    if(NULL != __on_EOS_UI_RemoveNotifyDisplaySettingsUpdated) {
        __on_EOS_UI_RemoveNotifyDisplaySettingsUpdated(Handle, Id);
    } else {
        assert(!"NULL == __on_EOS_UI_RemoveNotifyDisplaySettingsUpdated");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UI_SetDisplayPreference)(EOS_HUI Handle, const EOS_UI_SetDisplayPreferenceOptions *Options) = NULL;

EOS_EResult EOS_UI_SetDisplayPreference(EOS_HUI Handle, const EOS_UI_SetDisplayPreferenceOptions *Options) {
    if(NULL != __on_EOS_UI_SetDisplayPreference) {
        return __on_EOS_UI_SetDisplayPreference(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_UI_SetDisplayPreference");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UI_SetToggleFriendsKey)(EOS_HUI Handle, const EOS_UI_SetToggleFriendsKeyOptions *Options) = NULL;

EOS_EResult EOS_UI_SetToggleFriendsKey(EOS_HUI Handle, const EOS_UI_SetToggleFriendsKeyOptions *Options) {
    if(NULL != __on_EOS_UI_SetToggleFriendsKey) {
        return __on_EOS_UI_SetToggleFriendsKey(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_UI_SetToggleFriendsKey");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UI_ShowFriends)(EOS_HUI Handle, const EOS_UI_ShowFriendsOptions *Options, void *ClientData, const EOS_UI_OnShowFriendsCallback CompletionDelegate) = NULL;

void EOS_UI_ShowFriends(EOS_HUI Handle, const EOS_UI_ShowFriendsOptions *Options, void *ClientData, const EOS_UI_OnShowFriendsCallback CompletionDelegate) {
    if(NULL != __on_EOS_UI_ShowFriends) {
        __on_EOS_UI_ShowFriends(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_UI_ShowFriends");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByAccountId)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) = NULL;

EOS_EResult EOS_UserInfo_CopyExternalUserInfoByAccountId(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) {
    if(NULL != __on_EOS_UserInfo_CopyExternalUserInfoByAccountId) {
        return __on_EOS_UserInfo_CopyExternalUserInfoByAccountId(Handle, Options, OutExternalUserInfo);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_CopyExternalUserInfoByAccountId");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByAccountType)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) = NULL;

EOS_EResult EOS_UserInfo_CopyExternalUserInfoByAccountType(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) {
    if(NULL != __on_EOS_UserInfo_CopyExternalUserInfoByAccountType) {
        return __on_EOS_UserInfo_CopyExternalUserInfoByAccountType(Handle, Options, OutExternalUserInfo);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_CopyExternalUserInfoByAccountType");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByIndex)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByIndexOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) = NULL;

EOS_EResult EOS_UserInfo_CopyExternalUserInfoByIndex(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByIndexOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo) {
    if(NULL != __on_EOS_UserInfo_CopyExternalUserInfoByIndex) {
        return __on_EOS_UserInfo_CopyExternalUserInfoByIndex(Handle, Options, OutExternalUserInfo);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_CopyExternalUserInfoByIndex");
        exit(EXIT_FAILURE);
    }
}

EOS_EResult (*__on_EOS_UserInfo_CopyUserInfo)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyUserInfoOptions *Options, EOS_UserInfo **OutUserInfo) = NULL;

EOS_EResult EOS_UserInfo_CopyUserInfo(EOS_HUserInfo Handle, const EOS_UserInfo_CopyUserInfoOptions *Options, EOS_UserInfo **OutUserInfo) {
    if(NULL != __on_EOS_UserInfo_CopyUserInfo) {
        return __on_EOS_UserInfo_CopyUserInfo(Handle, Options, OutUserInfo);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_CopyUserInfo");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UserInfo_ExternalUserInfo_Release)(EOS_UserInfo_ExternalUserInfo *ExternalUserInfo) = NULL;

void EOS_UserInfo_ExternalUserInfo_Release(EOS_UserInfo_ExternalUserInfo *ExternalUserInfo) {
    if(NULL != __on_EOS_UserInfo_ExternalUserInfo_Release) {
        __on_EOS_UserInfo_ExternalUserInfo_Release(ExternalUserInfo);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_ExternalUserInfo_Release");
        exit(EXIT_FAILURE);
    }
}

uint32_t (*__on_EOS_UserInfo_GetExternalUserInfoCount)(EOS_HUserInfo Handle, const EOS_UserInfo_GetExternalUserInfoCountOptions *Options) = NULL;

uint32_t EOS_UserInfo_GetExternalUserInfoCount(EOS_HUserInfo Handle, const EOS_UserInfo_GetExternalUserInfoCountOptions *Options) {
    if(NULL != __on_EOS_UserInfo_GetExternalUserInfoCount) {
        return __on_EOS_UserInfo_GetExternalUserInfoCount(Handle, Options);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_GetExternalUserInfoCount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UserInfo_QueryUserInfo)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoCallback CompletionDelegate) = NULL;

void EOS_UserInfo_QueryUserInfo(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoCallback CompletionDelegate) {
    if(NULL != __on_EOS_UserInfo_QueryUserInfo) {
        __on_EOS_UserInfo_QueryUserInfo(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_QueryUserInfo");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UserInfo_QueryUserInfoByDisplayName)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByDisplayNameOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback CompletionDelegate) = NULL;

void EOS_UserInfo_QueryUserInfoByDisplayName(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByDisplayNameOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback CompletionDelegate) {
    if(NULL != __on_EOS_UserInfo_QueryUserInfoByDisplayName) {
        __on_EOS_UserInfo_QueryUserInfoByDisplayName(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_QueryUserInfoByDisplayName");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UserInfo_QueryUserInfoByExternalAccount)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByExternalAccountOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback CompletionDelegate) = NULL;

void EOS_UserInfo_QueryUserInfoByExternalAccount(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByExternalAccountOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback CompletionDelegate) {
    if(NULL != __on_EOS_UserInfo_QueryUserInfoByExternalAccount) {
        __on_EOS_UserInfo_QueryUserInfoByExternalAccount(Handle, Options, ClientData, CompletionDelegate);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_QueryUserInfoByExternalAccount");
        exit(EXIT_FAILURE);
    }
}

void (*__on_EOS_UserInfo_Release)(EOS_UserInfo *UserInfo) = NULL;

void EOS_UserInfo_Release(EOS_UserInfo *UserInfo) {
    if(NULL != __on_EOS_UserInfo_Release) {
        __on_EOS_UserInfo_Release(UserInfo);
    } else {
        assert(!"NULL == __on_EOS_UserInfo_Release");
        exit(EXIT_FAILURE);
    }
}

