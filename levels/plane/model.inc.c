
Vtx plane_dl_Plane_mesh_layer_1_vtx_0[4] = {
	{{ {-699, 0, 699}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {699, 0, 699}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {699, 0, -699}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-699, 0, -699}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx plane_dl_Plane_mesh_layer_1_tri_0[] = {
	gsSPVertex(plane_dl_Plane_mesh_layer_1_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_plane_dl_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
    gsSPLightColor(LIGHT_1, 0xffffffff),
    gsSPLightColor(LIGHT_2, 0x7f7f7fff),
	gsSPEndDisplayList(),
};

Gfx plane_dl_Plane_mesh_layer_1[] = {
	gsSPDisplayList(mat_plane_dl_f3dlite_material),
	gsSPDisplayList(plane_dl_Plane_mesh_layer_1_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

