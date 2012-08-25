/*
   Name    : PlayerbotPaladinAI.cpp
   Complete: maybe around 27% :D
   Author  : Natsukawa
   Version : 0.35
 */

#include "PlayerbotPaladinAI.h"
#include "PlayerbotMgr.h"
#include "../SpellAuras.h"

class PlayerbotAI;

PlayerbotPaladinAI::PlayerbotPaladinAI(Player* const master, Player* const bot, PlayerbotAI* const ai) : PlayerbotClassAI(master, bot, ai)
{
    RETRIBUTION_AURA              = m_ai->initSpell(RETRIBUTION_AURA_1);
    CRUSADER_AURA                 = m_ai->initSpell(CRUSADER_AURA_1);
    CRUSADER_STRIKE               = m_ai->initSpell(CRUSADER_STRIKE_1);
    SEAL_OF_COMMAND               = m_ai->initSpell(SEAL_OF_COMMAND_1);
    SEAL_OF_RIGHTEOUSNESS         = m_ai->initSpell(SEAL_OF_RIGHTEOUSNESS_1);
    SEAL_OF_CORRUPTION            = m_ai->initSpell(SEAL_OF_CORRUPTION_1);
    SEAL_OF_JUSTICE               = m_ai->initSpell(SEAL_OF_JUSTICE_1);
    SEAL_OF_LIGHT                 = m_ai->initSpell(SEAL_OF_LIGHT_1);
    SEAL_OF_VENGEANCE             = m_ai->initSpell(SEAL_OF_VENGEANCE_1);
    SEAL_OF_WISDOM                = m_ai->initSpell(SEAL_OF_WISDOM_1);
    JUDGEMENT_OF_LIGHT            = m_ai->initSpell(JUDGEMENT_OF_LIGHT_1);
    JUDGEMENT_OF_WISDOM           = m_ai->initSpell(JUDGEMENT_OF_WISDOM_1);
    JUDGEMENT_OF_JUSTICE          = m_ai->initSpell(JUDGEMENT_OF_JUSTICE_1);
    DIVINE_STORM                  = m_ai->initSpell(DIVINE_STORM_1);
    BLESSING_OF_MIGHT             = m_ai->initSpell(BLESSING_OF_MIGHT_1);
    GREATER_BLESSING_OF_MIGHT     = m_ai->initSpell(GREATER_BLESSING_OF_MIGHT_1);
    HAMMER_OF_WRATH               = m_ai->initSpell(HAMMER_OF_WRATH_1);
    FLASH_OF_LIGHT                = m_ai->initSpell(FLASH_OF_LIGHT_1); // Holy
    HOLY_LIGHT                    = m_ai->initSpell(HOLY_LIGHT_1);
    HOLY_SHOCK                    = m_ai->initSpell(HOLY_SHOCK_1);
    HOLY_WRATH                    = m_ai->initSpell(HOLY_WRATH_1);
    DIVINE_FAVOR                  = m_ai->initSpell(DIVINE_FAVOR_1);
    CONCENTRATION_AURA            = m_ai->initSpell(CONCENTRATION_AURA_1);
    BLESSING_OF_WISDOM            = m_ai->initSpell(BLESSING_OF_WISDOM_1);
    GREATER_BLESSING_OF_WISDOM    = m_ai->initSpell(GREATER_BLESSING_OF_WISDOM_1);
    CONSECRATION                  = m_ai->initSpell(CONSECRATION_1);
    AVENGING_WRATH                = m_ai->initSpell(AVENGING_WRATH_1);
    LAY_ON_HANDS                  = m_ai->initSpell(LAY_ON_HANDS_1);
    EXORCISM                      = m_ai->initSpell(EXORCISM_1);
    SACRED_SHIELD                 = m_ai->initSpell(SACRED_SHIELD_1);
    DIVINE_PLEA                   = m_ai->initSpell(DIVINE_PLEA_1);
    BLESSING_OF_KINGS             = m_ai->initSpell(BLESSING_OF_KINGS_1);
    GREATER_BLESSING_OF_KINGS     = m_ai->initSpell(GREATER_BLESSING_OF_KINGS_1);
    BLESSING_OF_SANCTUARY         = m_ai->initSpell(BLESSING_OF_SANCTUARY_1);
    GREATER_BLESSING_OF_SANCTUARY = m_ai->initSpell(GREATER_BLESSING_OF_SANCTUARY_1);
    HAMMER_OF_JUSTICE             = m_ai->initSpell(HAMMER_OF_JUSTICE_1);
    RIGHTEOUS_FURY                = m_ai->initSpell(RIGHTEOUS_FURY_1);
    RIGHTEOUS_DEFENSE             = m_ai->initSpell(RIGHTEOUS_DEFENSE_1);
    SHADOW_RESISTANCE_AURA        = m_ai->initSpell(SHADOW_RESISTANCE_AURA_1);
    DEVOTION_AURA                 = m_ai->initSpell(DEVOTION_AURA_1);
    FIRE_RESISTANCE_AURA          = m_ai->initSpell(FIRE_RESISTANCE_AURA_1);
    FROST_RESISTANCE_AURA         = m_ai->initSpell(FROST_RESISTANCE_AURA_1);
    HAND_OF_PROTECTION            = m_ai->initSpell(HAND_OF_PROTECTION_1);
    DIVINE_PROTECTION             = m_ai->initSpell(DIVINE_PROTECTION_1);
    DIVINE_INTERVENTION           = m_ai->initSpell(DIVINE_INTERVENTION_1);
    DIVINE_SACRIFICE              = m_ai->initSpell(DIVINE_SACRIFICE_1);
    DIVINE_SHIELD                 = m_ai->initSpell(DIVINE_SHIELD_1);
    HOLY_SHIELD                   = m_ai->initSpell(HOLY_SHIELD_1);
    AVENGERS_SHIELD               = m_ai->initSpell(AVENGERS_SHIELD_1);
    HAND_OF_SACRIFICE             = m_ai->initSpell(HAND_OF_SACRIFICE_1);
    SHIELD_OF_RIGHTEOUSNESS       = m_ai->initSpell(SHIELD_OF_RIGHTEOUSNESS_1);
    REDEMPTION                    = m_ai->initSpell(REDEMPTION_1);
    PURIFY                        = m_ai->initSpell(PURIFY_1);
    CLEANSE                       = m_ai->initSpell(CLEANSE_1);
    HAND_OF_RECKONING             = m_ai->initSpell(HAND_OF_RECKONING_1);
    ART_OF_WAR                    = m_ai->initSpell(ART_OF_WAR_1);
    HAMMER_OF_THE_RIGHTEOUS       = m_ai->initSpell(HAMMER_OF_THE_RIGHTEOUS_1);

    // Warrior auras
    DEFENSIVE_STANCE              = 71;   //Def Stance
    BERSERKER_STANCE              = 2458; //Ber Stance
    BATTLE_STANCE                 = 2457; //Bat Stance

    FORBEARANCE                   = 25771; // cannot be protected

    RECENTLY_BANDAGED             = 11196; // first aid check

    // racial
    ARCANE_TORRENT                = m_ai->initSpell(ARCANE_TORRENT_MANA_CLASSES);
    GIFT_OF_THE_NAARU             = m_ai->initSpell(GIFT_OF_THE_NAARU_PALADIN); // draenei
    STONEFORM                     = m_ai->initSpell(STONEFORM_ALL); // dwarf
    EVERY_MAN_FOR_HIMSELF         = m_ai->initSpell(EVERY_MAN_FOR_HIMSELF_ALL); // human

    //The check doesn't work for now
    //PRAYER_OF_SHADOW_PROTECTION   = m_ai->initSpell(PriestSpells::PRAYER_OF_SHADOW_PROTECTION_1);
}

PlayerbotPaladinAI::~PlayerbotPaladinAI() {}

CombatManeuverReturns PlayerbotPaladinAI::DoFirstCombatManeuver(Unit* pTarget)
{
    switch (m_ai->GetScenarioType())
    {
        case PlayerbotAI::SCENARIO_PVP_DUEL:
        case PlayerbotAI::SCENARIO_PVP_BG:
        case PlayerbotAI::SCENARIO_PVP_ARENA:
        case PlayerbotAI::SCENARIO_PVP_OPENWORLD:
            return DoFirstCombatManeuverPVP(pTarget);
        case PlayerbotAI::SCENARIO_PVE:
        case PlayerbotAI::SCENARIO_PVE_ELITE:
        case PlayerbotAI::SCENARIO_PVE_RAID:
        default:
            return DoFirstCombatManeuverPVE(pTarget);
            break;
    }

    return RETURN_NO_ACTION_ERROR;
}

CombatManeuverReturns PlayerbotPaladinAI::DoFirstCombatManeuverPVE(Unit* /*pTarget*/)
{
    return RETURN_NO_ACTION_OK;
}

CombatManeuverReturns PlayerbotPaladinAI::DoFirstCombatManeuverPVP(Unit* /*pTarget*/)
{
    return RETURN_NO_ACTION_OK;
}

CombatManeuverReturns PlayerbotPaladinAI::DoNextCombatManeuver(Unit *pTarget)
{
    switch (m_ai->GetScenarioType())
    {
        case PlayerbotAI::SCENARIO_PVP_DUEL:
        case PlayerbotAI::SCENARIO_PVP_BG:
        case PlayerbotAI::SCENARIO_PVP_ARENA:
        case PlayerbotAI::SCENARIO_PVP_OPENWORLD:
            return DoNextCombatManeuverPVP(pTarget);
        case PlayerbotAI::SCENARIO_PVE:
        case PlayerbotAI::SCENARIO_PVE_ELITE:
        case PlayerbotAI::SCENARIO_PVE_RAID:
        default:
            return DoNextCombatManeuverPVE(pTarget);
            break;
    }

    return RETURN_NO_ACTION_ERROR;
}

CombatManeuverReturns PlayerbotPaladinAI::DoNextCombatManeuverPVE(Unit *pTarget)
{
    if (!m_ai)  return RETURN_NO_ACTION_ERROR;
    if (!m_bot) return RETURN_NO_ACTION_ERROR;
    if (!pTarget) return RETURN_NO_ACTION_INVALIDTARGET;

    Unit* pVictim = pTarget->getVictim();

    // damage spells
    uint32 spec = m_bot->GetSpec();
    float dist = m_bot->GetCombatDistance(pTarget);
    std::ostringstream out;

    // Make sure healer stays put, don't even melee (aggro) if in range.
    if (m_ai->IsHealer() && m_ai->GetCombatStyle() != PlayerbotAI::COMBAT_RANGED)
        m_ai->SetCombatStyle(PlayerbotAI::COMBAT_RANGED);
    else if (!m_ai->IsHealer() && m_ai->GetCombatStyle() != PlayerbotAI::COMBAT_MELEE)
        m_ai->SetCombatStyle(PlayerbotAI::COMBAT_MELEE);

    // Heal
    if (m_ai->IsHealer())
    {
        if (HealPlayer(GetHealTarget()) & (RETURN_NO_ACTION_OK | RETURN_CONTINUE))
            return RETURN_CONTINUE;
    }
    else
    {
        // Is this desirable? Debatable.
        // TODO: In a group/raid with a healer you'd want this bot to focus on DPS (it's not specced/geared for healing either)
        if (HealPlayer(m_bot) & (RETURN_NO_ACTION_OK | RETURN_CONTINUE))
            return RETURN_CONTINUE;
    }

    //Used to determine if this bot has highest threat
    Unit *newTarget = m_ai->FindAttacker((PlayerbotAI::ATTACKERINFOTYPE) (PlayerbotAI::AIT_VICTIMSELF | PlayerbotAI::AIT_HIGHESTTHREAT), m_bot);
    switch (spec)
    {
        case PALADIN_SPEC_HOLY:
            if (m_ai->IsHealer())
                return RETURN_NO_ACTION_OK;
            // else: DPS (retribution, NEVER protection)

        case PALADIN_SPEC_RETRIBUTION:
            if (HAMMER_OF_WRATH > 0 && pTarget->GetHealth() < pTarget->GetMaxHealth() * 0.20 && m_ai->CastSpell (HAMMER_OF_WRATH, *pTarget))
                return RETURN_CONTINUE;
            if (ART_OF_WAR > 0 && EXORCISM > 0 && !m_bot->HasSpellCooldown(EXORCISM) && m_bot->HasAura(ART_OF_WAR, EFFECT_INDEX_0) && m_ai->CastSpell (EXORCISM, *pTarget))
                return RETURN_CONTINUE;
            if (CRUSADER_STRIKE > 0 && !m_bot->HasSpellCooldown(CRUSADER_STRIKE) && m_ai->CastSpell (CRUSADER_STRIKE, *pTarget))
                return RETURN_CONTINUE;
            if (DIVINE_STORM > 0 && /*m_ai->GetAttackerCount() >= 3 && dist <= ATTACK_DISTANCE*/ !m_bot->HasSpellCooldown(DIVINE_STORM) && m_ai->CastSpell (DIVINE_STORM, *pTarget))
                return RETURN_CONTINUE;
            if (JUDGEMENT_OF_LIGHT > 0 && m_ai->CastSpell (JUDGEMENT_OF_LIGHT, *pTarget))
                return RETURN_CONTINUE;
            if (AVENGING_WRATH > 0 && m_ai->CastSpell (AVENGING_WRATH, *m_bot))
                return RETURN_CONTINUE;
            /*if (HAMMER_OF_JUSTICE > 0 && !pTarget->HasAura(HAMMER_OF_JUSTICE, EFFECT_INDEX_0) && m_ai->CastSpell (HAMMER_OF_JUSTICE, *pTarget))
                return RETURN_CONTINUE;*/
            /*if (SACRED_SHIELD > 0 && pVictim == m_bot && m_ai->GetHealthPercent() < 70 && !m_bot->HasAura(SACRED_SHIELD, EFFECT_INDEX_0) && m_ai->CastSpell (SACRED_SHIELD, *m_bot))
                return RETURN_CONTINUE;*/
            /*if (HOLY_WRATH > 0 && m_ai->GetAttackerCount() >= 3 && dist <= ATTACK_DISTANCE && m_ai->CastSpell (HOLY_WRATH, *pTarget))
                return RETURN_CONTINUE;*/
            /*if (HAND_OF_SACRIFICE > 0 && pVictim == GetMaster() && !GetMaster()->HasAura(HAND_OF_SACRIFICE, EFFECT_INDEX_0) && m_ai->CastSpell (HAND_OF_SACRIFICE, *GetMaster()))
                return RETURN_CONTINUE;*/
            /*if (DIVINE_PROTECTION > 0 && pVictim == m_bot && !m_bot->HasAura(FORBEARANCE, EFFECT_INDEX_0) && m_ai->GetHealthPercent() < 30 && m_ai->CastSpell (DIVINE_PROTECTION, *m_bot))
                return RETURN_CONTINUE;*/
            /*if (RIGHTEOUS_DEFENSE > 0 && pVictim != m_bot && m_ai->GetHealthPercent() > 70 && m_ai->CastSpell (RIGHTEOUS_DEFENSE, *pTarget))
                return RETURN_CONTINUE;*/
            /*if (DIVINE_PLEA > 0 && !m_bot->HasAura(DIVINE_PLEA, EFFECT_INDEX_0) && m_ai->CastSpell (DIVINE_PLEA, *m_bot))
                return RETURN_CONTINUE;*/
            /*if (DIVINE_FAVOR > 0 && !m_bot->HasAura(DIVINE_FAVOR, EFFECT_INDEX_0) && m_ai->CastSpell (DIVINE_FAVOR, *m_bot))
                return RETURN_CONTINUE;*/
            return RETURN_NO_ACTION_OK;

        case PALADIN_SPEC_PROTECTION:
            //Taunt if orders specify
            if (m_ai->GetCombatOrder() == PlayerbotAI::ORDERS_TANK && !newTarget && HAND_OF_RECKONING > 0 && !m_bot->HasSpellCooldown(HAND_OF_RECKONING) && m_ai->CastSpell(HAND_OF_RECKONING, *pTarget))
                return RETURN_CONTINUE;
            if (CONSECRATION > 0 && !m_bot->HasSpellCooldown(CONSECRATION) && m_ai->CastSpell(CONSECRATION, *pTarget))
                return RETURN_CONTINUE;
            if (HOLY_SHIELD > 0 && !m_bot->HasAura(HOLY_SHIELD) && m_ai->CastSpell(HOLY_SHIELD, *m_bot))
                return RETURN_CONTINUE;
            if (AVENGERS_SHIELD > 0 && !m_bot->HasSpellCooldown(AVENGERS_SHIELD) && m_ai->CastSpell(AVENGERS_SHIELD, *pTarget))
                return RETURN_CONTINUE;
            if (HAMMER_OF_THE_RIGHTEOUS > 0 && !m_bot->HasSpellCooldown(HAMMER_OF_THE_RIGHTEOUS) && m_ai->CastSpell(HAMMER_OF_THE_RIGHTEOUS, *pTarget))
                return RETURN_CONTINUE;
            if (SHIELD_OF_RIGHTEOUSNESS > 0 && !m_bot->HasSpellCooldown(SHIELD_OF_RIGHTEOUSNESS) && m_ai->CastSpell(SHIELD_OF_RIGHTEOUSNESS, *pTarget))
                return RETURN_CONTINUE;
            if (JUDGEMENT_OF_LIGHT > 0 && m_ai->CastSpell (JUDGEMENT_OF_LIGHT, *pTarget))
                return RETURN_CONTINUE;
            return RETURN_NO_ACTION_OK;
    }

    //if (DIVINE_SHIELD > 0 && m_ai->GetHealthPercent() < 30 && pVictim == m_bot && !m_bot->HasAura(FORBEARANCE, EFFECT_INDEX_0) && !m_bot->HasAura(DIVINE_SHIELD, EFFECT_INDEX_0))
    //    m_ai->CastSpell(DIVINE_SHIELD, *m_bot);

    //if (DIVINE_SACRIFICE > 0 && m_ai->GetHealthPercent() > 50 && pVictim != m_bot && !m_bot->HasAura(DIVINE_SACRIFICE, EFFECT_INDEX_0))
    //    m_ai->CastSpell(DIVINE_SACRIFICE, *m_bot);

    return RETURN_NO_ACTION_OK;
}

CombatManeuverReturns PlayerbotPaladinAI::DoNextCombatManeuverPVP(Unit* pTarget)
{
    if (m_ai->CastSpell(HAMMER_OF_JUSTICE))
        return RETURN_CONTINUE;

    return DoNextCombatManeuverPVE(pTarget); // TODO: bad idea perhaps, but better than the alternative
}

CombatManeuverReturns PlayerbotPaladinAI::HealPlayer(Player* target)
{
    CombatManeuverReturns r = PlayerbotClassAI::HealPlayer(target);
    if (r != RETURN_NO_ACTION_OK)
        return r;

    if (!target->isAlive())
    {
        if (REDEMPTION && m_ai->CastSpell(REDEMPTION, *target))
        {
            std::string msg = "Resurrecting ";
            msg += target->GetName();
            m_bot->Say(msg, LANG_UNIVERSAL);
            return RETURN_CONTINUE;
        }
        return RETURN_NO_ACTION_ERROR; // not error per se - possibly just OOM
    }

    if (PURIFY > 0 && (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_NODISPEL) == 0)
    {
        uint32 DISPEL = CLEANSE > 0 ? CLEANSE : PURIFY;
        uint32 dispelMask  = GetDispellMask(DISPEL_DISEASE);
        uint32 dispelMask2 = GetDispellMask(DISPEL_POISON);
        uint32 dispelMask3 = GetDispellMask(DISPEL_MAGIC);
        Unit::SpellAuraHolderMap const& auras = target->GetSpellAuraHolderMap();
        for(Unit::SpellAuraHolderMap::const_iterator itr = auras.begin(); itr != auras.end(); ++itr)
        {
            SpellAuraHolder *holder = itr->second;
            if ((1 << holder->GetSpellProto()->Dispel) & dispelMask)
            {
                if (holder->GetSpellProto()->Dispel == DISPEL_DISEASE)
                {
                    if (m_ai->CastSpell(DISPEL, *target))
                        return RETURN_CONTINUE;
                    return RETURN_NO_ACTION_ERROR;
                }
            }
            else if ((1 << holder->GetSpellProto()->Dispel) & dispelMask2)
            {
                if (holder->GetSpellProto()->Dispel == DISPEL_POISON)
                {
                    if (m_ai->CastSpell(DISPEL, *target))
                        return RETURN_CONTINUE;
                    return RETURN_NO_ACTION_ERROR;
                }
            }
            else if ((1 << holder->GetSpellProto()->Dispel) & dispelMask3 & (DISPEL == CLEANSE))
            {
                if (holder->GetSpellProto()->Dispel == DISPEL_MAGIC)
                {
                    if (m_ai->CastSpell(DISPEL, *target))
                        return RETURN_CONTINUE;
                    return RETURN_NO_ACTION_ERROR;
                }
            }
        }
    }

    uint8 hp = target->GetHealthPercent();

    // Everyone is healthy enough, return OK. MUST correlate to highest value below (should be last HP check)
    if (hp >= 90)
        return RETURN_NO_ACTION_OK;

    if (hp < 25 && m_ai->CastSpell(LAY_ON_HANDS, *target))
        return RETURN_CONTINUE;

    // You probably want to save this for tank/healer trouble
    if (hp < 30 && HAND_OF_PROTECTION > 0 && !target->HasAura(FORBEARANCE, EFFECT_INDEX_0)
        && !target->HasAura(HAND_OF_PROTECTION, EFFECT_INDEX_0) && !target->HasAura(DIVINE_PROTECTION, EFFECT_INDEX_0)
        && !target->HasAura(DIVINE_SHIELD, EFFECT_INDEX_0) && (GetTargetJob(target) & (JOB_HEAL | JOB_TANK))
        && m_ai->CastSpell(HAND_OF_PROTECTION, *target))
        return RETURN_CONTINUE;

    // Isn't this more of a group heal spell?
    if (hp < 40 && m_ai->CastSpell(FLASH_OF_LIGHT, *target))
        return RETURN_CONTINUE;

    if (hp < 60 && m_ai->CastSpell(HOLY_SHOCK, *target))
        return RETURN_CONTINUE;

    if (hp < 90 && m_ai->CastSpell(HOLY_LIGHT, *target))
        return RETURN_CONTINUE;

    return RETURN_NO_ACTION_UNKNOWN;
} // end HealTarget

void PlayerbotPaladinAI::CheckAuras()
{
    if (!m_ai)  return;
    if (!m_bot) return;

    uint32 spec = m_bot->GetSpec();

    // If we have resist orders, adjust accordingly
    if (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_RESIST_FROST)
    {
        if (!m_bot->HasAura(FROST_RESISTANCE_AURA) && FROST_RESISTANCE_AURA > 0 && !m_bot->HasAura(FROST_RESISTANCE_AURA))
            m_ai->CastSpell(FROST_RESISTANCE_AURA);
        return;
    }
    else if (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_RESIST_FIRE)
    {
        if (!m_bot->HasAura(FIRE_RESISTANCE_AURA) && FIRE_RESISTANCE_AURA > 0 && !m_bot->HasAura(FIRE_RESISTANCE_AURA))
            m_ai->CastSpell(FIRE_RESISTANCE_AURA);
        return;
    }
    else if (m_ai->GetCombatOrder() & PlayerbotAI::ORDERS_RESIST_SHADOW)
    {
        // Shadow protection check is broken, they stack!
        if (!m_bot->HasAura(SHADOW_RESISTANCE_AURA) && SHADOW_RESISTANCE_AURA > 0 && !m_bot->HasAura(SHADOW_RESISTANCE_AURA)) // /*&& !m_bot->HasAura(PRAYER_OF_SHADOW_PROTECTION)*/ /*&& !m_bot->HasAura(PRAYER_OF_SHADOW_PROTECTION)*/
            m_ai->CastSpell(SHADOW_RESISTANCE_AURA);
        return;
    }

    // If we have no resist orders, adjust aura based on spec
    if (spec == PALADIN_SPEC_HOLY)
    {
        if (CONCENTRATION_AURA > 0 && !m_bot->HasAura(CONCENTRATION_AURA))
            m_ai->CastSpell(CONCENTRATION_AURA);
        return;
    }
    else if (spec == PALADIN_SPEC_PROTECTION)
    {
        if (DEVOTION_AURA > 0 && !m_bot->HasAura(DEVOTION_AURA))
            m_ai->CastSpell(DEVOTION_AURA);
        return;
    }
    else if (spec == PALADIN_SPEC_RETRIBUTION)
    {
        if (RETRIBUTION_AURA > 0 && !m_bot->HasAura(RETRIBUTION_AURA))
            m_ai->CastSpell(RETRIBUTION_AURA);
        return;
    }

}

void PlayerbotPaladinAI::CheckSeals()
{
    if (!m_ai)  return;
    if (!m_bot) return;

    uint32 spec = m_bot->GetSpec();
    uint32 RACIAL = (SEAL_OF_CORRUPTION > 0) ? SEAL_OF_CORRUPTION : SEAL_OF_VENGEANCE;

    switch(spec)
    {
        case PALADIN_SPEC_HOLY:
            //I'm not even sure if holy uses seals?
            if (SEAL_OF_WISDOM > 0 && !m_bot->HasAura(SEAL_OF_WISDOM, EFFECT_INDEX_0))
                m_ai->CastSpell(SEAL_OF_WISDOM, *m_bot);
            break;

        case PALADIN_SPEC_PROTECTION:
            if (RACIAL > 0 && !m_bot->HasAura(RACIAL, EFFECT_INDEX_0))
                m_ai->CastSpell(RACIAL, *m_bot);
            else if (SEAL_OF_RIGHTEOUSNESS > 0 && !m_bot->HasAura(SEAL_OF_RIGHTEOUSNESS, EFFECT_INDEX_0) && !m_bot->HasAura(RACIAL, EFFECT_INDEX_0))
                m_ai->CastSpell(SEAL_OF_RIGHTEOUSNESS, *m_bot);
            break;

        case PALADIN_SPEC_RETRIBUTION:
            if (RACIAL > 0 && !m_bot->HasAura(RACIAL, EFFECT_INDEX_0))
                m_ai->CastSpell(RACIAL, *m_bot);
            else if (SEAL_OF_COMMAND > 0 && !m_bot->HasAura(SEAL_OF_COMMAND, EFFECT_INDEX_0) && !m_bot->HasAura(RACIAL, EFFECT_INDEX_0))
                m_ai->CastSpell(SEAL_OF_COMMAND, *m_bot);
            else if (SEAL_OF_RIGHTEOUSNESS > 0 && !m_bot->HasAura(SEAL_OF_RIGHTEOUSNESS, EFFECT_INDEX_0) && !m_bot->HasAura(SEAL_OF_COMMAND, EFFECT_INDEX_0) && !m_bot->HasAura(RACIAL, EFFECT_INDEX_0))
                m_ai->CastSpell(SEAL_OF_RIGHTEOUSNESS, *m_bot);
            break;
    }
}

void PlayerbotPaladinAI::DoNonCombatActions()
{
    if (!m_ai)   return;
    if (!m_bot)  return;

    if (!m_bot->isAlive() || m_bot->IsInDuel()) return;

    CheckAuras();
    CheckSeals();

    //Put up RF if tank
    if (m_ai->GetCombatOrder() == PlayerbotAI::ORDERS_TANK)
        m_ai->SelfBuff(RIGHTEOUS_FURY);
    //Disable RF if not tank
    else if (m_bot->HasAura(RIGHTEOUS_FURY))
        m_bot->RemoveAurasDueToSpell(RIGHTEOUS_FURY);

    // Revive
    if (HealPlayer(GetResurrectionTarget()) & RETURN_CONTINUE)
        return;

    // Heal
    if (m_ai->IsHealer())
    {
        if (HealPlayer(GetHealTarget()) & RETURN_CONTINUE)
            return;// RETURN_CONTINUE;
    }
    else
    {
        // Is this desirable? Debatable.
        // TODO: In a group/raid with a healer you'd want this bot to focus on DPS (it's not specced/geared for healing either)
        if (HealPlayer(m_bot) & RETURN_CONTINUE)
            return;// RETURN_CONTINUE;
    }

    // buff group
    if (Buff(&PlayerbotPaladinAI::BuffHelper, 1)) // Paladin's BuffHelper takes care of choosing the specific Blessing so just pass along a non-zero value
        return;

    // mana check
    if (m_bot->getStandState() != UNIT_STAND_STATE_STAND)
        m_bot->SetStandState(UNIT_STAND_STATE_STAND);

    Item* pItem = m_ai->FindDrink();
    Item* fItem = m_ai->FindBandage();

    if (pItem != NULL && m_ai->GetManaPercent() < 40)
    {
        m_ai->TellMaster("I could use a drink.");
        m_ai->UseItem(pItem);
        return;
    }

    // hp check original
    if (m_bot->getStandState() != UNIT_STAND_STATE_STAND)
        m_bot->SetStandState(UNIT_STAND_STATE_STAND);

    pItem = m_ai->FindFood();

    if (pItem != NULL && m_ai->GetHealthPercent() < 40)
    {
        m_ai->TellMaster("I could use some food.");
        m_ai->UseItem(pItem);
        return;
    }
    else if (pItem == NULL && fItem != NULL && !m_bot->HasAura(RECENTLY_BANDAGED, EFFECT_INDEX_0) && m_ai->GetHealthPercent() < 70)
    {
        m_ai->TellMaster("I could use first aid.");
        m_ai->UseItem(fItem);
        return;
    }
}

/**
 * BuffHelper
 * BuffHelper is a static function, takes an AI, spellId (ignored for paladin) and a target and attempts to buff them as well as their pets as
 * best as possible.
 *
 * Return bool - returns true if a buff took place.
 */
bool PlayerbotPaladinAI::BuffHelper(PlayerbotAI* ai, uint32 spellId, Unit *target)
{
    if (!ai)          return false;
    if (spellId == 0) return false;
    if (!target)      return false;

    uint8 SPELL_BLESSING = 2; // See SpellSpecific enum in SpellMgr.h

    PlayerbotPaladinAI* c = (PlayerbotPaladinAI*) ai->GetClassAI();
    uint32 bigSpellId = 0;

    Pet* pet = target->GetPet();
    uint32 petSpellId = 0, petBigSpellId = 0;

    if (ai->CanReceiveSpecificSpell(SPELL_BLESSING, target))
        return false;

    // See which buff is appropriate according to class
    // TODO: take into account other paladins in the group
    switch (target->getClass())
    {
        case CLASS_DRUID:
        case CLASS_SHAMAN:
        case CLASS_PALADIN:
            spellId = c->BLESSING_OF_MIGHT;
            if (!spellId)
            {
                spellId = c->BLESSING_OF_KINGS;
                if (!spellId)
                {
                    spellId = c->BLESSING_OF_WISDOM;
                    if (!spellId)
                    {
                        spellId = c->BLESSING_OF_SANCTUARY;
                        if (!spellId)
                            return false;
                    }
                }
            }
            break;
        case CLASS_HUNTER:
            if (pet && ai->CanReceiveSpecificSpell(SPELL_BLESSING, pet) && !pet->HasAuraType(SPELL_AURA_MOD_UNATTACKABLE))
            {
                petSpellId = c->BLESSING_OF_MIGHT;
                if (!petSpellId)
                {
                    petSpellId = c->BLESSING_OF_KINGS;
                    if (!petSpellId)
                        petSpellId = c->BLESSING_OF_SANCTUARY;
                }
            }
        case CLASS_ROGUE:
        case CLASS_WARRIOR:
            spellId = c->BLESSING_OF_MIGHT;
            if (!spellId)
            {
                spellId = c->BLESSING_OF_KINGS;
                if (!spellId)
                {
                    spellId = c->BLESSING_OF_SANCTUARY;
                    if (!spellId)
                        return false;
                }
            }
            break;
        case CLASS_WARLOCK:
            if (pet && ai->CanReceiveSpecificSpell(SPELL_BLESSING, pet) && !pet->HasAuraType(SPELL_AURA_MOD_UNATTACKABLE))
            {
                if (pet->getPowerType() == POWER_MANA)
                    petSpellId = c->BLESSING_OF_WISDOM;
                else
                    petSpellId = c->BLESSING_OF_MIGHT;

                if (!petSpellId)
                {
                    petSpellId = c->BLESSING_OF_KINGS;
                    if (!petSpellId)
                        petSpellId = c->BLESSING_OF_SANCTUARY;
                }
            }
        case CLASS_PRIEST:
        case CLASS_MAGE:
            spellId = c->BLESSING_OF_WISDOM;
            if (!spellId)
            {
                spellId = c->BLESSING_OF_KINGS;
                if (!spellId)
                {
                    spellId = c->BLESSING_OF_SANCTUARY;
                    if (!spellId)
                        return false;
                }
            }
            break;
    }

    if (petSpellId == c->BLESSING_OF_MIGHT)
        petBigSpellId = c->GREATER_BLESSING_OF_MIGHT;
    else if (petSpellId == c->BLESSING_OF_WISDOM)
        petBigSpellId = c->GREATER_BLESSING_OF_WISDOM;
    else if (petSpellId == c->BLESSING_OF_KINGS)
        petBigSpellId = c->GREATER_BLESSING_OF_KINGS;
    else if (petSpellId == c->BLESSING_OF_SANCTUARY)
        petBigSpellId = c->GREATER_BLESSING_OF_SANCTUARY;

    if (spellId == c->BLESSING_OF_MIGHT)
        bigSpellId = c->GREATER_BLESSING_OF_MIGHT;
    else if (spellId == c->BLESSING_OF_WISDOM)
        bigSpellId = c->GREATER_BLESSING_OF_WISDOM;
    else if (spellId == c->BLESSING_OF_KINGS)
        bigSpellId = c->GREATER_BLESSING_OF_KINGS;
    else if (spellId == c->BLESSING_OF_SANCTUARY)
        bigSpellId = c->GREATER_BLESSING_OF_SANCTUARY;

    if (bigSpellId && ai->HasSpellReagents(bigSpellId) && ((petSpellId && ai->Buff(petBigSpellId, pet)) || ai->Buff(bigSpellId, target)))
        return true;
    else
        return ( (petSpellId && ai->Buff(petSpellId, target)) || ai->Buff(spellId, target) );
}
