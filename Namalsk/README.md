Mods Needed:

@CF - 1559212036
@Community-Online-Tools - 1564026768
@Namalsk Island - 2289456201
@Namalsk Survival - 2289461232
@Dabs Framework - 2545327648
@DayZ Editor Loader - 2276010135
@GW_Server_Tweaks - 3381212211
@InediaInfectedAI - 3031784065
@Survivor Animations - 2918418331
@DayZ-Bicycle - 2971190303

The mod "@GW_Server_Tweaks" can be swapped out for "@BuilderItems; @GoatTeam6"

Admins:

Community Online Tools Admin Permisions:
Need to have run the intance once and logged on.
ProfilesFolder > PermisionsFramework > Players
If you are the first and only to have logged on to the server there will only be one file. If you were not the only one to have logged in you need to find your guid file.
To find your guid go Profilesfolder and open the first log that end with .adm. In it you should find "04:33:51 | Player "PlayerName"(id=11aa22bb33cc44dd55ee66f77gg88hh99iijjkkllmmnnoo=) is connected". Now go look for the file with the same name as what is after id=.
You will see the following:

{
    "Roles": [
        "everyone"
    ]
}

You can change "everyone" to "admin" .

Run the server again and log on. Once logged on activate the admin tool by pressing the "End" key on you keyboard.
Can be found in ProfilesFolder > CommunityOnlineTools > Logs (Use the latest log) e.i: [COT 2025-1M-4D 11:47:25] 11223344556677889: Activated Community Online Tools [guid=11aa22bb33cc44dd55ee66f77gg88hh99iijjkkllmmnnoo=].
Copy the 17 digit log number that appear right after the time stamp into the below file as shown
Profilesfodler > Inedia > InediaAdminsConfig.json

{
    "AdminsSteamIds": ["11223344556677889"]
}