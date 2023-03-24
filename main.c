#include <stdio.h>
#include <string.h>

void Disclaimer() {
    printf("Disclaimer: This app is for fun pourpose only\n"\
        "and you can use it only on servers that sv_cheats is set to 1\n\n");
    return;
}

void grenades(const char *x, char *y) {
    if(strcmp(x, "smoke") == 0) {
        strcpy(y, "weapon_smokegrenade\n\n");
    }
    else if(strcmp(x, "flash") == 0) {
        strcpy(y, "weapon_flashbang\n\n");
    }
    else if(strcmp(x, "grenade") == 0) {
        strcpy(y, "weapon_hegrenade\n\n");
    }
    else if(strcmp(x, "incendiary") == 0) {
        strcpy(y, "weapon_incgrenade\n\n");
    }
    else if(strcmp(x, "molotov") == 0) {
        strcpy(y, "weapon_molotov\n\n");
    }
    else if(strcmp(x, "decoy") == 0) {
        strcpy(y, "weapon_decoy\n\n");
    }
}

void weapons(const char *x, char *y) {
    if(strcmp(x, "AK47") == 0) {
        strcpy(y, "weapon_ak47\n\n");
    }
    else if(strcmp(x, "AUG") == 0) {
        strcpy(y, "weapon_aug\n\n");
    }
    else if(strcmp(x, "AWP") == 0) {
        strcpy(y, "weapon_awp\n\n");
    }
    else if(strcmp(x, "CZ75") == 0) {
        strcpy(y, "weapon_cz75a\n\n");
    }
    else if(strcmp(x, "DesertEagle") == 0) {
        strcpy(y, "weapon_deagle\n\n");
    }
    else if(strcmp(x, "DualBerettas") == 0) {
        strcpy(y, "weapon_elite\n\n");
    }
    else if(strcmp(x, "FAMAS") == 0) {
        strcpy(y, "weapon_famas\n\n");
    }
    else if(strcmp(x, "Five-SeveN") == 0) {
        strcpy(y, "weapon_fiveseven\n\n");
    }
    else if(strcmp(x, "G3SG1") == 0) {
        strcpy(y, "weapon_g3sg1\n\n");
    }
    else if(strcmp(x, "Gali") == 0) {
        strcpy(y, "weapon_galilar\n\n");
    }
    else if(strcmp(x, "Glock") == 0) {
        strcpy(y, "weapon_glock\n\n");
    }
    else if(strcmp(x, "P2000") == 0) {
        strcpy(y, "weapon_hkp2000\n\n");
    }
    else if(strcmp(x, "Knife") == 0) {
        strcpy(y, "weapon_knife\n\n");
    }
    else if(strcmp(x, "M249") == 0) {
        strcpy(y, "weapon_m249\n\n");
    }
    else if(strcmp(x, "M4A4") == 0) {
        strcpy(y, "weapon_m4a1\n\n");
    }
    else if(strcmp(x, "M4A1-S") == 0) {
        strcpy(y, "weapon_m4a1_silencer\n\n");
    }
    else if(strcmp(x, "MAC") == 0) {
        strcpy(y, "weapon_mac10\n\n");
    }
    else if(strcmp(x, "MAG") == 0) {
        strcpy(y, "weapon_mag7\n\n");
    }
    else if(strcmp(x, "MP5") == 0) {
        strcpy(y, "weapon_mp5sd\n\n");
    }
    else if(strcmp(x, "MP7") == 0) {
        strcpy(y, "weapon_mp7\n\n");
    }
    else if(strcmp(x, "MP9") == 0) {
        strcpy(y, "weapon_mp9\n\n");
    }
    else if(strcmp(x, "Negev") == 0) {
        strcpy(y, "weapon_negev\n\n");
    }
    else if(strcmp(x, "Nova") == 0) {
        strcpy(y, "weapon_nova\n\n");
    }
    else if(strcmp(x, "P250") == 0) {
        strcpy(y, "weapon_p250\n\n");
    }
    else if(strcmp(x, "Sawed-Off") == 0) {
        strcpy(y, "weapon_sawedoff\n\n");
    }
    else if(strcmp(x, "SCAR") == 0) {
        strcpy(y, "weapon_scar20\n\n");
    }
    else if(strcmp(x, "SG") == 0) {
        strcpy(y, "weapon_sg556\n\n");
    }
    else if(strcmp(x, "SSG") == 0) {
        strcpy(y, "weapon_ssg08\n\n");
    }
    else if(strcmp(x, "TEC-9") == 0) {
        strcpy(y, "weapon_tec9\n\n");
    }
    else if(strcmp(x, "UMP") == 0) {
        strcpy(y, "weapon_ump45\n\n");
    }
    else if(strcmp(x, "USP") == 0) {
        strcpy(y, "weapon_usp_silencer\n\n");
    }
    else if(strcmp(x, "XM1014") == 0) {
        strcpy(y, "weapon_xm1014\n\n");
    }
    else if(strcmp(x, "Revolver") == 0) {
        strcpy(y, "weapon_revolver\n\n");
    }
}

void tactic(const char *x, char *y) {
    if(strcmp(x, "defuse") == 0) {
        strcpy(y, "item_defuser\n\n");
    }
    else if(strcmp(x, "armour") == 0) {
        strcpy(y, "item_assaultsuit\n\n");
    }
    else if(strcmp(x, "zeus") == 0) {
        strcpy(y, "weapon_taser\n\n");
    }
}

void help() {
    Disclaimer();
    printf("We currently support those weapons and grenades:\n");
    printf("smoke | flash | grenade | incendiary | molotov | decoy\n");
    printf("AK47 | AUG | AWP | CZ75 | DesertEagle | DualBerettas | FAMAS\n");
    printf("Five-SeveN | G3SG1 | Gali | Glock | P2000 | Knife | M249\n");
    printf("M4A4 | M4A1-S | MAC | MAG | MP5 | MP7 | MP9\n");
    printf("Negev | Nova | P250 | Sawed-Off | SCAR | SG | SSG\n");
    printf("TEC-9 | UMP | XM1014 | Revolver | defuse | zeus | armour\n");
}

void other_cheats() {
    char godmode[128]      = "god: enabling godmode\n";
    char noclip[128]       = "noclip: let's you to move trough walls, and fly\n";
    char wallvision[128]   = "r_drawothermodels 2 let's you see trough walls\n";
    char nospread[128]     = "weapon_accuracy_nospread 0 disables the spread of the bullets\n";
    char norecoil[128]     = "weapon_recoil_scale 0 disables the rcoil of any weapon\n";
    char botaimbot[128]    = "ent_fire cs_bot AddOutput “ModelScale 0” enables aimbot against the bots\n";
    char playeraimbot[128] = "ent_fire player AddOutput “ModelScale 0” enables aimbot against the players\n";
    char infiniteammo[128] = "sv_infinite_ammo 1 gives you infinite ammo\n";
    char noflash[128]      = "mat_fillrate 1 disables the flashes against you\n";
    char nosmoke[128]      = "r_drawparticles 0 disables the smokes on you\n";
    printf("%s%s%s%s%s%s%s%s%s%s\n\n", godmode, noclip, wallvision, nospread, norecoil, botaimbot, playeraimbot, infiniteammo, noflash, nosmoke);
}

int main() {
    char x[1024];
    char y[1024];
    Disclaimer();
    while(1) {
        printf(">>> ");
        scanf("%s", x);

        if (strcmp(x, "exit") == 0) {
            printf("Thanks for stopping by at cheats shop!\n");
            break;
        } else if (strcmp(x, "help") == 0) {
            help();
        } else if (strcmp(x, "other") == 0) {
            other_cheats();
        } else {
            tactic(x, y);
            grenades(x, y);
            weapons(x, y);
            printf("give %s\n", y);
        }
    }
    return 0;
}