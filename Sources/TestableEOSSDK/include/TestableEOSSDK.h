
#pragma once
#include "EOSSDK/eos_umbrella.h"

extern EOS_NotificationId (*__on_EOS_Achievements_AddNotifyAchievementsUnlocked)(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedOptions *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Achievements_AddNotifyAchievementsUnlockedV2)(EOS_HAchievements Handle, const EOS_Achievements_AddNotifyAchievementsUnlockedV2Options *Options, void *ClientData, const EOS_Achievements_OnAchievementsUnlockedCallbackV2 NotificationFn);

extern EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByAchievementIdOptions *Options, EOS_Achievements_Definition **OutDefinition);

extern EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionByIndexOptions *Options, EOS_Achievements_Definition **OutDefinition);

extern EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionV2ByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByAchievementIdOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition);

extern EOS_EResult (*__on_EOS_Achievements_CopyAchievementDefinitionV2ByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyAchievementDefinitionV2ByIndexOptions *Options, EOS_Achievements_DefinitionV2 **OutDefinition);

extern EOS_EResult (*__on_EOS_Achievements_CopyPlayerAchievementByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByAchievementIdOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement);

extern EOS_EResult (*__on_EOS_Achievements_CopyPlayerAchievementByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyPlayerAchievementByIndexOptions *Options, EOS_Achievements_PlayerAchievement **OutAchievement);

extern EOS_EResult (*__on_EOS_Achievements_CopyUnlockedAchievementByAchievementId)(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByAchievementIdOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement);

extern EOS_EResult (*__on_EOS_Achievements_CopyUnlockedAchievementByIndex)(EOS_HAchievements Handle, const EOS_Achievements_CopyUnlockedAchievementByIndexOptions *Options, EOS_Achievements_UnlockedAchievement **OutAchievement);

extern void (*__on_EOS_Achievements_DefinitionV2_Release)(EOS_Achievements_DefinitionV2 *AchievementDefinition);

extern void (*__on_EOS_Achievements_Definition_Release)(EOS_Achievements_Definition *AchievementDefinition);

extern uint32_t (*__on_EOS_Achievements_GetAchievementDefinitionCount)(EOS_HAchievements Handle, const EOS_Achievements_GetAchievementDefinitionCountOptions *Options);

extern uint32_t (*__on_EOS_Achievements_GetPlayerAchievementCount)(EOS_HAchievements Handle, const EOS_Achievements_GetPlayerAchievementCountOptions *Options);

extern uint32_t (*__on_EOS_Achievements_GetUnlockedAchievementCount)(EOS_HAchievements Handle, const EOS_Achievements_GetUnlockedAchievementCountOptions *Options);

extern void (*__on_EOS_Achievements_PlayerAchievement_Release)(EOS_Achievements_PlayerAchievement *Achievement);

extern void (*__on_EOS_Achievements_QueryDefinitions)(EOS_HAchievements Handle, const EOS_Achievements_QueryDefinitionsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryDefinitionsCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Achievements_QueryPlayerAchievements)(EOS_HAchievements Handle, const EOS_Achievements_QueryPlayerAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnQueryPlayerAchievementsCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Achievements_RemoveNotifyAchievementsUnlocked)(EOS_HAchievements Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Achievements_UnlockAchievements)(EOS_HAchievements Handle, const EOS_Achievements_UnlockAchievementsOptions *Options, void *ClientData, const EOS_Achievements_OnUnlockAchievementsCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Achievements_UnlockedAchievement_Release)(EOS_Achievements_UnlockedAchievement *Achievement);

extern EOS_EResult (*__on_EOS_ActiveSession_CopyInfo)(EOS_HActiveSession Handle, const EOS_ActiveSession_CopyInfoOptions *Options, EOS_ActiveSession_Info **OutActiveSessionInfo);

extern EOS_ProductUserId (*__on_EOS_ActiveSession_GetRegisteredPlayerByIndex)(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerByIndexOptions *Options);

extern uint32_t (*__on_EOS_ActiveSession_GetRegisteredPlayerCount)(EOS_HActiveSession Handle, const EOS_ActiveSession_GetRegisteredPlayerCountOptions *Options);

extern void (*__on_EOS_ActiveSession_Info_Release)(EOS_ActiveSession_Info *ActiveSessionInfo);

extern void (*__on_EOS_ActiveSession_Release)(EOS_HActiveSession ActiveSessionHandle);

extern EOS_EResult (*__on_EOS_AntiCheatClient_AddExternalIntegrityCatalog)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddExternalIntegrityCatalogOptions *Options);

extern EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyMessageToPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToPeerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToPeerCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyMessageToServer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyMessageToServerOptions *Options, void *ClientData, EOS_AntiCheatClient_OnMessageToServerCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyPeerActionRequired)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerActionRequiredCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_AntiCheatClient_AddNotifyPeerAuthStatusChanged)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_AddNotifyPeerAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatClient_OnPeerAuthStatusChangedCallback NotificationFn);

extern EOS_EResult (*__on_EOS_AntiCheatClient_BeginSession)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_BeginSessionOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatClient_EndSession)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_EndSessionOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatClient_GetProtectMessageOutputLength)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes);

extern EOS_EResult (*__on_EOS_AntiCheatClient_PollStatus)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_PollStatusOptions *Options, EOS_EAntiCheatClientViolationType *ViolationType, char *OutMessage);

extern EOS_EResult (*__on_EOS_AntiCheatClient_ProtectMessage)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes);

extern EOS_EResult (*__on_EOS_AntiCheatClient_ReceiveMessageFromPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromPeerOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatClient_ReceiveMessageFromServer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_ReceiveMessageFromServerOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatClient_RegisterPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_RegisterPeerOptions *Options);

extern void (*__on_EOS_AntiCheatClient_RemoveNotifyMessageToPeer)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_AntiCheatClient_RemoveNotifyMessageToServer)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_AntiCheatClient_RemoveNotifyPeerActionRequired)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_AntiCheatClient_RemoveNotifyPeerAuthStatusChanged)(EOS_HAntiCheatClient Handle, EOS_NotificationId NotificationId);

extern EOS_EResult (*__on_EOS_AntiCheatClient_UnprotectMessage)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes);

extern EOS_EResult (*__on_EOS_AntiCheatClient_UnregisterPeer)(EOS_HAntiCheatClient Handle, const EOS_AntiCheatClient_UnregisterPeerOptions *Options);

extern EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyClientActionRequired)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientActionRequiredOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientActionRequiredCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyClientAuthStatusChanged)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyClientAuthStatusChangedOptions *Options, void *ClientData, EOS_AntiCheatServer_OnClientAuthStatusChangedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_AntiCheatServer_AddNotifyMessageToClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_AddNotifyMessageToClientOptions *Options, void *ClientData, EOS_AntiCheatServer_OnMessageToClientCallback NotificationFn);

extern EOS_EResult (*__on_EOS_AntiCheatServer_BeginSession)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_BeginSessionOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_EndSession)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_EndSessionOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_GetProtectMessageOutputLength)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_GetProtectMessageOutputLengthOptions *Options, uint32_t *OutBufferLengthBytes);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogEvent)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogEventOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogGameRoundEnd)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundEndOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogGameRoundStart)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogGameRoundStartOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerDespawn)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerDespawnOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerRevive)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerReviveOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerSpawn)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerSpawnOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerTakeDamage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTakeDamageOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerTick)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerTickOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerUseAbility)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseAbilityOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_LogPlayerUseWeapon)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_LogPlayerUseWeaponOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_ProtectMessage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ProtectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes);

extern EOS_EResult (*__on_EOS_AntiCheatServer_ReceiveMessageFromClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_ReceiveMessageFromClientOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_RegisterClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_RegisterClientOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_RegisterEvent)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_RegisterEventOptions *Options);

extern void (*__on_EOS_AntiCheatServer_RemoveNotifyClientActionRequired)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_AntiCheatServer_RemoveNotifyClientAuthStatusChanged)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_AntiCheatServer_RemoveNotifyMessageToClient)(EOS_HAntiCheatServer Handle, EOS_NotificationId NotificationId);

extern EOS_EResult (*__on_EOS_AntiCheatServer_SetClientDetails)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetClientDetailsOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_SetClientNetworkState)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_SetClientNetworkStateOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_SetGameSessionId)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatCommon_SetGameSessionIdOptions *Options);

extern EOS_EResult (*__on_EOS_AntiCheatServer_UnprotectMessage)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnprotectMessageOptions *Options, void *OutBuffer, uint32_t *OutBufferLengthBytes);

extern EOS_EResult (*__on_EOS_AntiCheatServer_UnregisterClient)(EOS_HAntiCheatServer Handle, const EOS_AntiCheatServer_UnregisterClientOptions *Options);

extern EOS_NotificationId (*__on_EOS_Auth_AddNotifyLoginStatusChanged)(EOS_HAuth Handle, const EOS_Auth_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Auth_OnLoginStatusChangedCallback Notification);

extern EOS_EResult (*__on_EOS_Auth_CopyUserAuthToken)(EOS_HAuth Handle, const EOS_Auth_CopyUserAuthTokenOptions *Options, EOS_EpicAccountId LocalUserId, EOS_Auth_Token **OutUserAuthToken);

extern void (*__on_EOS_Auth_DeletePersistentAuth)(EOS_HAuth Handle, const EOS_Auth_DeletePersistentAuthOptions *Options, void *ClientData, const EOS_Auth_OnDeletePersistentAuthCallback CompletionDelegate);

extern EOS_EpicAccountId (*__on_EOS_Auth_GetLoggedInAccountByIndex)(EOS_HAuth Handle, int32_t Index);

extern int32_t (*__on_EOS_Auth_GetLoggedInAccountsCount)(EOS_HAuth Handle);

extern EOS_ELoginStatus (*__on_EOS_Auth_GetLoginStatus)(EOS_HAuth Handle, EOS_EpicAccountId LocalUserId);

extern void (*__on_EOS_Auth_LinkAccount)(EOS_HAuth Handle, const EOS_Auth_LinkAccountOptions *Options, void *ClientData, const EOS_Auth_OnLinkAccountCallback CompletionDelegate);

extern void (*__on_EOS_Auth_Login)(EOS_HAuth Handle, const EOS_Auth_LoginOptions *Options, void *ClientData, const EOS_Auth_OnLoginCallback CompletionDelegate);

extern void (*__on_EOS_Auth_Logout)(EOS_HAuth Handle, const EOS_Auth_LogoutOptions *Options, void *ClientData, const EOS_Auth_OnLogoutCallback CompletionDelegate);

extern void (*__on_EOS_Auth_RemoveNotifyLoginStatusChanged)(EOS_HAuth Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Auth_Token_Release)(EOS_Auth_Token *AuthToken);

extern void (*__on_EOS_Auth_VerifyUserAuth)(EOS_HAuth Handle, const EOS_Auth_VerifyUserAuthOptions *Options, void *ClientData, const EOS_Auth_OnVerifyUserAuthCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_ByteArray_ToString)(const uint8_t *ByteArray, const uint32_t Length, char *OutBuffer, uint32_t *InOutBufferLength);

extern EOS_NotificationId (*__on_EOS_Connect_AddNotifyAuthExpiration)(EOS_HConnect Handle, const EOS_Connect_AddNotifyAuthExpirationOptions *Options, void *ClientData, const EOS_Connect_OnAuthExpirationCallback Notification);

extern EOS_NotificationId (*__on_EOS_Connect_AddNotifyLoginStatusChanged)(EOS_HConnect Handle, const EOS_Connect_AddNotifyLoginStatusChangedOptions *Options, void *ClientData, const EOS_Connect_OnLoginStatusChangedCallback Notification);

extern EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByAccountId)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountIdOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo);

extern EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByAccountType)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByAccountTypeOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo);

extern EOS_EResult (*__on_EOS_Connect_CopyProductUserExternalAccountByIndex)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserExternalAccountByIndexOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo);

extern EOS_EResult (*__on_EOS_Connect_CopyProductUserInfo)(EOS_HConnect Handle, const EOS_Connect_CopyProductUserInfoOptions *Options, EOS_Connect_ExternalAccountInfo **OutExternalAccountInfo);

extern void (*__on_EOS_Connect_CreateDeviceId)(EOS_HConnect Handle, const EOS_Connect_CreateDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnCreateDeviceIdCallback CompletionDelegate);

extern void (*__on_EOS_Connect_CreateUser)(EOS_HConnect Handle, const EOS_Connect_CreateUserOptions *Options, void *ClientData, const EOS_Connect_OnCreateUserCallback CompletionDelegate);

extern void (*__on_EOS_Connect_DeleteDeviceId)(EOS_HConnect Handle, const EOS_Connect_DeleteDeviceIdOptions *Options, void *ClientData, const EOS_Connect_OnDeleteDeviceIdCallback CompletionDelegate);

extern void (*__on_EOS_Connect_ExternalAccountInfo_Release)(EOS_Connect_ExternalAccountInfo *ExternalAccountInfo);

extern EOS_ProductUserId (*__on_EOS_Connect_GetExternalAccountMapping)(EOS_HConnect Handle, const EOS_Connect_GetExternalAccountMappingsOptions *Options);

extern EOS_ProductUserId (*__on_EOS_Connect_GetLoggedInUserByIndex)(EOS_HConnect Handle, int32_t Index);

extern int32_t (*__on_EOS_Connect_GetLoggedInUsersCount)(EOS_HConnect Handle);

extern EOS_ELoginStatus (*__on_EOS_Connect_GetLoginStatus)(EOS_HConnect Handle, EOS_ProductUserId LocalUserId);

extern uint32_t (*__on_EOS_Connect_GetProductUserExternalAccountCount)(EOS_HConnect Handle, const EOS_Connect_GetProductUserExternalAccountCountOptions *Options);

extern EOS_EResult (*__on_EOS_Connect_GetProductUserIdMapping)(EOS_HConnect Handle, const EOS_Connect_GetProductUserIdMappingOptions *Options, char *OutBuffer, int32_t *InOutBufferLength);

extern void (*__on_EOS_Connect_LinkAccount)(EOS_HConnect Handle, const EOS_Connect_LinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnLinkAccountCallback CompletionDelegate);

extern void (*__on_EOS_Connect_Login)(EOS_HConnect Handle, const EOS_Connect_LoginOptions *Options, void *ClientData, const EOS_Connect_OnLoginCallback CompletionDelegate);

extern void (*__on_EOS_Connect_QueryExternalAccountMappings)(EOS_HConnect Handle, const EOS_Connect_QueryExternalAccountMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryExternalAccountMappingsCallback CompletionDelegate);

extern void (*__on_EOS_Connect_QueryProductUserIdMappings)(EOS_HConnect Handle, const EOS_Connect_QueryProductUserIdMappingsOptions *Options, void *ClientData, const EOS_Connect_OnQueryProductUserIdMappingsCallback CompletionDelegate);

extern void (*__on_EOS_Connect_RemoveNotifyAuthExpiration)(EOS_HConnect Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Connect_RemoveNotifyLoginStatusChanged)(EOS_HConnect Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Connect_TransferDeviceIdAccount)(EOS_HConnect Handle, const EOS_Connect_TransferDeviceIdAccountOptions *Options, void *ClientData, const EOS_Connect_OnTransferDeviceIdAccountCallback CompletionDelegate);

extern void (*__on_EOS_Connect_UnlinkAccount)(EOS_HConnect Handle, const EOS_Connect_UnlinkAccountOptions *Options, void *ClientData, const EOS_Connect_OnUnlinkAccountCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_ContinuanceToken_ToString)(EOS_ContinuanceToken ContinuanceToken, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_Bool (*__on_EOS_EResult_IsOperationComplete)(EOS_EResult Result);

extern const char *(*__on_EOS_EResult_ToString)(EOS_EResult Result);

extern void (*__on_EOS_Ecom_CatalogItem_Release)(EOS_Ecom_CatalogItem *CatalogItem);

extern void (*__on_EOS_Ecom_CatalogOffer_Release)(EOS_Ecom_CatalogOffer *CatalogOffer);

extern void (*__on_EOS_Ecom_CatalogRelease_Release)(EOS_Ecom_CatalogRelease *CatalogRelease);

extern void (*__on_EOS_Ecom_Checkout)(EOS_HEcom Handle, const EOS_Ecom_CheckoutOptions *Options, void *ClientData, const EOS_Ecom_OnCheckoutCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Ecom_CopyEntitlementById)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIdOptions *Options, EOS_Ecom_Entitlement **OutEntitlement);

extern EOS_EResult (*__on_EOS_Ecom_CopyEntitlementByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement);

extern EOS_EResult (*__on_EOS_Ecom_CopyEntitlementByNameAndIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyEntitlementByNameAndIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement);

extern EOS_EResult (*__on_EOS_Ecom_CopyItemById)(EOS_HEcom Handle, const EOS_Ecom_CopyItemByIdOptions *Options, EOS_Ecom_CatalogItem **OutItem);

extern EOS_EResult (*__on_EOS_Ecom_CopyItemImageInfoByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyItemImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo);

extern EOS_EResult (*__on_EOS_Ecom_CopyItemReleaseByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyItemReleaseByIndexOptions *Options, EOS_Ecom_CatalogRelease **OutRelease);

extern EOS_EResult (*__on_EOS_Ecom_CopyOfferById)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIdOptions *Options, EOS_Ecom_CatalogOffer **OutOffer);

extern EOS_EResult (*__on_EOS_Ecom_CopyOfferByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferByIndexOptions *Options, EOS_Ecom_CatalogOffer **OutOffer);

extern EOS_EResult (*__on_EOS_Ecom_CopyOfferImageInfoByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferImageInfoByIndexOptions *Options, EOS_Ecom_KeyImageInfo **OutImageInfo);

extern EOS_EResult (*__on_EOS_Ecom_CopyOfferItemByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyOfferItemByIndexOptions *Options, EOS_Ecom_CatalogItem **OutItem);

extern EOS_EResult (*__on_EOS_Ecom_CopyTransactionById)(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIdOptions *Options, EOS_Ecom_HTransaction *OutTransaction);

extern EOS_EResult (*__on_EOS_Ecom_CopyTransactionByIndex)(EOS_HEcom Handle, const EOS_Ecom_CopyTransactionByIndexOptions *Options, EOS_Ecom_HTransaction *OutTransaction);

extern void (*__on_EOS_Ecom_Entitlement_Release)(EOS_Ecom_Entitlement *Entitlement);

extern uint32_t (*__on_EOS_Ecom_GetEntitlementsByNameCount)(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsByNameCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetEntitlementsCount)(EOS_HEcom Handle, const EOS_Ecom_GetEntitlementsCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetItemImageInfoCount)(EOS_HEcom Handle, const EOS_Ecom_GetItemImageInfoCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetItemReleaseCount)(EOS_HEcom Handle, const EOS_Ecom_GetItemReleaseCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetOfferCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetOfferImageInfoCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferImageInfoCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetOfferItemCount)(EOS_HEcom Handle, const EOS_Ecom_GetOfferItemCountOptions *Options);

extern uint32_t (*__on_EOS_Ecom_GetTransactionCount)(EOS_HEcom Handle, const EOS_Ecom_GetTransactionCountOptions *Options);

extern void (*__on_EOS_Ecom_KeyImageInfo_Release)(EOS_Ecom_KeyImageInfo *KeyImageInfo);

extern void (*__on_EOS_Ecom_QueryEntitlements)(EOS_HEcom Handle, const EOS_Ecom_QueryEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnQueryEntitlementsCallback CompletionDelegate);

extern void (*__on_EOS_Ecom_QueryOffers)(EOS_HEcom Handle, const EOS_Ecom_QueryOffersOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOffersCallback CompletionDelegate);

extern void (*__on_EOS_Ecom_QueryOwnership)(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipCallback CompletionDelegate);

extern void (*__on_EOS_Ecom_QueryOwnershipToken)(EOS_HEcom Handle, const EOS_Ecom_QueryOwnershipTokenOptions *Options, void *ClientData, const EOS_Ecom_OnQueryOwnershipTokenCallback CompletionDelegate);

extern void (*__on_EOS_Ecom_RedeemEntitlements)(EOS_HEcom Handle, const EOS_Ecom_RedeemEntitlementsOptions *Options, void *ClientData, const EOS_Ecom_OnRedeemEntitlementsCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Ecom_Transaction_CopyEntitlementByIndex)(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_CopyEntitlementByIndexOptions *Options, EOS_Ecom_Entitlement **OutEntitlement);

extern uint32_t (*__on_EOS_Ecom_Transaction_GetEntitlementsCount)(EOS_Ecom_HTransaction Handle, const EOS_Ecom_Transaction_GetEntitlementsCountOptions *Options);

extern EOS_EResult (*__on_EOS_Ecom_Transaction_GetTransactionId)(EOS_Ecom_HTransaction Handle, char *OutBuffer, int32_t *InOutBufferLength);

extern void (*__on_EOS_Ecom_Transaction_Release)(EOS_Ecom_HTransaction Transaction);

extern EOS_EpicAccountId (*__on_EOS_EpicAccountId_FromString)(const char *AccountIdString);

extern EOS_Bool (*__on_EOS_EpicAccountId_IsValid)(EOS_EpicAccountId AccountId);

extern EOS_EResult (*__on_EOS_EpicAccountId_ToString)(EOS_EpicAccountId AccountId, char *OutBuffer, int32_t *InOutBufferLength);

extern void (*__on_EOS_Friends_AcceptInvite)(EOS_HFriends Handle, const EOS_Friends_AcceptInviteOptions *Options, void *ClientData, const EOS_Friends_OnAcceptInviteCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_Friends_AddNotifyFriendsUpdate)(EOS_HFriends Handle, const EOS_Friends_AddNotifyFriendsUpdateOptions *Options, void *ClientData, const EOS_Friends_OnFriendsUpdateCallback FriendsUpdateHandler);

extern EOS_EpicAccountId (*__on_EOS_Friends_GetFriendAtIndex)(EOS_HFriends Handle, const EOS_Friends_GetFriendAtIndexOptions *Options);

extern int32_t (*__on_EOS_Friends_GetFriendsCount)(EOS_HFriends Handle, const EOS_Friends_GetFriendsCountOptions *Options);

extern EOS_EFriendsStatus (*__on_EOS_Friends_GetStatus)(EOS_HFriends Handle, const EOS_Friends_GetStatusOptions *Options);

extern void (*__on_EOS_Friends_QueryFriends)(EOS_HFriends Handle, const EOS_Friends_QueryFriendsOptions *Options, void *ClientData, const EOS_Friends_OnQueryFriendsCallback CompletionDelegate);

extern void (*__on_EOS_Friends_RejectInvite)(EOS_HFriends Handle, const EOS_Friends_RejectInviteOptions *Options, void *ClientData, const EOS_Friends_OnRejectInviteCallback CompletionDelegate);

extern void (*__on_EOS_Friends_RemoveNotifyFriendsUpdate)(EOS_HFriends Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_Friends_SendInvite)(EOS_HFriends Handle, const EOS_Friends_SendInviteOptions *Options, void *ClientData, const EOS_Friends_OnSendInviteCallback CompletionDelegate);

extern const char *(*__on_EOS_GetVersion)();

extern EOS_EResult (*__on_EOS_Initialize)(const EOS_InitializeOptions *Options);

extern EOS_NotificationId (*__on_EOS_KWS_AddNotifyPermissionsUpdateReceived)(EOS_HKWS Handle, const EOS_KWS_AddNotifyPermissionsUpdateReceivedOptions *Options, void *ClientData, const EOS_KWS_OnPermissionsUpdateReceivedCallback NotificationFn);

extern EOS_EResult (*__on_EOS_KWS_CopyPermissionByIndex)(EOS_HKWS Handle, const EOS_KWS_CopyPermissionByIndexOptions *Options, EOS_KWS_PermissionStatus **OutPermission);

extern void (*__on_EOS_KWS_CreateUser)(EOS_HKWS Handle, const EOS_KWS_CreateUserOptions *Options, void *ClientData, const EOS_KWS_OnCreateUserCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_KWS_GetPermissionByKey)(EOS_HKWS Handle, const EOS_KWS_GetPermissionByKeyOptions *Options, EOS_EKWSPermissionStatus *OutPermission);

extern int32_t (*__on_EOS_KWS_GetPermissionsCount)(EOS_HKWS Handle, const EOS_KWS_GetPermissionsCountOptions *Options);

extern void (*__on_EOS_KWS_PermissionStatus_Release)(EOS_KWS_PermissionStatus *PermissionStatus);

extern void (*__on_EOS_KWS_QueryAgeGate)(EOS_HKWS Handle, const EOS_KWS_QueryAgeGateOptions *Options, void *ClientData, const EOS_KWS_OnQueryAgeGateCallback CompletionDelegate);

extern void (*__on_EOS_KWS_QueryPermissions)(EOS_HKWS Handle, const EOS_KWS_QueryPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnQueryPermissionsCallback CompletionDelegate);

extern void (*__on_EOS_KWS_RemoveNotifyPermissionsUpdateReceived)(EOS_HKWS Handle, EOS_NotificationId InId);

extern void (*__on_EOS_KWS_RequestPermissions)(EOS_HKWS Handle, const EOS_KWS_RequestPermissionsOptions *Options, void *ClientData, const EOS_KWS_OnRequestPermissionsCallback CompletionDelegate);

extern void (*__on_EOS_KWS_UpdateParentEmail)(EOS_HKWS Handle, const EOS_KWS_UpdateParentEmailOptions *Options, void *ClientData, const EOS_KWS_OnUpdateParentEmailCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardDefinitionByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByIndexOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition);

extern EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardDefinitionByLeaderboardIdOptions *Options, EOS_Leaderboards_Definition **OutLeaderboardDefinition);

extern EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardRecordByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByIndexOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord);

extern EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardRecordByUserId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardRecordByUserIdOptions *Options, EOS_Leaderboards_LeaderboardRecord **OutLeaderboardRecord);

extern EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardUserScoreByIndex)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByIndexOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore);

extern EOS_EResult (*__on_EOS_Leaderboards_CopyLeaderboardUserScoreByUserId)(EOS_HLeaderboards Handle, const EOS_Leaderboards_CopyLeaderboardUserScoreByUserIdOptions *Options, EOS_Leaderboards_LeaderboardUserScore **OutLeaderboardUserScore);

extern void (*__on_EOS_Leaderboards_Definition_Release)(EOS_Leaderboards_Definition *LeaderboardDefinition);

extern uint32_t (*__on_EOS_Leaderboards_GetLeaderboardDefinitionCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardDefinitionCountOptions *Options);

extern uint32_t (*__on_EOS_Leaderboards_GetLeaderboardRecordCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardRecordCountOptions *Options);

extern uint32_t (*__on_EOS_Leaderboards_GetLeaderboardUserScoreCount)(EOS_HLeaderboards Handle, const EOS_Leaderboards_GetLeaderboardUserScoreCountOptions *Options);

extern void (*__on_EOS_Leaderboards_LeaderboardDefinition_Release)(EOS_Leaderboards_Definition *LeaderboardDefinition);

extern void (*__on_EOS_Leaderboards_LeaderboardRecord_Release)(EOS_Leaderboards_LeaderboardRecord *LeaderboardRecord);

extern void (*__on_EOS_Leaderboards_LeaderboardUserScore_Release)(EOS_Leaderboards_LeaderboardUserScore *LeaderboardUserScore);

extern void (*__on_EOS_Leaderboards_QueryLeaderboardDefinitions)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardDefinitionsOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardDefinitionsCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Leaderboards_QueryLeaderboardRanks)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardRanksOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardRanksCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Leaderboards_QueryLeaderboardUserScores)(EOS_HLeaderboards Handle, const EOS_Leaderboards_QueryLeaderboardUserScoresOptions *Options, void *ClientData, const EOS_Leaderboards_OnQueryLeaderboardUserScoresCompleteCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_LobbyDetails_CopyAttributeByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute);

extern EOS_EResult (*__on_EOS_LobbyDetails_CopyAttributeByKey)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute);

extern EOS_EResult (*__on_EOS_LobbyDetails_CopyInfo)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyInfoOptions *Options, EOS_LobbyDetails_Info **OutLobbyDetailsInfo);

extern EOS_EResult (*__on_EOS_LobbyDetails_CopyMemberAttributeByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByIndexOptions *Options, EOS_Lobby_Attribute **OutAttribute);

extern EOS_EResult (*__on_EOS_LobbyDetails_CopyMemberAttributeByKey)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_CopyMemberAttributeByKeyOptions *Options, EOS_Lobby_Attribute **OutAttribute);

extern uint32_t (*__on_EOS_LobbyDetails_GetAttributeCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetAttributeCountOptions *Options);

extern EOS_ProductUserId (*__on_EOS_LobbyDetails_GetLobbyOwner)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetLobbyOwnerOptions *Options);

extern uint32_t (*__on_EOS_LobbyDetails_GetMemberAttributeCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberAttributeCountOptions *Options);

extern EOS_ProductUserId (*__on_EOS_LobbyDetails_GetMemberByIndex)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberByIndexOptions *Options);

extern uint32_t (*__on_EOS_LobbyDetails_GetMemberCount)(EOS_HLobbyDetails Handle, const EOS_LobbyDetails_GetMemberCountOptions *Options);

extern void (*__on_EOS_LobbyDetails_Info_Release)(EOS_LobbyDetails_Info *LobbyDetailsInfo);

extern void (*__on_EOS_LobbyDetails_Release)(EOS_HLobbyDetails LobbyHandle);

extern EOS_EResult (*__on_EOS_LobbyModification_AddAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddAttributeOptions *Options);

extern EOS_EResult (*__on_EOS_LobbyModification_AddMemberAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_AddMemberAttributeOptions *Options);

extern void (*__on_EOS_LobbyModification_Release)(EOS_HLobbyModification LobbyModificationHandle);

extern EOS_EResult (*__on_EOS_LobbyModification_RemoveAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveAttributeOptions *Options);

extern EOS_EResult (*__on_EOS_LobbyModification_RemoveMemberAttribute)(EOS_HLobbyModification Handle, const EOS_LobbyModification_RemoveMemberAttributeOptions *Options);

extern EOS_EResult (*__on_EOS_LobbyModification_SetBucketId)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetBucketIdOptions *Options);

extern EOS_EResult (*__on_EOS_LobbyModification_SetInvitesAllowed)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetInvitesAllowedOptions *Options);

extern EOS_EResult (*__on_EOS_LobbyModification_SetMaxMembers)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetMaxMembersOptions *Options);

extern EOS_EResult (*__on_EOS_LobbyModification_SetPermissionLevel)(EOS_HLobbyModification Handle, const EOS_LobbyModification_SetPermissionLevelOptions *Options);

extern EOS_EResult (*__on_EOS_LobbySearch_CopySearchResultByIndex)(EOS_HLobbySearch Handle, const EOS_LobbySearch_CopySearchResultByIndexOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle);

extern void (*__on_EOS_LobbySearch_Find)(EOS_HLobbySearch Handle, const EOS_LobbySearch_FindOptions *Options, void *ClientData, const EOS_LobbySearch_OnFindCallback CompletionDelegate);

extern uint32_t (*__on_EOS_LobbySearch_GetSearchResultCount)(EOS_HLobbySearch Handle, const EOS_LobbySearch_GetSearchResultCountOptions *Options);

extern void (*__on_EOS_LobbySearch_Release)(EOS_HLobbySearch LobbySearchHandle);

extern EOS_EResult (*__on_EOS_LobbySearch_RemoveParameter)(EOS_HLobbySearch Handle, const EOS_LobbySearch_RemoveParameterOptions *Options);

extern EOS_EResult (*__on_EOS_LobbySearch_SetLobbyId)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetLobbyIdOptions *Options);

extern EOS_EResult (*__on_EOS_LobbySearch_SetMaxResults)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetMaxResultsOptions *Options);

extern EOS_EResult (*__on_EOS_LobbySearch_SetParameter)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetParameterOptions *Options);

extern EOS_EResult (*__on_EOS_LobbySearch_SetTargetUserId)(EOS_HLobbySearch Handle, const EOS_LobbySearch_SetTargetUserIdOptions *Options);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyJoinLobbyAccepted)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyJoinLobbyAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyAcceptedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyInviteAccepted)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteAcceptedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteAcceptedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyInviteReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyInviteReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyInviteReceivedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyMemberStatusReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberStatusReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberStatusReceivedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyMemberUpdateReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyMemberUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyMemberUpdateReceivedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyLobbyUpdateReceived)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyLobbyUpdateReceivedOptions *Options, void *ClientData, const EOS_Lobby_OnLobbyUpdateReceivedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Lobby_AddNotifyRTCRoomConnectionChanged)(EOS_HLobby Handle, const EOS_Lobby_AddNotifyRTCRoomConnectionChangedOptions *Options, void *ClientData, const EOS_Lobby_OnRTCRoomConnectionChangedCallback NotificationFn);

extern void (*__on_EOS_Lobby_Attribute_Release)(EOS_Lobby_Attribute *LobbyAttribute);

extern EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandle)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle);

extern EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandleByInviteId)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByInviteIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle);

extern EOS_EResult (*__on_EOS_Lobby_CopyLobbyDetailsHandleByUiEventId)(EOS_HLobby Handle, const EOS_Lobby_CopyLobbyDetailsHandleByUiEventIdOptions *Options, EOS_HLobbyDetails *OutLobbyDetailsHandle);

extern void (*__on_EOS_Lobby_CreateLobby)(EOS_HLobby Handle, const EOS_Lobby_CreateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnCreateLobbyCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Lobby_CreateLobbySearch)(EOS_HLobby Handle, const EOS_Lobby_CreateLobbySearchOptions *Options, EOS_HLobbySearch *OutLobbySearchHandle);

extern void (*__on_EOS_Lobby_DestroyLobby)(EOS_HLobby Handle, const EOS_Lobby_DestroyLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnDestroyLobbyCallback CompletionDelegate);

extern uint32_t (*__on_EOS_Lobby_GetInviteCount)(EOS_HLobby Handle, const EOS_Lobby_GetInviteCountOptions *Options);

extern EOS_EResult (*__on_EOS_Lobby_GetInviteIdByIndex)(EOS_HLobby Handle, const EOS_Lobby_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_EResult (*__on_EOS_Lobby_GetRTCRoomName)(EOS_HLobby Handle, const EOS_Lobby_GetRTCRoomNameOptions *Options, char *OutBuffer, uint32_t *InOutBufferLength);

extern EOS_EResult (*__on_EOS_Lobby_IsRTCRoomConnected)(EOS_HLobby Handle, const EOS_Lobby_IsRTCRoomConnectedOptions *Options, EOS_Bool *bOutIsConnected);

extern void (*__on_EOS_Lobby_JoinLobby)(EOS_HLobby Handle, const EOS_Lobby_JoinLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnJoinLobbyCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_KickMember)(EOS_HLobby Handle, const EOS_Lobby_KickMemberOptions *Options, void *ClientData, const EOS_Lobby_OnKickMemberCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_LeaveLobby)(EOS_HLobby Handle, const EOS_Lobby_LeaveLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnLeaveLobbyCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_PromoteMember)(EOS_HLobby Handle, const EOS_Lobby_PromoteMemberOptions *Options, void *ClientData, const EOS_Lobby_OnPromoteMemberCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_QueryInvites)(EOS_HLobby Handle, const EOS_Lobby_QueryInvitesOptions *Options, void *ClientData, const EOS_Lobby_OnQueryInvitesCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_RejectInvite)(EOS_HLobby Handle, const EOS_Lobby_RejectInviteOptions *Options, void *ClientData, const EOS_Lobby_OnRejectInviteCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_RemoveNotifyJoinLobbyAccepted)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_RemoveNotifyLobbyInviteAccepted)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_RemoveNotifyLobbyInviteReceived)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_RemoveNotifyLobbyMemberStatusReceived)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_RemoveNotifyLobbyMemberUpdateReceived)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_RemoveNotifyLobbyUpdateReceived)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_RemoveNotifyRTCRoomConnectionChanged)(EOS_HLobby Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Lobby_SendInvite)(EOS_HLobby Handle, const EOS_Lobby_SendInviteOptions *Options, void *ClientData, const EOS_Lobby_OnSendInviteCallback CompletionDelegate);

extern void (*__on_EOS_Lobby_UpdateLobby)(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyOptions *Options, void *ClientData, const EOS_Lobby_OnUpdateLobbyCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Lobby_UpdateLobbyModification)(EOS_HLobby Handle, const EOS_Lobby_UpdateLobbyModificationOptions *Options, EOS_HLobbyModification *OutLobbyModificationHandle);

extern EOS_EResult (*__on_EOS_Logging_SetCallback)(EOS_LogMessageFunc Callback);

extern EOS_EResult (*__on_EOS_Logging_SetLogLevel)(EOS_ELogCategory LogCategory, EOS_ELogLevel LogLevel);

extern EOS_EResult (*__on_EOS_Metrics_BeginPlayerSession)(EOS_HMetrics Handle, const EOS_Metrics_BeginPlayerSessionOptions *Options);

extern EOS_EResult (*__on_EOS_Metrics_EndPlayerSession)(EOS_HMetrics Handle, const EOS_Metrics_EndPlayerSessionOptions *Options);

extern EOS_EResult (*__on_EOS_Mods_CopyModInfo)(EOS_HMods Handle, const EOS_Mods_CopyModInfoOptions *Options, EOS_Mods_ModInfo **OutEnumeratedMods);

extern void (*__on_EOS_Mods_EnumerateMods)(EOS_HMods Handle, const EOS_Mods_EnumerateModsOptions *Options, void *ClientData, const EOS_Mods_OnEnumerateModsCallback CompletionDelegate);

extern void (*__on_EOS_Mods_InstallMod)(EOS_HMods Handle, const EOS_Mods_InstallModOptions *Options, void *ClientData, const EOS_Mods_OnInstallModCallback CompletionDelegate);

extern void (*__on_EOS_Mods_ModInfo_Release)(EOS_Mods_ModInfo *ModInfo);

extern void (*__on_EOS_Mods_UninstallMod)(EOS_HMods Handle, const EOS_Mods_UninstallModOptions *Options, void *ClientData, const EOS_Mods_OnUninstallModCallback CompletionDelegate);

extern void (*__on_EOS_Mods_UpdateMod)(EOS_HMods Handle, const EOS_Mods_UpdateModOptions *Options, void *ClientData, const EOS_Mods_OnUpdateModCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_P2P_AcceptConnection)(EOS_HP2P Handle, const EOS_P2P_AcceptConnectionOptions *Options);

extern EOS_NotificationId (*__on_EOS_P2P_AddNotifyIncomingPacketQueueFull)(EOS_HP2P Handle, const EOS_P2P_AddNotifyIncomingPacketQueueFullOptions *Options, void *ClientData, EOS_P2P_OnIncomingPacketQueueFullCallback IncomingPacketQueueFullHandler);

extern EOS_NotificationId (*__on_EOS_P2P_AddNotifyPeerConnectionClosed)(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionClosedOptions *Options, void *ClientData, EOS_P2P_OnRemoteConnectionClosedCallback ConnectionClosedHandler);

extern EOS_NotificationId (*__on_EOS_P2P_AddNotifyPeerConnectionRequest)(EOS_HP2P Handle, const EOS_P2P_AddNotifyPeerConnectionRequestOptions *Options, void *ClientData, EOS_P2P_OnIncomingConnectionRequestCallback ConnectionRequestHandler);

extern EOS_EResult (*__on_EOS_P2P_CloseConnection)(EOS_HP2P Handle, const EOS_P2P_CloseConnectionOptions *Options);

extern EOS_EResult (*__on_EOS_P2P_CloseConnections)(EOS_HP2P Handle, const EOS_P2P_CloseConnectionsOptions *Options);

extern EOS_EResult (*__on_EOS_P2P_GetNATType)(EOS_HP2P Handle, const EOS_P2P_GetNATTypeOptions *Options, EOS_ENATType *OutNATType);

extern EOS_EResult (*__on_EOS_P2P_GetNextReceivedPacketSize)(EOS_HP2P Handle, const EOS_P2P_GetNextReceivedPacketSizeOptions *Options, uint32_t *OutPacketSizeBytes);

extern EOS_EResult (*__on_EOS_P2P_GetPacketQueueInfo)(EOS_HP2P Handle, const EOS_P2P_GetPacketQueueInfoOptions *Options, EOS_P2P_PacketQueueInfo *OutPacketQueueInfo);

extern EOS_EResult (*__on_EOS_P2P_GetPortRange)(EOS_HP2P Handle, const EOS_P2P_GetPortRangeOptions *Options, uint16_t *OutPort, uint16_t *OutNumAdditionalPortsToTry);

extern EOS_EResult (*__on_EOS_P2P_GetRelayControl)(EOS_HP2P Handle, const EOS_P2P_GetRelayControlOptions *Options, EOS_ERelayControl *OutRelayControl);

extern void (*__on_EOS_P2P_QueryNATType)(EOS_HP2P Handle, const EOS_P2P_QueryNATTypeOptions *Options, void *ClientData, const EOS_P2P_OnQueryNATTypeCompleteCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_P2P_ReceivePacket)(EOS_HP2P Handle, const EOS_P2P_ReceivePacketOptions *Options, EOS_ProductUserId *OutPeerId, EOS_P2P_SocketId *OutSocketId, uint8_t *OutChannel, void *OutData, uint32_t *OutBytesWritten);

extern void (*__on_EOS_P2P_RemoveNotifyIncomingPacketQueueFull)(EOS_HP2P Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_P2P_RemoveNotifyPeerConnectionClosed)(EOS_HP2P Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_P2P_RemoveNotifyPeerConnectionRequest)(EOS_HP2P Handle, EOS_NotificationId NotificationId);

extern EOS_EResult (*__on_EOS_P2P_SendPacket)(EOS_HP2P Handle, const EOS_P2P_SendPacketOptions *Options);

extern EOS_EResult (*__on_EOS_P2P_SetPacketQueueSize)(EOS_HP2P Handle, const EOS_P2P_SetPacketQueueSizeOptions *Options);

extern EOS_EResult (*__on_EOS_P2P_SetPortRange)(EOS_HP2P Handle, const EOS_P2P_SetPortRangeOptions *Options);

extern EOS_EResult (*__on_EOS_P2P_SetRelayControl)(EOS_HP2P Handle, const EOS_P2P_SetRelayControlOptions *Options);

extern EOS_EResult (*__on_EOS_Platform_CheckForLauncherAndRestart)(EOS_HPlatform Handle);

extern EOS_HPlatform (*__on_EOS_Platform_Create)(const EOS_Platform_Options *Options);

extern EOS_HAchievements (*__on_EOS_Platform_GetAchievementsInterface)(EOS_HPlatform Handle);

extern EOS_EResult (*__on_EOS_Platform_GetActiveCountryCode)(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_EResult (*__on_EOS_Platform_GetActiveLocaleCode)(EOS_HPlatform Handle, EOS_EpicAccountId LocalUserId, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_HAntiCheatClient (*__on_EOS_Platform_GetAntiCheatClientInterface)(EOS_HPlatform Handle);

extern EOS_HAntiCheatServer (*__on_EOS_Platform_GetAntiCheatServerInterface)(EOS_HPlatform Handle);

extern EOS_HAuth (*__on_EOS_Platform_GetAuthInterface)(EOS_HPlatform Handle);

extern EOS_HConnect (*__on_EOS_Platform_GetConnectInterface)(EOS_HPlatform Handle);

extern EOS_HEcom (*__on_EOS_Platform_GetEcomInterface)(EOS_HPlatform Handle);

extern EOS_HFriends (*__on_EOS_Platform_GetFriendsInterface)(EOS_HPlatform Handle);

extern EOS_HKWS (*__on_EOS_Platform_GetKWSInterface)(EOS_HPlatform Handle);

extern EOS_HLeaderboards (*__on_EOS_Platform_GetLeaderboardsInterface)(EOS_HPlatform Handle);

extern EOS_HLobby (*__on_EOS_Platform_GetLobbyInterface)(EOS_HPlatform Handle);

extern EOS_HMetrics (*__on_EOS_Platform_GetMetricsInterface)(EOS_HPlatform Handle);

extern EOS_HMods (*__on_EOS_Platform_GetModsInterface)(EOS_HPlatform Handle);

extern EOS_EResult (*__on_EOS_Platform_GetOverrideCountryCode)(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_EResult (*__on_EOS_Platform_GetOverrideLocaleCode)(EOS_HPlatform Handle, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_HP2P (*__on_EOS_Platform_GetP2PInterface)(EOS_HPlatform Handle);

extern EOS_HPlayerDataStorage (*__on_EOS_Platform_GetPlayerDataStorageInterface)(EOS_HPlatform Handle);

extern EOS_HPresence (*__on_EOS_Platform_GetPresenceInterface)(EOS_HPlatform Handle);

extern EOS_HRTCAdmin (*__on_EOS_Platform_GetRTCAdminInterface)(EOS_HPlatform Handle);

extern EOS_HRTC (*__on_EOS_Platform_GetRTCInterface)(EOS_HPlatform Handle);

extern EOS_HReports (*__on_EOS_Platform_GetReportsInterface)(EOS_HPlatform Handle);

extern EOS_HSanctions (*__on_EOS_Platform_GetSanctionsInterface)(EOS_HPlatform Handle);

extern EOS_HSessions (*__on_EOS_Platform_GetSessionsInterface)(EOS_HPlatform Handle);

extern EOS_HStats (*__on_EOS_Platform_GetStatsInterface)(EOS_HPlatform Handle);

extern EOS_HTitleStorage (*__on_EOS_Platform_GetTitleStorageInterface)(EOS_HPlatform Handle);

extern EOS_HUI (*__on_EOS_Platform_GetUIInterface)(EOS_HPlatform Handle);

extern EOS_HUserInfo (*__on_EOS_Platform_GetUserInfoInterface)(EOS_HPlatform Handle);

extern void (*__on_EOS_Platform_Release)(EOS_HPlatform Handle);

extern EOS_EResult (*__on_EOS_Platform_SetOverrideCountryCode)(EOS_HPlatform Handle, const char *NewCountryCode);

extern EOS_EResult (*__on_EOS_Platform_SetOverrideLocaleCode)(EOS_HPlatform Handle, const char *NewLocaleCode);

extern void (*__on_EOS_Platform_Tick)(EOS_HPlatform Handle);

extern EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_CancelRequest)(EOS_HPlayerDataStorageFileTransferRequest Handle);

extern EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_GetFileRequestState)(EOS_HPlayerDataStorageFileTransferRequest Handle);

extern EOS_EResult (*__on_EOS_PlayerDataStorageFileTransferRequest_GetFilename)(EOS_HPlayerDataStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength);

extern void (*__on_EOS_PlayerDataStorageFileTransferRequest_Release)(EOS_HPlayerDataStorageFileTransferRequest PlayerDataStorageFileTransferHandle);

extern EOS_EResult (*__on_EOS_PlayerDataStorage_CopyFileMetadataAtIndex)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataAtIndexOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata);

extern EOS_EResult (*__on_EOS_PlayerDataStorage_CopyFileMetadataByFilename)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_CopyFileMetadataByFilenameOptions *CopyFileMetadataOptions, EOS_PlayerDataStorage_FileMetadata **OutMetadata);

extern EOS_EResult (*__on_EOS_PlayerDataStorage_DeleteCache)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_PlayerDataStorage_OnDeleteCacheCompleteCallback CompletionCallback);

extern void (*__on_EOS_PlayerDataStorage_DeleteFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DeleteFileOptions *DeleteOptions, void *ClientData, const EOS_PlayerDataStorage_OnDeleteFileCompleteCallback CompletionCallback);

extern void (*__on_EOS_PlayerDataStorage_DuplicateFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_DuplicateFileOptions *DuplicateOptions, void *ClientData, const EOS_PlayerDataStorage_OnDuplicateFileCompleteCallback CompletionCallback);

extern void (*__on_EOS_PlayerDataStorage_FileMetadata_Release)(EOS_PlayerDataStorage_FileMetadata *FileMetadata);

extern EOS_EResult (*__on_EOS_PlayerDataStorage_GetFileMetadataCount)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_GetFileMetadataCountOptions *GetFileMetadataCountOptions, int32_t *OutFileMetadataCount);

extern void (*__on_EOS_PlayerDataStorage_QueryFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileOptions *QueryFileOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileCompleteCallback CompletionCallback);

extern void (*__on_EOS_PlayerDataStorage_QueryFileList)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_QueryFileListOptions *QueryFileListOptions, void *ClientData, const EOS_PlayerDataStorage_OnQueryFileListCompleteCallback CompletionCallback);

extern EOS_HPlayerDataStorageFileTransferRequest (*__on_EOS_PlayerDataStorage_ReadFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_ReadFileOptions *ReadOptions, void *ClientData, const EOS_PlayerDataStorage_OnReadFileCompleteCallback CompletionCallback);

extern EOS_HPlayerDataStorageFileTransferRequest (*__on_EOS_PlayerDataStorage_WriteFile)(EOS_HPlayerDataStorage Handle, const EOS_PlayerDataStorage_WriteFileOptions *WriteOptions, void *ClientData, const EOS_PlayerDataStorage_OnWriteFileCompleteCallback CompletionCallback);

extern EOS_EResult (*__on_EOS_PresenceModification_DeleteData)(EOS_HPresenceModification Handle, const EOS_PresenceModification_DeleteDataOptions *Options);

extern void (*__on_EOS_PresenceModification_Release)(EOS_HPresenceModification PresenceModificationHandle);

extern EOS_EResult (*__on_EOS_PresenceModification_SetData)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetDataOptions *Options);

extern EOS_EResult (*__on_EOS_PresenceModification_SetJoinInfo)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetJoinInfoOptions *Options);

extern EOS_EResult (*__on_EOS_PresenceModification_SetRawRichText)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetRawRichTextOptions *Options);

extern EOS_EResult (*__on_EOS_PresenceModification_SetStatus)(EOS_HPresenceModification Handle, const EOS_PresenceModification_SetStatusOptions *Options);

extern EOS_NotificationId (*__on_EOS_Presence_AddNotifyJoinGameAccepted)(EOS_HPresence Handle, const EOS_Presence_AddNotifyJoinGameAcceptedOptions *Options, void *ClientData, const EOS_Presence_OnJoinGameAcceptedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Presence_AddNotifyOnPresenceChanged)(EOS_HPresence Handle, const EOS_Presence_AddNotifyOnPresenceChangedOptions *Options, void *ClientData, const EOS_Presence_OnPresenceChangedCallback NotificationHandler);

extern EOS_EResult (*__on_EOS_Presence_CopyPresence)(EOS_HPresence Handle, const EOS_Presence_CopyPresenceOptions *Options, EOS_Presence_Info **OutPresence);

extern EOS_EResult (*__on_EOS_Presence_CreatePresenceModification)(EOS_HPresence Handle, const EOS_Presence_CreatePresenceModificationOptions *Options, EOS_HPresenceModification *OutPresenceModificationHandle);

extern EOS_EResult (*__on_EOS_Presence_GetJoinInfo)(EOS_HPresence Handle, const EOS_Presence_GetJoinInfoOptions *Options, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_Bool (*__on_EOS_Presence_HasPresence)(EOS_HPresence Handle, const EOS_Presence_HasPresenceOptions *Options);

extern void (*__on_EOS_Presence_Info_Release)(EOS_Presence_Info *PresenceInfo);

extern void (*__on_EOS_Presence_QueryPresence)(EOS_HPresence Handle, const EOS_Presence_QueryPresenceOptions *Options, void *ClientData, const EOS_Presence_OnQueryPresenceCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Presence_RemoveNotifyJoinGameAccepted)(EOS_HPresence Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Presence_RemoveNotifyOnPresenceChanged)(EOS_HPresence Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_Presence_SetPresence)(EOS_HPresence Handle, const EOS_Presence_SetPresenceOptions *Options, void *ClientData, const EOS_Presence_SetPresenceCompleteCallback CompletionDelegate);

extern EOS_ProductUserId (*__on_EOS_ProductUserId_FromString)(const char *ProductUserIdString);

extern EOS_Bool (*__on_EOS_ProductUserId_IsValid)(EOS_ProductUserId AccountId);

extern EOS_EResult (*__on_EOS_ProductUserId_ToString)(EOS_ProductUserId AccountId, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_EResult (*__on_EOS_RTCAdmin_CopyUserTokenByIndex)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByIndexOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken);

extern EOS_EResult (*__on_EOS_RTCAdmin_CopyUserTokenByUserId)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_CopyUserTokenByUserIdOptions *Options, EOS_RTCAdmin_UserToken **OutUserToken);

extern void (*__on_EOS_RTCAdmin_Kick)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_KickOptions *Options, void *ClientData, const EOS_RTCAdmin_OnKickCompleteCallback CompletionDelegate);

extern void (*__on_EOS_RTCAdmin_QueryJoinRoomToken)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_QueryJoinRoomTokenOptions *Options, void *ClientData, const EOS_RTCAdmin_OnQueryJoinRoomTokenCompleteCallback CompletionDelegate);

extern void (*__on_EOS_RTCAdmin_SetParticipantHardMute)(EOS_HRTCAdmin Handle, const EOS_RTCAdmin_SetParticipantHardMuteOptions *Options, void *ClientData, const EOS_RTCAdmin_OnSetParticipantHardMuteCompleteCallback CompletionDelegate);

extern void (*__on_EOS_RTCAdmin_UserToken_Release)(EOS_RTCAdmin_UserToken *UserToken);

extern EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioBeforeRender)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeRenderOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeRenderCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioBeforeSend)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioBeforeSendOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioBeforeSendCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioDevicesChanged)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioDevicesChangedOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioDevicesChangedCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioInputState)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioInputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioInputStateCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyAudioOutputState)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyAudioOutputStateOptions *Options, void *ClientData, const EOS_RTCAudio_OnAudioOutputStateCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTCAudio_AddNotifyParticipantUpdated)(EOS_HRTCAudio Handle, EOS_RTCAudio_AddNotifyParticipantUpdatedOptions *Options, void *ClientData, const EOS_RTCAudio_OnParticipantUpdatedCallback CompletionDelegate);

extern const EOS_RTCAudio_AudioInputDeviceInfo *(*__on_EOS_RTCAudio_GetAudioInputDeviceByIndex)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDeviceByIndexOptions *Options);

extern uint32_t (*__on_EOS_RTCAudio_GetAudioInputDevicesCount)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioInputDevicesCountOptions *Options);

extern const EOS_RTCAudio_AudioOutputDeviceInfo *(*__on_EOS_RTCAudio_GetAudioOutputDeviceByIndex)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDeviceByIndexOptions *Options);

extern uint32_t (*__on_EOS_RTCAudio_GetAudioOutputDevicesCount)(EOS_HRTCAudio Handle, const EOS_RTCAudio_GetAudioOutputDevicesCountOptions *Options);

extern EOS_EResult (*__on_EOS_RTCAudio_RegisterPlatformAudioUser)(EOS_HRTCAudio Handle, const EOS_RTCAudio_RegisterPlatformAudioUserOptions *Options);

extern void (*__on_EOS_RTCAudio_RemoveNotifyAudioBeforeRender)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_RTCAudio_RemoveNotifyAudioBeforeSend)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_RTCAudio_RemoveNotifyAudioDevicesChanged)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_RTCAudio_RemoveNotifyAudioInputState)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_RTCAudio_RemoveNotifyAudioOutputState)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_RTCAudio_RemoveNotifyParticipantUpdated)(EOS_HRTCAudio Handle, EOS_NotificationId NotificationId);

extern EOS_EResult (*__on_EOS_RTCAudio_SendAudio)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SendAudioOptions *Options);

extern EOS_EResult (*__on_EOS_RTCAudio_SetAudioInputSettings)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioInputSettingsOptions *Options);

extern EOS_EResult (*__on_EOS_RTCAudio_SetAudioOutputSettings)(EOS_HRTCAudio Handle, const EOS_RTCAudio_SetAudioOutputSettingsOptions *Options);

extern EOS_EResult (*__on_EOS_RTCAudio_UnregisterPlatformAudioUser)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UnregisterPlatformAudioUserOptions *Options);

extern void (*__on_EOS_RTCAudio_UpdateReceiving)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateReceivingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateReceivingCallback CompletionDelegate);

extern void (*__on_EOS_RTCAudio_UpdateSending)(EOS_HRTCAudio Handle, const EOS_RTCAudio_UpdateSendingOptions *Options, void *ClientData, const EOS_RTCAudio_OnUpdateSendingCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTC_AddNotifyDisconnected)(EOS_HRTC Handle, EOS_RTC_AddNotifyDisconnectedOptions *Options, void *ClientData, const EOS_RTC_OnDisconnectedCallback CompletionDelegate);

extern EOS_NotificationId (*__on_EOS_RTC_AddNotifyParticipantStatusChanged)(EOS_HRTC Handle, EOS_RTC_AddNotifyParticipantStatusChangedOptions *Options, void *ClientData, const EOS_RTC_OnParticipantStatusChangedCallback CompletionDelegate);

extern void (*__on_EOS_RTC_BlockParticipant)(EOS_HRTC Handle, EOS_RTC_BlockParticipantOptions *Options, void *ClientData, const EOS_RTC_OnBlockParticipantCallback CompletionDelegate);

extern EOS_HRTCAudio (*__on_EOS_RTC_GetAudioInterface)(EOS_HRTC Handle);

extern void (*__on_EOS_RTC_JoinRoom)(EOS_HRTC Handle, const EOS_RTC_JoinRoomOptions *Options, void *ClientData, const EOS_RTC_OnJoinRoomCallback CompletionDelegate);

extern void (*__on_EOS_RTC_LeaveRoom)(EOS_HRTC Handle, const EOS_RTC_LeaveRoomOptions *Options, void *ClientData, const EOS_RTC_OnLeaveRoomCallback CompletionDelegate);

extern void (*__on_EOS_RTC_RemoveNotifyDisconnected)(EOS_HRTC Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_RTC_RemoveNotifyParticipantStatusChanged)(EOS_HRTC Handle, EOS_NotificationId NotificationId);

extern void (*__on_EOS_Reports_SendPlayerBehaviorReport)(EOS_HReports Handle, const EOS_Reports_SendPlayerBehaviorReportOptions *Options, void *ClientData, const EOS_Reports_OnSendPlayerBehaviorReportCompleteCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Sanctions_CopyPlayerSanctionByIndex)(EOS_HSanctions Handle, const EOS_Sanctions_CopyPlayerSanctionByIndexOptions *Options, EOS_Sanctions_PlayerSanction **OutSanction);

extern uint32_t (*__on_EOS_Sanctions_GetPlayerSanctionCount)(EOS_HSanctions Handle, const EOS_Sanctions_GetPlayerSanctionCountOptions *Options);

extern void (*__on_EOS_Sanctions_PlayerSanction_Release)(EOS_Sanctions_PlayerSanction *Sanction);

extern void (*__on_EOS_Sanctions_QueryActivePlayerSanctions)(EOS_HSanctions Handle, const EOS_Sanctions_QueryActivePlayerSanctionsOptions *Options, void *ClientData, const EOS_Sanctions_OnQueryActivePlayerSanctionsCallback CompletionDelegate);

extern void (*__on_EOS_SessionDetails_Attribute_Release)(EOS_SessionDetails_Attribute *SessionAttribute);

extern EOS_EResult (*__on_EOS_SessionDetails_CopyInfo)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopyInfoOptions *Options, EOS_SessionDetails_Info **OutSessionInfo);

extern EOS_EResult (*__on_EOS_SessionDetails_CopySessionAttributeByIndex)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByIndexOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute);

extern EOS_EResult (*__on_EOS_SessionDetails_CopySessionAttributeByKey)(EOS_HSessionDetails Handle, const EOS_SessionDetails_CopySessionAttributeByKeyOptions *Options, EOS_SessionDetails_Attribute **OutSessionAttribute);

extern uint32_t (*__on_EOS_SessionDetails_GetSessionAttributeCount)(EOS_HSessionDetails Handle, const EOS_SessionDetails_GetSessionAttributeCountOptions *Options);

extern void (*__on_EOS_SessionDetails_Info_Release)(EOS_SessionDetails_Info *SessionInfo);

extern void (*__on_EOS_SessionDetails_Release)(EOS_HSessionDetails SessionHandle);

extern EOS_EResult (*__on_EOS_SessionModification_AddAttribute)(EOS_HSessionModification Handle, const EOS_SessionModification_AddAttributeOptions *Options);

extern void (*__on_EOS_SessionModification_Release)(EOS_HSessionModification SessionModificationHandle);

extern EOS_EResult (*__on_EOS_SessionModification_RemoveAttribute)(EOS_HSessionModification Handle, const EOS_SessionModification_RemoveAttributeOptions *Options);

extern EOS_EResult (*__on_EOS_SessionModification_SetBucketId)(EOS_HSessionModification Handle, const EOS_SessionModification_SetBucketIdOptions *Options);

extern EOS_EResult (*__on_EOS_SessionModification_SetHostAddress)(EOS_HSessionModification Handle, const EOS_SessionModification_SetHostAddressOptions *Options);

extern EOS_EResult (*__on_EOS_SessionModification_SetInvitesAllowed)(EOS_HSessionModification Handle, const EOS_SessionModification_SetInvitesAllowedOptions *Options);

extern EOS_EResult (*__on_EOS_SessionModification_SetJoinInProgressAllowed)(EOS_HSessionModification Handle, const EOS_SessionModification_SetJoinInProgressAllowedOptions *Options);

extern EOS_EResult (*__on_EOS_SessionModification_SetMaxPlayers)(EOS_HSessionModification Handle, const EOS_SessionModification_SetMaxPlayersOptions *Options);

extern EOS_EResult (*__on_EOS_SessionModification_SetPermissionLevel)(EOS_HSessionModification Handle, const EOS_SessionModification_SetPermissionLevelOptions *Options);

extern EOS_EResult (*__on_EOS_SessionSearch_CopySearchResultByIndex)(EOS_HSessionSearch Handle, const EOS_SessionSearch_CopySearchResultByIndexOptions *Options, EOS_HSessionDetails *OutSessionHandle);

extern void (*__on_EOS_SessionSearch_Find)(EOS_HSessionSearch Handle, const EOS_SessionSearch_FindOptions *Options, void *ClientData, const EOS_SessionSearch_OnFindCallback CompletionDelegate);

extern uint32_t (*__on_EOS_SessionSearch_GetSearchResultCount)(EOS_HSessionSearch Handle, const EOS_SessionSearch_GetSearchResultCountOptions *Options);

extern void (*__on_EOS_SessionSearch_Release)(EOS_HSessionSearch SessionSearchHandle);

extern EOS_EResult (*__on_EOS_SessionSearch_RemoveParameter)(EOS_HSessionSearch Handle, const EOS_SessionSearch_RemoveParameterOptions *Options);

extern EOS_EResult (*__on_EOS_SessionSearch_SetMaxResults)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetMaxResultsOptions *Options);

extern EOS_EResult (*__on_EOS_SessionSearch_SetParameter)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetParameterOptions *Options);

extern EOS_EResult (*__on_EOS_SessionSearch_SetSessionId)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetSessionIdOptions *Options);

extern EOS_EResult (*__on_EOS_SessionSearch_SetTargetUserId)(EOS_HSessionSearch Handle, const EOS_SessionSearch_SetTargetUserIdOptions *Options);

extern EOS_NotificationId (*__on_EOS_Sessions_AddNotifyJoinSessionAccepted)(EOS_HSessions Handle, const EOS_Sessions_AddNotifyJoinSessionAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionAcceptedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Sessions_AddNotifySessionInviteAccepted)(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteAcceptedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteAcceptedCallback NotificationFn);

extern EOS_NotificationId (*__on_EOS_Sessions_AddNotifySessionInviteReceived)(EOS_HSessions Handle, const EOS_Sessions_AddNotifySessionInviteReceivedOptions *Options, void *ClientData, const EOS_Sessions_OnSessionInviteReceivedCallback NotificationFn);

extern EOS_EResult (*__on_EOS_Sessions_CopyActiveSessionHandle)(EOS_HSessions Handle, const EOS_Sessions_CopyActiveSessionHandleOptions *Options, EOS_HActiveSession *OutSessionHandle);

extern EOS_EResult (*__on_EOS_Sessions_CopySessionHandleByInviteId)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByInviteIdOptions *Options, EOS_HSessionDetails *OutSessionHandle);

extern EOS_EResult (*__on_EOS_Sessions_CopySessionHandleByUiEventId)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleByUiEventIdOptions *Options, EOS_HSessionDetails *OutSessionHandle);

extern EOS_EResult (*__on_EOS_Sessions_CopySessionHandleForPresence)(EOS_HSessions Handle, const EOS_Sessions_CopySessionHandleForPresenceOptions *Options, EOS_HSessionDetails *OutSessionHandle);

extern EOS_EResult (*__on_EOS_Sessions_CreateSessionModification)(EOS_HSessions Handle, const EOS_Sessions_CreateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle);

extern EOS_EResult (*__on_EOS_Sessions_CreateSessionSearch)(EOS_HSessions Handle, const EOS_Sessions_CreateSessionSearchOptions *Options, EOS_HSessionSearch *OutSessionSearchHandle);

extern void (*__on_EOS_Sessions_DestroySession)(EOS_HSessions Handle, const EOS_Sessions_DestroySessionOptions *Options, void *ClientData, const EOS_Sessions_OnDestroySessionCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Sessions_DumpSessionState)(EOS_HSessions Handle, const EOS_Sessions_DumpSessionStateOptions *Options);

extern void (*__on_EOS_Sessions_EndSession)(EOS_HSessions Handle, const EOS_Sessions_EndSessionOptions *Options, void *ClientData, const EOS_Sessions_OnEndSessionCallback CompletionDelegate);

extern uint32_t (*__on_EOS_Sessions_GetInviteCount)(EOS_HSessions Handle, const EOS_Sessions_GetInviteCountOptions *Options);

extern EOS_EResult (*__on_EOS_Sessions_GetInviteIdByIndex)(EOS_HSessions Handle, const EOS_Sessions_GetInviteIdByIndexOptions *Options, char *OutBuffer, int32_t *InOutBufferLength);

extern EOS_EResult (*__on_EOS_Sessions_IsUserInSession)(EOS_HSessions Handle, const EOS_Sessions_IsUserInSessionOptions *Options);

extern void (*__on_EOS_Sessions_JoinSession)(EOS_HSessions Handle, const EOS_Sessions_JoinSessionOptions *Options, void *ClientData, const EOS_Sessions_OnJoinSessionCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_QueryInvites)(EOS_HSessions Handle, const EOS_Sessions_QueryInvitesOptions *Options, void *ClientData, const EOS_Sessions_OnQueryInvitesCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_RegisterPlayers)(EOS_HSessions Handle, const EOS_Sessions_RegisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnRegisterPlayersCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_RejectInvite)(EOS_HSessions Handle, const EOS_Sessions_RejectInviteOptions *Options, void *ClientData, const EOS_Sessions_OnRejectInviteCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_RemoveNotifyJoinSessionAccepted)(EOS_HSessions Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Sessions_RemoveNotifySessionInviteAccepted)(EOS_HSessions Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Sessions_RemoveNotifySessionInviteReceived)(EOS_HSessions Handle, EOS_NotificationId InId);

extern void (*__on_EOS_Sessions_SendInvite)(EOS_HSessions Handle, const EOS_Sessions_SendInviteOptions *Options, void *ClientData, const EOS_Sessions_OnSendInviteCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_StartSession)(EOS_HSessions Handle, const EOS_Sessions_StartSessionOptions *Options, void *ClientData, const EOS_Sessions_OnStartSessionCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_UnregisterPlayers)(EOS_HSessions Handle, const EOS_Sessions_UnregisterPlayersOptions *Options, void *ClientData, const EOS_Sessions_OnUnregisterPlayersCallback CompletionDelegate);

extern void (*__on_EOS_Sessions_UpdateSession)(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionOptions *Options, void *ClientData, const EOS_Sessions_OnUpdateSessionCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_Sessions_UpdateSessionModification)(EOS_HSessions Handle, const EOS_Sessions_UpdateSessionModificationOptions *Options, EOS_HSessionModification *OutSessionModificationHandle);

extern EOS_EResult (*__on_EOS_Shutdown)();

extern EOS_EResult (*__on_EOS_Stats_CopyStatByIndex)(EOS_HStats Handle, const EOS_Stats_CopyStatByIndexOptions *Options, EOS_Stats_Stat **OutStat);

extern EOS_EResult (*__on_EOS_Stats_CopyStatByName)(EOS_HStats Handle, const EOS_Stats_CopyStatByNameOptions *Options, EOS_Stats_Stat **OutStat);

extern uint32_t (*__on_EOS_Stats_GetStatsCount)(EOS_HStats Handle, const EOS_Stats_GetStatCountOptions *Options);

extern void (*__on_EOS_Stats_IngestStat)(EOS_HStats Handle, const EOS_Stats_IngestStatOptions *Options, void *ClientData, const EOS_Stats_OnIngestStatCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Stats_QueryStats)(EOS_HStats Handle, const EOS_Stats_QueryStatsOptions *Options, void *ClientData, const EOS_Stats_OnQueryStatsCompleteCallback CompletionDelegate);

extern void (*__on_EOS_Stats_Stat_Release)(EOS_Stats_Stat *Stat);

extern EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_CancelRequest)(EOS_HTitleStorageFileTransferRequest Handle);

extern EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_GetFileRequestState)(EOS_HTitleStorageFileTransferRequest Handle);

extern EOS_EResult (*__on_EOS_TitleStorageFileTransferRequest_GetFilename)(EOS_HTitleStorageFileTransferRequest Handle, uint32_t FilenameStringBufferSizeBytes, char *OutStringBuffer, int32_t *OutStringLength);

extern void (*__on_EOS_TitleStorageFileTransferRequest_Release)(EOS_HTitleStorageFileTransferRequest TitleStorageFileTransferHandle);

extern EOS_EResult (*__on_EOS_TitleStorage_CopyFileMetadataAtIndex)(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataAtIndexOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata);

extern EOS_EResult (*__on_EOS_TitleStorage_CopyFileMetadataByFilename)(EOS_HTitleStorage Handle, const EOS_TitleStorage_CopyFileMetadataByFilenameOptions *Options, EOS_TitleStorage_FileMetadata **OutMetadata);

extern EOS_EResult (*__on_EOS_TitleStorage_DeleteCache)(EOS_HTitleStorage Handle, const EOS_TitleStorage_DeleteCacheOptions *Options, void *ClientData, const EOS_TitleStorage_OnDeleteCacheCompleteCallback CompletionCallback);

extern void (*__on_EOS_TitleStorage_FileMetadata_Release)(EOS_TitleStorage_FileMetadata *FileMetadata);

extern uint32_t (*__on_EOS_TitleStorage_GetFileMetadataCount)(EOS_HTitleStorage Handle, const EOS_TitleStorage_GetFileMetadataCountOptions *Options);

extern void (*__on_EOS_TitleStorage_QueryFile)(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileCompleteCallback CompletionCallback);

extern void (*__on_EOS_TitleStorage_QueryFileList)(EOS_HTitleStorage Handle, const EOS_TitleStorage_QueryFileListOptions *Options, void *ClientData, const EOS_TitleStorage_OnQueryFileListCompleteCallback CompletionCallback);

extern EOS_HTitleStorageFileTransferRequest (*__on_EOS_TitleStorage_ReadFile)(EOS_HTitleStorage Handle, const EOS_TitleStorage_ReadFileOptions *Options, void *ClientData, const EOS_TitleStorage_OnReadFileCompleteCallback CompletionCallback);

extern EOS_EResult (*__on_EOS_UI_AcknowledgeEventId)(EOS_HUI Handle, const EOS_UI_AcknowledgeEventIdOptions *Options);

extern EOS_NotificationId (*__on_EOS_UI_AddNotifyDisplaySettingsUpdated)(EOS_HUI Handle, const EOS_UI_AddNotifyDisplaySettingsUpdatedOptions *Options, void *ClientData, const EOS_UI_OnDisplaySettingsUpdatedCallback NotificationFn);

extern EOS_Bool (*__on_EOS_UI_GetFriendsVisible)(EOS_HUI Handle, const EOS_UI_GetFriendsVisibleOptions *Options);

extern EOS_UI_ENotificationLocation (*__on_EOS_UI_GetNotificationLocationPreference)(EOS_HUI Handle);

extern EOS_UI_EKeyCombination (*__on_EOS_UI_GetToggleFriendsKey)(EOS_HUI Handle, const EOS_UI_GetToggleFriendsKeyOptions *Options);

extern void (*__on_EOS_UI_HideFriends)(EOS_HUI Handle, const EOS_UI_HideFriendsOptions *Options, void *ClientData, const EOS_UI_OnHideFriendsCallback CompletionDelegate);

extern EOS_Bool (*__on_EOS_UI_IsValidKeyCombination)(EOS_HUI Handle, EOS_UI_EKeyCombination KeyCombination);

extern void (*__on_EOS_UI_RemoveNotifyDisplaySettingsUpdated)(EOS_HUI Handle, EOS_NotificationId Id);

extern EOS_EResult (*__on_EOS_UI_SetDisplayPreference)(EOS_HUI Handle, const EOS_UI_SetDisplayPreferenceOptions *Options);

extern EOS_EResult (*__on_EOS_UI_SetToggleFriendsKey)(EOS_HUI Handle, const EOS_UI_SetToggleFriendsKeyOptions *Options);

extern void (*__on_EOS_UI_ShowFriends)(EOS_HUI Handle, const EOS_UI_ShowFriendsOptions *Options, void *ClientData, const EOS_UI_OnShowFriendsCallback CompletionDelegate);

extern EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByAccountId)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountIdOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo);

extern EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByAccountType)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByAccountTypeOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo);

extern EOS_EResult (*__on_EOS_UserInfo_CopyExternalUserInfoByIndex)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyExternalUserInfoByIndexOptions *Options, EOS_UserInfo_ExternalUserInfo **OutExternalUserInfo);

extern EOS_EResult (*__on_EOS_UserInfo_CopyUserInfo)(EOS_HUserInfo Handle, const EOS_UserInfo_CopyUserInfoOptions *Options, EOS_UserInfo **OutUserInfo);

extern void (*__on_EOS_UserInfo_ExternalUserInfo_Release)(EOS_UserInfo_ExternalUserInfo *ExternalUserInfo);

extern uint32_t (*__on_EOS_UserInfo_GetExternalUserInfoCount)(EOS_HUserInfo Handle, const EOS_UserInfo_GetExternalUserInfoCountOptions *Options);

extern void (*__on_EOS_UserInfo_QueryUserInfo)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoCallback CompletionDelegate);

extern void (*__on_EOS_UserInfo_QueryUserInfoByDisplayName)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByDisplayNameOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByDisplayNameCallback CompletionDelegate);

extern void (*__on_EOS_UserInfo_QueryUserInfoByExternalAccount)(EOS_HUserInfo Handle, const EOS_UserInfo_QueryUserInfoByExternalAccountOptions *Options, void *ClientData, const EOS_UserInfo_OnQueryUserInfoByExternalAccountCallback CompletionDelegate);

extern void (*__on_EOS_UserInfo_Release)(EOS_UserInfo *UserInfo);

