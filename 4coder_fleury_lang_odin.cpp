
internal F4_LANGUAGE_INDEXFILE(F4_Odin_IndexFile)
{
    int scope_nest = 0;
    for(;!ctx->done;)
    {
        Token *name = 0;
        F4_Index_TokenSkipFlags flags = F4_Index_TokenSkipFlag_SkipWhitespace;
        
        // NOTE(rjf): Handle nests.
        {
            Token *token = token_it_read(&ctx->it);
            if(token)
            {
                if(token->kind == TokenBaseKind_ScopeOpen)
                {
                    scope_nest += 1;
                }
                else if(token->kind == TokenBaseKind_ScopeClose)
                {
                    scope_nest -= 1;
                }
                if(scope_nest < 0)
                {
                    scope_nest = 0;
                }
            }
        }
        
        if(F4_Index_RequireTokenKind(ctx, TokenBaseKind_Identifier, &name, flags))
        {
            
            // NOTE(rjf): Definitions
            if(F4_Index_RequireToken(ctx, S8Lit("::"), flags))
            {
                // NOTE(rjf): Procedures
                if(F4_Index_PeekToken(ctx, S8Lit("(")) ||
                   (F4_Index_RequireToken(ctx, S8Lit("inline"), flags) &&
                    F4_Index_PeekToken(ctx, S8Lit("("))))
                {
                    F4_Index_Note *parent = F4_Index_MakeNote(ctx, Ii64(name), F4_Index_NoteKind_Function, 0);
                    F4_Jai_ParseDeclSet_Parens(ctx, parent);
                }
                // NOTE(rjf): Structs
                else if(F4_Index_RequireToken(ctx, S8Lit("struct"), flags))
                {
                    F4_Index_Note *parent = F4_Index_MakeNote(ctx, Ii64(name), F4_Index_NoteKind_Type, F4_Index_NoteFlag_ProductType);
                    F4_Jai_ParseDeclSet_Braces(ctx, parent);
                }
                // NOTE(rjf): Unions
                else if(F4_Index_RequireToken(ctx, S8Lit("union"), flags))
                {
                    F4_Index_Note *parent = F4_Index_MakeNote(ctx, Ii64(name), F4_Index_NoteKind_Type, F4_Index_NoteFlag_SumType);
                    F4_Jai_ParseDeclSet_Braces(ctx, parent);
                }
                // NOTE(rjf): Enums
                else if(F4_Index_RequireToken(ctx, S8Lit("enum"), flags))
                {
                    F4_Index_MakeNote(ctx, Ii64(name), F4_Index_NoteKind_Type, 0);
                }
                // NOTE(rjf): Constants
                else if(F4_Index_RequireTokenKind(ctx, TokenBaseKind_Identifier, 0, flags) ||
                        F4_Index_RequireTokenKind(ctx, TokenBaseKind_LiteralInteger, 0, flags) ||
                        F4_Index_RequireTokenKind(ctx, TokenBaseKind_LiteralFloat, 0, flags) ||
                        F4_Index_RequireTokenKind(ctx, TokenBaseKind_LiteralString, 0, flags))
                {
                    F4_Index_MakeNote(ctx, Ii64(name), F4_Index_NoteKind_Constant, 0);
                }
            }
        }
        
        //~ NOTE(rjf): Comment Tags
        else if(F4_Index_RequireTokenKind(ctx, TokenBaseKind_Comment, &name, F4_Index_TokenSkipFlag_SkipWhitespace))
        {
            F4_Index_ParseComment(ctx, name);
        }
        
        else
        {
            F4_Index_ParseCtx_Inc(ctx, flags);
        }
    }
}

internal F4_LANGUAGE_POSCONTEXT(F4_Jai_PosContext)
{
}

internal F4_LANGUAGE_HIGHLIGHT(F4_Jai_Highlight)
{
}