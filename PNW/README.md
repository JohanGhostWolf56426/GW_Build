Mods Needed:

@CF - 1559212036
@Community-Online-Tools - 1564026768
@PNW 2.0  - 3290318225

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