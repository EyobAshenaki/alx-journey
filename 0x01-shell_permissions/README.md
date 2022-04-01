'1-who_am_i' switches the current user to the user 'betty'
'1-who_am_i' script prints the effective username of the current user
'3-new_owner' script chages the owner of the file 'hello' to the user 'betty'
'4-empty' script creates an empty file called 'hello'
'5-execute. script adds execute permission to the owner of the file 'hello'
'6-multiple_permissions' adds execute permission to the owner and the group owner, and read permission to other users, to the file 'hello'
'7-everybody' script adds execution permission to the owner, the group owner and the other users, to the file 'hello'
'8-James_Bond' script sets owner and group: no permission at all and other users: all the permissions to the file 'hello'
'9-John_Doe' script sets the mode of the file 'hello' to this: '-rwxr-x-wx 1 julien julien 23 Sep 20 14:25 hello'
'10-mirror_permissions' script sets the mode of the file 'hello' the same as 'olleh's' mode
'11-directories_permissions' script adds execute permission to all subdirectories of the current directory for the owner, the group owner and all other users without affecting regular files
'12-directory_permissions' script creates a directory called 'my_dir' with permiddions 751 in the working directory
'13-change_group' script changes the group owner to 'school' for the file 'hello'
'100-change_owner_and_group' script changes the ownet to 'vincent' and the group owner to 'staff' for all the files and directories in the working directory
'101-symbolic_link_permissions' script changes the owner and the group owner of '_hello' which is a symbolic link to 'vincent' and 'staff' repectively
'102-if_only' script changes the owner of the file 'hello' to 'betty' only if it is owned by the user 'guillaume'
