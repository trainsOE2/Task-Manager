# -*- coding: utf-8 -*-
# Generated by Django 1.10.2 on 2016-11-29 05:33
from __future__ import unicode_literals

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('Tasks', '0004_auto_20161129_1020'),
    ]

    operations = [
        migrations.RenameField(
            model_name='goal',
            old_name='desc',
            new_name='illustrate',
        ),
    ]